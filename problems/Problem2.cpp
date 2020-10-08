#include <iostream>
#define LIMIT 4'000'000

using namespace std;

int32_t main()
{
    int32_t p = 0, c = 1, fib = 0, sum = 0;
    
    while (fib <= LIMIT)
    {
        fib = p + c;
        if (fib % 2 == 0)
        {
            sum += fib;
        }
        p = c;
        c = fib;
    }

    cout << sum << endl;

    return EXIT_SUCCESS;
}
