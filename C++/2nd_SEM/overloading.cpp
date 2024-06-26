//method overloading : you have more than one function with same name
//1. different type of parm
//2. different number of parmeter
//3. different order of parm
// Program to compute absolute value
// Works for both int and float

#include <iostream>
using namespace std;
float absolute(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}
int main() 
{
    cout << "Absolute value of -5 = " << absolute(-5) << endl;
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    return 0;
}