#include <iostream>
#include <string>

std::string factorial(int number)
{
    std::string sum = "1";
    
    for(int i = number; i > 1; --i)
    {
        sum = std::to_string(i * (std::stod(sum)));
    }
    
    return sum;
}


std::string count_paths(int size)
{
    int n = size*2;
    int k = size;
    
    double d = std::stod(factorial(n)) / (std::stod(factorial(n - k)) * std::stod(factorial(k)));
    std::string res = std::to_string(d);
  
    std::string tmp{};
   
   for(int i = 0; i < res.size(); ++i)
   {
       if(res[i] == '.') break;
       
       tmp.push_back(res[i]);
   }
 
    res = tmp;
    return res;
    
}

int main()
{
    std::cout << count_paths(7);
}
