#include <iostream>

size_t get_fib_num()
{
    size_t num1 = 0;
    size_t num2 = 1;
    size_t main2tmp = 0;
    size_t sum = 0;
   
     while(num2 < 4000000)
    {
        int num2tmp = num2;
       
      num2 = num1 + num2;

        if(num2 % 2 == 0)
        {
            sum += num2;
        }
        num1 = num2tmp;
    }
    return sum;
}

int main()
{
    std::cout << get_fib_num();
}

