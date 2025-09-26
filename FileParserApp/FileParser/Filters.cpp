#include "Filters.h"
#include "Token.h"
#include <vector>
#include <string>
#include <unordered_set>

std::vector<Token> Normalizer::applyFilter(const std::vector<Token>& inputTokens) {
	std::vector<Token> tokensWithFilter;

	return tokensWithFilter;
}

StopwordFilter::StopwordFilter(const std::unordered_set<std::string>& stopwordsList)
	: stopwords(stopwordsList) {}

std::vector<Token> StopwordFilter::applyFilter(const std::vector<Token>& inputTokens) {
	std::vector<Token> tokensWithFilter;

	return tokensWithFilter;
}