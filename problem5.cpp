#include <iostream>


typedef unsigned long long int big;

bool is_divied(big number)
{
    int count = 0;
    
    for(int i = 1; i <= 20; ++i)
    {
        if(number % i == 0)
        {
            ++count;
        }
    }
    if(count == 20)
    {
        return true;
    }
    
    return false;
}

big divided_by_1_to_20()
{
    big ReturnValue = 0;
    
    for(big i = 2520; ; ++i )
    {
        if(i % 20 != 0) continue;
        
        if(is_divied(i))
        {
            ReturnValue = i;
            break;
        }
    }
    
    return ReturnValue;
}

int main()
{
    std::cout << divided_by_1_to_20();
    
}
