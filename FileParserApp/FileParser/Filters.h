#pragma once
#include "Token.h"
#include <vector>
#include <string>
#include <unordered_set>

class ITokenFilter {
public:
	virtual ~ITokenFilter() = default;
	virtual std::vector<Token> applyFilter(const std::vector<Token>& inputTokens) = 0;
};

class Normalizer : public ITokenFilter {
public:
	std::vector<Token> applyFilter(const std::vector<Token>& inputTokens) override;
};

class StopwordFilter : public ITokenFilter {
public:
	explicit StopwordFilter(const std::unordered_set<std::string>& stopwordsList);
	std::vector<Token> applyFilter(const std::vector<Token>& inputTokens);
private:
	std::unordered_set<std::string> stopwords;
};