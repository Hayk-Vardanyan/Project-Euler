#include <iostream>
#include <cmath>


typedef unsigned long long int big;

bool count_divisor_500(big num)
{
            
    big count = 0;
   
    int square_root = (int) sqrt(num) + 1;
   
for (int i = 1; i < square_root; i++) {
   
    if ((num % i == 0) && (i * i != num))
    {
        count += 2;

    }  
    if ((num % i == 0) && (i * i == num))
    {
        ++count;
    }
   
   
   
}


if(count > 500) { return true; }

    return false;
}



big find_number()
{
    big num = 1;
    big count = 2;
   
    while(!(count_divisor_500(num)))
    {
        num += count;
        ++count;
   
    }
   
    return num;
   
   
}

int main()
{
    std::cout << "\nThe number is\t" << find_number();

    return 0;
}
