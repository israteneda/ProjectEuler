/*
   The prime factors of 13195 are 5, 7, 13 and 29.
   What is the largest prime factor of the number 600851475143 ?
   */

#include <iostream>
#include <iso646.h>

#define ll long long

bool is_divisible(ll prime);

int32_t main()
{
    ll res, prime = 2, max_prime = 0;
    bool divisible;

    std::cin >> res;

    while (res != 1)
    {
        if (res % prime == 0)
        {
            res = res / prime;

            if (prime > max_prime)
                max_prime = prime;
        }

        do
        { prime++;} 
        while ((prime % 1 == 0) and (prime % prime == 0) and not(is_divisible(prime)));
    }

    std::cout << max_prime << std::endl;

    return EXIT_SUCCESS;
}

bool is_divisible(ll prime)
{
    ll base = prime;
    while(prime--)
    {
        if (base % prime == 0)
            return true;
    }
    return false;
}
