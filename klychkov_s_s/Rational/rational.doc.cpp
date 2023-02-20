#include <rational/rational.h>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <iostream>

Rational a(4, 3);
Rational b(1, 2);

Rational sum(11, 6);
Rational dif(5, 6);
Rational prod(2, 3);
Rational divisions(8, 3);
Rational mod(1, 3);
Rational thirdPow_a(64, 27);

TEST_CASE("checking arithmetic") {
    CHECK(a + b == sum);
    CHECK(a - b == dif);
    CHECK(a * b == prod);
    CHECK(a / b == divisions);
}



TEST_CASE("checking custom") {
    CHECK(pow(a, 3) == thirdPow_a);
}

bool less = false;
bool equal = false;
bool bigger = true;

TEST_CASE("checking boolean") {
    CHECK((a < b) == less);
    CHECK((a == b) == equal);
    CHECK((a > b) == bigger);
}
