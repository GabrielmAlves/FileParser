#pragma once
#include <string>
#include <string_view>

struct Token {
	std::string_view text;
	size_t initialIndex;
	size_t endIndex;
};