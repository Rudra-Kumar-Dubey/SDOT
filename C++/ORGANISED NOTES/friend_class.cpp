//Friend function
//can be declared anywhere
//its non member of class
//declaration should be inside a class---friend
//definition outside a class-----no friend
//obj as argument
//as normal function

#include <iostream>
using namespace std;

class simple{
    int a;
public:
    void get(){
        cout << "enter a value";
        cin >> a;
    }
    friend void update(simple);
};

void update(simple s) {
    s.a = s.a + 1000;
    cout << "the update value is" << s.a << endl;
}


int main()
{
    simple s;
    s.get();
    update(s);
    return 0;
}


===========================================================


#include <iostream>
using namespace std;

class simple1{
    int a,b;
public:
    void get(){
        a = 10;
        b = 20;
        cout << "the a value is " << a<< endl;
        cout << "the b value is " << b << endl;
    }

};

class simple2{
    int c,d;
public:
    void get(){
        c = 30;
        d = 40;
        cout << "the c value is " << c << endl;
        cout << "the d value is " << d << endl;

    }
};


int main()
{
    simple1 s1;
    simple2 s2;
    s1.get();
    s2.get();

    return 0;
}


=========================================================


#include <iostream>
using namespace std;

class simple2;

class simple1{
    int a;
public:
    void geta(){
        cout << "enter a value for a "<<endl;
        cin >> a;
    }
    friend void max(simple1,simple2);
};

class simple2{
    int b;
public:
    void getb(){
        cout << "enter a value for b " << endl;
        cin >> b;

    }
    friend void max(simple1,simple2);
};

void max(simple1 s1,simple2 s2){
        if (s1.a > s2.b) {
            cout << "a is max";
        }
        else if(s2.b > s1.a){
            cout << "b is max value";
        }
        else{
            cout << "both are equal";
        }

}

int main()
{
    simple1 s1;
    simple2 s2;
    s1.geta();
    s2.getb();
    max(s1,s2);
    return 0;
}


===============================================


#include <iostream>
using namespace std;

class simple1{
    int a,b;
public:
    friend class simple2;
    void getab(){
        cout << "enter a and b values";
        cin >> a >> b;
    }

};

class simple2{
    int b;
public:
    void putab(simple1 s1) {
        //s1.getab();
        cout << s1.a << endl;
        cout << s1.b << endl;
    }
};


int main()
{
    simple1 s1;
    simple2 s2;
    s1.getab();
    s2.putab(s1);
    return 0;
}


=======================================