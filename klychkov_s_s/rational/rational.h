#pragma once

#ifndef RATIONALHPP
#define RATIONALHPP
#include <iosfwd>


class Rational{
private:
    void gcd();
    Rational gcd(int32_t num, int32_t denum);
    Rational gcd(Rational& rhs);

private:
    int32_t num;
	int32_t denum;
	static const char slash = '/';

public:
    Rational();
	Rational(const Rational&);
	Rational(const int32_t num);
	Rational(const int32_t num, const int32_t denum);

	Rational& operator+=(const Rational&);
	Rational& operator-=(const Rational&);
	Rational& operator*=(const Rational&);
	Rational& operator/=(const Rational&);

	Rational& operator++();
	Rational& operator--();
	Rational& operator++(const int32_t); // !
	Rational& operator--(const int32_t); // !

	bool operator==(const Rational&) const;
	bool operator>(const Rational&) const;

    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& readFrom(std::istream& istrm);

};

Rational operator+(const Rational&, const Rational&);
Rational operator-(const Rational&, const Rational&);
Rational operator*(const Rational&, const Rational&);
Rational operator/(const Rational&, const Rational&);


Rational operator+(const Rational&, const int32_t&);
Rational operator-(const Rational&, const int32_t&);
Rational operator*(const Rational&, const int32_t&);
Rational operator/(const Rational&, const int32_t&);

bool operator<(const Rational&, const Rational&);
bool operator!=(const Rational&, const Rational&);
bool operator<=(const Rational&, const Rational&);
bool operator>=(const Rational&, const Rational&);

Rational pow(const Rational, const int32_t);

std::ostream& operator<<(std::ostream& ostrm, const Rational& temp);
std::istream& operator>>(std::istream& istrm, Rational& temp);

#endif