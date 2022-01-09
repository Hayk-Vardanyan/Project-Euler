#include <iostream>
#include <set>
#include <cmath>

int main()
{
    std::set<std::string> st;
   
    for(size_t i = 2; i <= 100; ++i)
    {
        for(size_t j = 2; j <= 100; ++j)
        {
            st.insert(std::to_string(pow(i, j)));
        }
    }
   
    std::cout << st.size();
}
