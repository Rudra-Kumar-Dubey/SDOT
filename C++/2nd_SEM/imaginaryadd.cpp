#include<iostream>
using namespace std;
class complex
{
    public:
    float r;
    float i;

    complex(){
    }
    complex(float f){
        r=f;
        i=f;
    }
    complex(float f1, float f2){
        r=f1;
        i=f2;
    }

};
int main(){
    complex c;
    complex c1(4.7);
    complex c2(1.2,5.7);
    cout<< c1.r + c2.r << "+" << c1.i + c2.i << "i";
}