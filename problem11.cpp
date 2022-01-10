#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


double largest_product(std::vector<std::vector<int>> vec)
{
    int count = 0;
    long long max1 = 1;
    std::string index ;
   
    for(int i = 0; i < 17; ++i)
    {
        for(int j = 0; j < 17; ++j)
        {
 long long tmp = vec[i][j] * vec[i + 1][j + 1] * vec[i + 2][j + 2] * vec[i + 3][j + 3];
                
                if(tmp > max1)
                {
                    max1 = tmp;
                }
        }
    }
    
   long long max2 = 1;
   
        for(int i = 3; i < 17; ++i)
    {
        for(int j = 0; j < 17; ++j)
        {
                long long tmp = vec[i][j] * vec[i + 1][j - 1] * vec[i + 2][j - 2] * vec[i + 3][j - 3];
                
                if(tmp > max2)
                {
                    max2 = tmp;
                }
        }
    }
    

    
    long long max3 = 1;
    
    for(int i = 0; i < 17; ++i)
    {
        for(int j = 0; j < 17; ++j)
        {
                long long tmp = vec[i][j] * vec[i ][j + 1] * vec[i][j + 2] * vec[i][j + 3];
                
                if(tmp > max3)
                {
                    max3 = tmp;
                }
                
                long long tmp2 = vec[j][i] * vec[j+1][i] * vec[j+2][i] * vec[j+3][i];
                
                if(tmp2 > max3)
                {
                    max3 = tmp2;
                }
                
        }
    }

    
    
max1 = std::max(max1, max2);    
    
return max1 > max3 ? max1 : max3;

}




void read_from_file(std::vector<std::vector<int>>& text)
{
    int count = 0;
   
    
    std::ifstream fin;
    
    fin.open("file.txt");
   
   
    if(!fin.is_open()){
        std::cout << "Could not open file";
        exit(0);
    }
   
    while(!fin.eof()) {
        std::string str;
        getline(fin, str);
        std::vector<int> tmp;
        ++count;
       
        std::stringstream s(str);
       
        while(!s.eof()){
       
            s >> str;
           
            tmp.push_back(std::stoi(str));
       
           
        }
        if(count != 20) {
        tmp.pop_back();
        }
        text.push_back(tmp);
        tmp.clear();
    }

}


int main()
{
std::vector<std::vector<int>> text;

read_from_file(text);

std::cout << largest_product(text);


}

