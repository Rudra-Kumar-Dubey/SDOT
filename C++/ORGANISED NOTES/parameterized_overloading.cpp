// parameterized constructor

#include <iostream>
using namespace std;

class simple{
    int sal;
    int age;
public:
    simple(int sal1, int age1){
        sal = sal1;
        age = age1;
    }
    void disp(){
        cout << "the sal is " << sal << endl;
        cout << "the age is " << age << endl;
    }
};

class simple1:public simple{
    int id;
public:
    simple1(int sal11, int age11, int id1) : simple(sal11, age11) {
        id = id1;
    }
    void show(){
        cout << "The ID is: " << id << endl;
    }
};

int main(){
    simple1 s1(10000, 30, 1234);
    s1.disp();
    s1.show();
    return 0;
};


=============================================================================


//functions with same name are overrode for the function of the class called

#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "I am in first class" << endl;
    }
};

class B{
public:
    void show(){
        cout << "I am in second class" << endl;
    }
};

class AB: public A, public B{
public:
    void show(){
        cout << "I am in third class" << endl;
    }
};


int main(){
    AB obj;
    obj.show();
    return 0;
};


======================================================


//using scope resolution to fix the above problem

//functions with same name are overrode for the function of the class called

#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "I am in first class" << endl;
    }
};

class B{
public:
    void show(){
        cout << "I am in second class" << endl;
    }
};

class AB: public A, public B{
public:
    void show(){
        A::show();
        cout << "I am in third class" << endl;
        B::show();
    }
};


int main(){
    AB obj;
    obj.show();
    return 0;
};


===================================================

//functions with same name are overrode for the function of the class called

#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "I am in first class" << endl;
    }
};

class B{
public:
    void show(){
        cout << "I am in second class" << endl;
    }
};

class AB: public A, public B{
public:
    void show(){
        A::show();
        cout << "I am in third class" << endl;
        B::show();
    }
};


int main(){
    AB obj;
    obj.A::show(); <=======================================================
    return 0;
};


==========================================================


/*
 Diamond Problem
   A
  / \
 B   C
  \ /
   D
*/


========================


//Virtual Class
//Data members of last class will be printed

#include <iostream>
using namespace std;

class A{
public:
    int a;
    void show(){
        cout << "I am in first class" << endl;
    }
};

class B: virtual public A{
public:
    B(){
        a = 4;
    }
    void show(){
        cout << "I am in second class" << a << endl;
    }
};

class C: virtual public A{
public:
    C(){
        a = 44;
    }
    void show(){
        cout << "I am in third class " << a << endl;
    }
};

class BC: public C, public B{
public:
    void show(){
        cout << "I am in final class " << a << endl;
    }
};

int main(){
    BC obj;
    obj.show();
    return 0;
};


===========================================================


//virtual function
//VF is a member function which is declared within base class and is redefined in derived class
//pointer variable

#include <iostream>
using namespace std;

class A{
public:
    virtual void disp(){
        cout << "I am in base class and I am virtual class" << endl;
    }
    void ndisp(){
        cout << "I am in base class and I am not in virtual function" << endl;
    }
};

class B: public A{
public:
    void disp(){
        cout << "I am in derived class and I am not virtual" << endl;
    }
    void ndisp(){
        cout << "I am in derived class and I am not virtual and from ndisp" << endl;
    }
};


int main(){
    A obj1; //disp and ndsip
    B obj2; //ndisp(A) and disp(B)
    A *ptr;
    ptr = &obj1;
    ptr -> disp();
    ptr -> ndisp();
    ptr = &obj2;
    ptr -> disp();
    ptr -> ndisp();
    return 0;
};


================================================================================================


//pure virtual function
//implementation for all functions cannot be provided in base class we can implement those functions in derived class

#include <iostream>
using namespace std;

class shapetemp{ //abstract base class
public:
    int a,b;
    void getab(){
        cin >> a >> b;
    }
    void gets(){
        cin >> a;
    }
    virtual int area() = 0;
};

class triangle:public shapetemp{
public:
    int area(){
        return 0.5*a*b;
    }
};

class rectangle:public shapetemp{
public:
    int area(){
        return a*b;
    }
};

class square:public shapetemp{
public:
    int area(){
        return a*a;
    }
};

int main(){
    // shapetemp st; ===> Not possible
    triangle t;
    t.getab();
    cout << "the area is: " << t.area() << endl;
    rectangle r;
    r.getab();
    cout << "the area is: " << r.area() << endl;
    square s;
    s.gets();
    cout << "the area is: " << s.area() << endl;
    return 0;
};


====================================


