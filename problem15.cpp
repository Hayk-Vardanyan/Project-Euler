#include <iostream>
#include <string>

std::string factorial(int number)
{
    std::string sum = "1";
   
    for(int i = 1; i <= number; ++i)
    {
        sum = std::to_string(i * stod(sum));
    }
   
    return sum;
}


int main()
{
    int n = 40;
    int k = 20;


    double d = std::stod(factorial(n)) / (std::stod(factorial(n - k)) * std::stod(factorial(k)));
    std::cout << std::to_string(d);
}
