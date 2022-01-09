#include <iostream>

typedef unsigned long long int big;

big CollatzProblem()
{
   
    big count = 0;
    big max = 0;
    big start  = 0;
   
    for(int i = 13; i < 1000000; ++i)
    {
        big tmp = i;
        while(tmp != 1)
        {
            if(tmp % 2 == 0)
            {
                tmp = tmp / 2;
            }
            else
            {
                tmp = 3 * tmp + 1;
            }
           
            ++count;
        }
        if(count > max)
        {
            start = i;
            max = count;
        }
       
        count = 0;
       
    }
   
    return start;
   
}




int main()
{
    std::cout << CollatzProblem();
   
    return 0;
}
