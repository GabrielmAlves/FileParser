#pragma once
#include <vector>
#include<string>
#include "Token.h"

class Tokenizer {
public:
	explicit Tokenizer() = default;
	~Tokenizer();
	std::vector<Token> tokenize(const std::string& fileContent);
};