#include <iostream>
#include <cmath>

typedef unsigned long long int big;

bool is_prime(big num)
{
    for(big i = 2; i < sqrt(num); ++i)
    {
        if(num % i == 0) { return false; }
    }
    return true;
}

int largest_prime_factor(big num)
{
    big max = 0;
    big tmp = 0;
   
    for(big i = 1; i < sqrt(num); ++i)
    {
        if(num % i == 0 && (is_prime(i)))
        {
            tmp = i;
           
            if(tmp > max)
            {
            max = i;
            }
        }
    }
    return max;
}

int main()
{
    std::cout << largest_prime_factor(600851475143);
}

