#include "FileReader.h"
#include <fstream>
#include <iostream>
#include <string>

std::string FileReader::ReadFileContent(const std::string& fileName) {
	std::ifstream fileToBeRead(fileName);

	if (!fileToBeRead)
		throw std::runtime_error("Something went wrong when opening file: " + fileName);
}