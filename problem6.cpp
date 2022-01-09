#include <iostream>
#include <cmath>


int difference_of_squares()
{
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 1; i <= 100; ++i)
    {
        sum1 += pow(i,2);
        sum2 += i;
    }
    return pow(sum2,2) - sum1;
}


int main()
{
    std::cout << difference_of_squares();
}
