//
//  main.cpp
//  array-string
//
//  Created by Swapnil Bhalerao on 16/09/21.
//  clang++ -std=c++14 -stdlib=libc++ main.cpp
//  Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
//  example: dog & god

#include <iostream>
#include <string>
using namespace std;

bool checkPermutation(string str1, string str2)
{
    int flags[256];
    memset(flags, 0, sizeof(int) * 256);
    if (str1.length() != str2.length())
    {
        return false;
    }

    for (int i = 0; i < str1.length(); i++)
    {
        flags[str1[i]]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        flags[str2[i]]--;
        if (flags[str2[i]] < 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, const char *argv[])
{
    // insert code here...
    std::cout << "Enter first string\n";
    string s1 = "";
    cin >> s1;
    std::cout << "Enter second string\n";
    string s2 = "";
    cin >> s2;
    if (checkPermutation(s1, s2))
    {
        cout << "Permutation - Yes" << endl;
    }
    else
    {
        cout << "Permutation - No" << endl;
    }

    return 0;
}
