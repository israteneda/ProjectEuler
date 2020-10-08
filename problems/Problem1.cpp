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