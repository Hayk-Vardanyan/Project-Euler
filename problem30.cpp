#include <iostream>
#include <cmath>

long long sum_of_numbers()
{
    long long all_sums = 0;
    double max_possible = 6 * pow(9, 5);
    
    for(int i = 2; i < max_possible; ++i )
    {
        int sum_of_digits = 0;
        int tmp = i;
         
        while(tmp > 0)
        {
            int RightMost = tmp % 10;
            
            sum_of_digits += pow(RightMost, 5);
            
            tmp /= 10;
            
        }
        
        if(sum_of_digits == i)
        {
            all_sums += i;
        }
        
    }
    
    return all_sums;
}

int main()
{
    std::cout << sum_of_numbers();
}
