#include <stdio.h>
#include <assert.h>

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int test()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-3, 2) == 6);
    assert(multiply(0, 0) == 0);
    assert(multiply(123, 123) == 15129);
}

// This is the main function. The program starts here!
int main()
{
    printf("Yoyo, Little Ross!");
    test();
    return 0;
}
