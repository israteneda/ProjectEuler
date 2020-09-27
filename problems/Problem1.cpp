/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>
#include <iso646.h>

using namespace std;

int32_t main()
{
    unsigned sum = 0;
    for (unsigned i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 or i % 5 == 0)
            sum += i;
    }

    cout << sum << endl;

    return EXIT_SUCCESS;
}