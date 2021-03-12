#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"




#include "../factorial.cpp"

TEST_CASE("Testando funcao fatorial") {
    CHECK(fact(0) == 1);
    CHECK(fact(1) == 1);
    CHECK(fact(2) == 2);
    CHECK(fact(3) == 6);
    CHECK(fact(10) == 3628800);
}



#include "../fibonacci.cpp"
TEST_CASE("Testando funcao fibonacci") {
    CHECK(fib(0) == 0);
    CHECK(fib(1) == 1);
    CHECK(fib(2) == 1);
    CHECK(fib(3) == 2);
    CHECK(fib(20) == 6765);
}

