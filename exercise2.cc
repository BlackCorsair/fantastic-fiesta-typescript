#include <vector>
#include <iostream>
#include <algorithm>

/*
    stealed code from https://stackoverflow.com/questions/2378856/sorting-vectors-based-on-size
*/

bool less_vectors(const std::vector<int>& a,const std::vector<int>& b) {
   return a.size() < b.size();
}

const std::vector<std::vector<int> > formatVector(std::vector<std::vector<int> > list)
{
    for (auto &&row : list)
    {
        for (size_t i = 0; i < row.size(); i++)
        {
            if (row.at(i) == 0)
            {
                row.erase(row.begin() + i);
            }
                        
        }
    }
    std::sort(list.begin(), list.end(), less_vectors);
    return list;
}

void printMatrix(std::vector<std::vector<int> > matrix) {
    std::cout << "matrix:" << std::endl;
    for (auto &&row : matrix)
    {
        std::cout << "[";
        for (auto &&element : row)
        {
            std::cout << element << ", ";
        }
        std::cout << "]" << std::endl;
        
    }
    
}

int main(int argc, char const *argv[])
{
    std::vector<std::vector<int>> arr = {{1,2,3,0,0,8,7}, {1,1,1,0,0,1,1}, {0,0}};
    printMatrix(formatVector(arr));
    return 0;
}

