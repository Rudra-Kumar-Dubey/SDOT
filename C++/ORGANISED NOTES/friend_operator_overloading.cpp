#include <iostream>
using namespace std;

class simple{
    int r;
    int i;
public:
    simple(){
        r = 0;
        i = 0;
    }
    simple operator +(simple &obj ){
        simple s3;
        s3.r = r + obj.r;
        s3.i = i + obj.i;
        return s3;
    }
    simple(int r1,int i1){
        r = r1;
        i = i1;
    }
    void disp(){
        cout << r << " + "<< i << "i" << endl;
    }
};
int main()

{
    simple s1(10,6),s2(4,2),s3;
    s3 = s1 + s2;
    s3.disp();

    return 0;
}


====================================================


#include <iostream>
using namespace std;

class simple{
    int x,y;
public:
    void get(){
        cout << "enter x and y value" << endl;
        cin >> x >> y;
    }
    void disp(){
        cout << "the x value is" << x << endl;
        cout << "the y value is" << y << endl;
    }
    friend simple operator +(simple, simple);
};

simple operator+(simple obj1, simple obj2) {
    simple s3;
    s3.x = obj1.x + obj2.x;
    s3.y = obj1.y + obj2.y;
    return s3;
}

int main()
{
    simple s1,s2,s3;
    s1.get();
    s2.get();
    s1.disp();
    s2.disp();
    s3 = s1 + s2;
    s3.disp();

    return 0;
}


=====================================================


#include <iostream>
using namespace std;

class simple{
    int x;
public:
    void get(){
        cout << "enter x value" << endl;
        cin >> x;
    }
    void disp(){
        cout << "the updated x value is " << x << endl;
    }
    friend simple operator +(simple);
};
simple operator +(simple obj1){
    simple s2;
    s2.x = obj1.x + 1;
    return s2;
}

int main(){
    simple s1,s2;
    s1.get();
    s1.disp();
    s2 = +s1;
    s2.disp();
    return 0;
}


===============================================================


#include <iostream>
using namespace std;
// <<__>extraction
//>>__>insertion operator
//cout
//cin
//cout is an object of ostream class
//cin is an object of istream class
//cout << s; s ----> UDT
//cin >> s; s ----> UDT

class simple{
    int x,y;
public:
    friend void operator >>(istream &cin, simple &sarath){
        cout << "enter x and y values" << endl;
        cin >> sarath.x >> sarath.y;
    }
    friend void operator <<(ostream &cout, simple &sarath){
        cout << "x and y values are" << endl;
        cout << sarath.x << ' ' << sarath.y;
    }
};

int main(){
    simple s;
    cin >> s;
    cout << s;
    return 0;
}



==================================================================


