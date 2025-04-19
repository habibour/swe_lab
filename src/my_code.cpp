#include "my_code.h"

Student::Student()
{
    cout << "Student constructor" << endl;
}

float Student::avg(vector<float> vec)
{
    float total = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        total += vec[i];
    }
    return total / vec.size();
}

Student::~Student()
{
    cout << "Student distructor" << endl;
}

//  write a test for the code in my_code.h and my_code.cpp
