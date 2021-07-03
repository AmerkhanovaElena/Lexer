#pragma once
#include <string>

enum class TokenType
{
	IDENTIFIER,
	INTEGER,
	FLOAT,
	CHAR,
	STRING,
	KEY_WORD,
	ASSIGNMENT,
	ARITHMETIC_OPERATOR,
	COMPARISON_OPERATOR,
	LOGIC_OPERATOR,
	BRACKET,
	SEPARATOR,
	COMMENT,
	ERROR,
	EoF
};

struct Token
{
	TokenType type;
	std::string value;
	size_t line = 0;
	size_t position = 0;
};