#include "FileReader.h"
#include <fstream>
#include <string>
#include <sstream>

FileReader::FileReader(const std::string& fileName) : m_fileName(fileName) {}

std::string FileReader::ReadFileContent(const std::string& fileName) {
	const std::ifstream fileToBeRead(fileName);
	std::ostringstream fileContentBuffer;

	if (!fileToBeRead)
		throw std::runtime_error("Something went wrong when opening file: " + fileName);

	fileContentBuffer << fileToBeRead.rdbuf();

	return fileContentBuffer.str();
}