#include <iostream>
#include <cmath>

typedef unsigned long long int big;

big sum_of_divisors(big num)
{
    big count = 0;
   
    for(int i = 1; i < num; ++i)
    {
        if(num % i == 0)
        {
            count += i;
        }
    }
   
    return count;
}


big amicable_numbers_sum()
{
    big count = 0;
   
    for(int i = 1; i < 10000; ++i)
    {
        int sum  = sum_of_divisors(i);
        int sum2 = sum_of_divisors(sum);
       
       
        if(sum2 == i && sum != i)
        {
            count += i;
        }
       
       
    }
   
    return count;
}

int main()
{
    std::cout << amicable_numbers_sum();
}
