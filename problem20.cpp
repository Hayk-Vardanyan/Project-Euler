#include <iostream>
#include <string>
#include <vector>

int main()
{
  
    int num = 100;
    std::vector<int> res;
    res.push_back(1);
    int overplus = 0;
   
    for(int i = 2; i <= num; i++){
        for(int j = 0; j < res.size(); j++){
           
            int tmp = res[j] * i;
            res[j] = (tmp + overplus) % 10 ;
            overplus = (tmp + overplus) / 10;
        }
       
        while(overplus != 0)
        {
           
            res.push_back(overplus % 10);
            overplus = overplus / 10;
        }
   
}

    int sum = 0;

    for(int i = res.size() - 1; i >= 0; --i)
    {
        sum += res[i];
    }

        std::cout << sum;
}
