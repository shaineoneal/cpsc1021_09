#include "accum.h"
#include <iostream>

using namespace std;

int main()
{
    int input;
    string inputStr;
    vector<int> inputVect;
    vector<string> inputStrVect;
    cout << "Enter four numbers: ";
    for(int i = 0; i < 4; i++)
    {
        cin >> input;
        inputVect.push_back(input);
    }

    cout << "The sum of the numbers is " << accum<int>(inputVect) << endl;

    //ask for strings
    cout << "Enter four strings: ";
    for(int i = 0; i < 4; i++)
    {
        cin >> inputStr;
        inputStrVect.push_back(inputStr);
    }

    cout << "The sum of the strings is " << accum<string>(inputStrVect) << endl;




}