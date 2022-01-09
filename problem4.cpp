#include <iostream>

bool is_palindrome(std::string str)
{
    std::string reverse_string{};
    
    for(int i = str.size() - 1; i >= 0; --i)
    {
        reverse_string.push_back(str[i]);
    }
        
    
    return reverse_string == str;
}


size_t largest_pallindrome()
{
    size_t max = 0;
    
    for(int i = 999; i >= 100; --i)
    {
        for(int j = 999; j >= 100; --j)
        {
            if(is_palindrome(std::to_string(i * j)))
            {
                size_t tmp = i * j;
                if(tmp > max)
                {
                    max = i * j;
                }
            }
        }
    }
    
    return max;
}

int main()
{
    std::cout << largest_pallindrome();
}
