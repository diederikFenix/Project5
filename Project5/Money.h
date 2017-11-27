#pragma once
#include <vector>
#include <iosfwd>

class Money {
	int m_dollar;
public:
	Money() : m_dollar(500) { }
	Money(int dollar) : m_dollar(dollar) { }
	Money& operator+=(Money const& money);
	friend std::ostream& operator<<(std::ostream& os, Money const& money);
};
