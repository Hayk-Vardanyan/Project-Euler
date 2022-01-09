#include <iostream>
#include <cmath>


typedef unsigned long long int big;

bool is_prime(big num)
{
            
    big count = 0;
   
    int square_root = (int) sqrt(num) + 1;
   
for (int i = 2; i < square_root; i++) {
   
   if(num % i == 0)
   {
       return false;
   }
   
   
}

return true;

if(count > 500) { return true; }

    return false;
}



big count_primes_below2M()
{
    big sum = 0;
    for(int i = 2; i < 2000000; ++i)
    {
        if(is_prime(i))
        {
            sum += i;
        }
    }
   return sum;
}

int main()
{
    std::cout << "\nThe number is\t" << count_primes_below2M();

    return 0;
}
