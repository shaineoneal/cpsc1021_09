#ifndef ACCUM_H_
#define ACCUM_H_

#include <vector>
#include <string>

template <typename T>
//sums all items passed into function
T accum(vector <T> v)
{
    return v.at(0) + v.at(1) + v.at(2) + v.at(3);
}

std::string accum(vector <string> v)
{
    return v.at(0) + ", " + v.at(1) + ", " 
        + v.at(2) + ", " + v.at(3);
}



#endif