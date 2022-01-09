#include <iostream>
#include <cmath>


int main()
{
    for(int i = 1; i < 1000 / 2; ++i)
    {
        for(int j = i + 1; j < 1000 / 2; ++j)
        {
            for(int z = j + 1; z < 1000 / 2; ++z)
            {
                if(pow(i, 2) + pow(j, 2) == pow(z, 2))
                {
                    if(i + j + z == 1000)
                    { 
                    std::cout << i * j * z;
                    }
                }
            }
        }
    }
}
