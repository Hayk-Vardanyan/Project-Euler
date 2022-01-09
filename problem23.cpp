#include <iostream>
#include <set>
#include <cmath>


std::set<int> st;


int sum_divisors(int num)
{

    int count = 0;
   
    int square_root = (int) sqrt(num) + 1;
   
for (int i = 1; i < square_root; i++) {
   
    if ((num % i == 0) && (i * i != num))
    {
        count += i;
        count += (num / i);
    }  
    if ((num % i == 0) && (i * i == num))
    {
        count += i;
    }
   
   
}

return (count - num);

}

bool is_abundant_sum(int n)
{
    for(auto i : st)
    {
        if(i >= n)
        {
            return false;
        }
       
        int y = n - i;
       
        if (st.count(y) == 0)
        {
            continue;
        }
       
        return true;
       
    }
    return false;
}

int main()
{
    int sum = 0;
   
    for(int i = 1; i < 28123; ++i)
    {
        if(sum_divisors(i) > i)
        {
            st.insert(i);
        }
    }
   
    for(int i = 0; i < 28123; ++i)
    {
        if(!is_abundant_sum(i))
        {
            sum += i;  
        }
    }

    std::cout << sum;


 }
