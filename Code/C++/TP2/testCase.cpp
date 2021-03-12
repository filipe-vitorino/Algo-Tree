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

bool array_check(int *v1, int *v2, int tam){
    int i;
    for(i=0; i<tam; i++){
        if(v1[i] != v2[i] ){
            return false;
        }
    }
    return true;
}

#include "../quick_sort.cpp"
TEST_CASE("Testando QuickSort"){
    int a[1] = {1};
    int r1[1] = {1};
    int* a_sort = quickSort(a, 0, 0);
    CHECK(array_check(a_sort, r1,1) == true);
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    int* b_sort = quickSort(b, 0, 9);
    int c[10] = {5,9,3,1,7,2,10,8,4,6};
    int* c_sort = quickSort(c, 0, 9);
    int result[10] = {1,2,3,4,5,6,7,8,9,10};
    CHECK(array_check(b_sort, result, 10) == true);
    CHECK(array_check(c_sort, result, 10) == true);
}

#include "../merge_sort.cpp"
TEST_CASE("Testando MergeSort"){
    int a[10] = {1};
    int r1[1] = {1};
    mergesort(a, 0, 0);
    CHECK(array_check(a, r1,1) == true);
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    mergesort(b, 0, 9);
    int c[10] = {5,9,3,1,7,2,10,8,4,6};
    mergesort(c, 0, 9);
    int result[10] = {1,2,3,4,5,6,7,8,9,10};
    CHECK(array_check(b, result, 10) == true);
    CHECK(array_check(c, result, 10) == true);
}

#include "../heap_sort.cpp"
TEST_CASE("Testando HeapSort"){
    vector<int> a{-1,1};
    int r1[1] = {1};
    heapsort(a);
    int *a_sort = &a[1];
    vector<int> b{-1,1,2,3,4,5,6,7,8,9,10};
    heapsort(b);
    int *b_sort = &b[1];
    vector<int> c{-1,5,9,3,1,7,2,10,8,4,6};
    heapsort(c);
    int *c_sort = &c[1];
    int result[10] = {1,2,3,4,5,6,7,8,9,10};
    CHECK(array_check(a_sort, r1,1) == true);
    CHECK(array_check(b_sort, result, 10) == true);
    CHECK(array_check(c_sort, result, 10) == true);
}