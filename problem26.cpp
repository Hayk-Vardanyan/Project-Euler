#include <iostream>
#include <vector>

int length_of_current(int i)
{
    std::vector<int> vec(i,0);
    int dividend = 1;
    int pos = 1;

   
    while(true)
    {
        int remaind = dividend % i;
       
        if(remaind == 0)
        {
            return 0;
        }
       
        if(vec[remaind] != 0)
        {
            return pos - vec[remaind];
        }
       
        vec[remaind] = pos;
       
        ++pos;
       
        dividend = 10 * remaind;
       
    }
   
   
}

int longest_fraction()
{
    int max_size = 0;
    int index = 0;
   
    for(int i = 1000; i >= 1; --i)
    {
        int tmp = length_of_current(i);
        if(max_size < tmp)
        {
            max_size = tmp;
            index = i;
        }
   
    }
   
    return index;
}


int main()
{
    std::cout << longest_fraction();
}
