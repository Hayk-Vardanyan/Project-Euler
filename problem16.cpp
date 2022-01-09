#include <iostream>
#include <cmath>

int main()
{
    std::string str = std::to_string(pow(2, 1000));
    double sum = 0;
    
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] == '.') break;
        
        sum += str[i] - '0';
    }
    
    std::cout << sum;
}
