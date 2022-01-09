#include <iostream>
#include <string>
#include <algorithm>


std::string AddBigNumbers(std::string number1, std::string number2) {
   
   if (number1.length() > number2.length())
    std::swap(number1, number2);

   std::string sum = "";
   int len1 = number1.length();
   int len2 = number2.length();
   int digitDiff = len2 - len1;
   int overplus = 0;
   int intSum;
   
   for (int i = len1 - 1; i >= 0; i--) {
      intSum = ((number1[i] - '0') + (number2[i+digitDiff] - '0') + overplus);
      sum.push_back(intSum % 10 + '0');
      overplus = intSum / 10;
   }
   
   for (int i = digitDiff - 1; i >= 0; i--) {
      intSum = ((number2[i] - '0') + overplus);
      sum.push_back(intSum % 10 + '0');
      overplus = intSum / 10;
   }
   
   if (overplus != 0)
    {
    sum.push_back(overplus + '0');
    }
   
   reverse(sum.begin(), sum.end());
   return sum;
}



typedef unsigned long long int big;

size_t get_fib_1000()
{
    
    std::string num1 = "0";
    std::string num2 = "1";
    std::string maintmp{};
    int index = 1;
   
    while(true)
    {
        if(maintmp.size() == 1000) return index; 
        
        maintmp = AddBigNumbers(num2, num1);
        
        std::string num2tmp = num2;
        num2 = AddBigNumbers(num1, num2);
    
        num1 = num2tmp;
        
        ++index;
    }
   
    return -1;
}
int main()
{
   std::cout << get_fib_1000();
   
   
}
