#include <bits/stdc++.h>
using namespace std;

int reverse_number(int number)
{
    stringstream ss;
    ss << number;
    string str = ss.str();
    reverse(str.begin(), str.end());
    int i;
    i = stoi(str);
    return i;
}

int main()
{
    int max_digit = 999;
    int min_digit = 100;
    int d = max_digit;
    int number = d * d;

    for (;;)
    {
        if (number == reverse_number(number))
        {
            d = max_digit;

            while (number % d != 0)
                d--;

            if ((number / d) >= min_digit and
                (number / d) <= max_digit and
                d >= min_digit and d <= max_digit)
            {
                break;
            }
        }
        number--;
    }

    cout << number << endl;
    cout << d << endl;

    return EXIT_SUCCESS;
}
