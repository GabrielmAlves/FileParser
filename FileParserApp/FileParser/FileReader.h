#pragma once
#include <string>

class FileReader {
public:
	explicit FileReader(const std::string& fileName);
	std::string ReadFileContent(const std::string& fileName);
private:
	std::string m_fileName;
};