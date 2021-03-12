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

#include "../check_prime.cpp"
TEST_CASE("Testando funcao verifica primalidade") {
    sieve();
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    //numeros de fermat
    CHECK(isPrime(3) == true);
    CHECK(isPrime(5) == true);
    CHECK(isPrime(7) == true);
    CHECK(isPrime(257) == true);  
    CHECK(isPrime(65537) == true);  
}

#include "../quick_sort.cpp"
TEST_CASE("Testando QuickSort"){
    CHECK(quickSort([1], 0, 0) == [1]);
    CHECK(quickSort([1,2,3,4,5,6,7,8,9,10], 0, 9) == [1,2,3,4,5,6,7,8,9,10]);
    CHECK(quickSort([5,9,3,1,7,2,10,8,4,6], 0, 9) == [1,2,3,4,5,6,7,8,9,10]);
}