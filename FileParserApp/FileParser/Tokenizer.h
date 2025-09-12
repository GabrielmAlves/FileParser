#pragma once
#include <vector>
#include<string>

class Tokenizer {
public:
	Tokenizer();
	~Tokenizer();
	std::vector<std::string> GetToken(const std::string& fileContent);
private:
	std::vector<std::string> tokens;
};