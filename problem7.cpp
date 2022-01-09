#include <iostream>
#include <cmath>

bool is_prime(int number)
{
    for(int i = 2; i <= sqrt(number); ++i)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    
    return true;
}


int prime_number_10001th()
{
    int count = 0;
    int number = 0;
    
    for(int i = 2; ; ++i)
    {
        if(is_prime(i))
        {
            ++count;
        }
        if(count == 10001)
        {
            number = i;
            break;
        }
    }
    
    return number;
}


int main()
{
    std::cout << prime_number_10001th();
}
