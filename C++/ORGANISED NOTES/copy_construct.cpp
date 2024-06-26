#include <iostream>
using namespace std;

//copy construct needs same class
//to declare and initialize an object from another object
//not mandatory to declare copy constructor
//compiler will by default define a copy constr
//when you are allocating memory bt dynamic memory location then you have to crete copy
//const will ensure that their are no changes in class
/*classname(const classname &obj)
{

}*/
class simple{
    int x;
public:
    simple(){

    }
    simple(int p){
        x = p;
    }

    void disp(){
        cout << "the x value is:"<<x << endl;
    }
};
int main( ) {
    simple obj1(40);
    simple obj2;
    obj2 = obj1;
    obj1.disp();
    obj2.disp();
    return 1;
}

===================================


#include <iostream>
using namespace std;

class simple{
    int x;
public:
    //simple(){

    //}
    simple(int p){
        x = p;
    }

    void disp(){
        cout << "the x value is:"<<x << endl;
    }
};
int main( ) {
    simple obj1(40);
    simple obj2 = obj1;
    obj1.disp();
    obj2.disp();
    return 1;
}


===================================


#include <iostream>
using namespace std;

class simple{
    int x;
public:
    //simple(){

    //}
    simple(int p){
        x = p;
    }
    simple (simple &objj){
        cout << objj.x;
        x = objj.x;

    }
    void disp(){
        cout << "the x value is:"<<x << endl;
    }
};
int main( ) {
    simple obj1(40);
    simple obj2(obj1);
    obj2.disp();
    obj1.disp();
    return 1;
}


========================


#include <iostream>
using namespace std;

class simple{
    int *p;

public:
    simple(int x){
        cout << "i am a para cons"<<endl;
        p = new int;
        *p = x;
        cout << p << endl;
        cout << *p << endl;
    }
    /*simple(const simple &objj){
        cout << "i am a copy cons"<<endl;
        p = new int;
        *p = *objj.p;
        cout << p << endl;
        cout << *p << endl;
    }*/
    void disp(){
        cout << *p<<endl;
    }
};
int main( ) {
    simple obj1(100);
    simple obj2(obj1);
    obj1.disp();
    obj2.disp();
    return 1;
}


=======================================


