#include <iostream>
#include <fstream>
#include <vector>

/*
Simple program that reads in an input file 
up until the number 42 is reached. Each int is 
read into a vector and printed out appropritatly
*/

int main()
{
    std::vector<int> nums;
    std::ifstream infile("numbers.txt");
    int i = 0;

    while(infile.good()) 
    {
        infile >> i;
        if(i == 42){break;}
        nums.push_back(i);
        //std::cout << i << std::endl;
    }

    std::vector<int>::const_iterator it = nums.begin();

    while(it != nums.end())
    {
        std::cout << *it << std::endl;
        it++;
    }

}