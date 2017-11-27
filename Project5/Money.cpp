#include "Money.h"
#include <iostream>

Money& Money::operator+=(Money const& money)
{
	m_dollar += money.m_dollar;
	return *this;
}

std::ostream& operator<<(std::ostream& os, Money const& money)
{
	os << '$' << money.m_zdollar;
	return os;
}