// An ineffective solution
#include <bits/stdc++.h>
using namespace std;

#define LIMIT 1000'000'000

int main()
{
    bool flag;
    for (int num = 1; num <= LIMIT; ++num)
    {
        flag = true;
        for (int j = 1; j <= 20; ++j)
        {
            if (num % j != 0)
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << num << endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}