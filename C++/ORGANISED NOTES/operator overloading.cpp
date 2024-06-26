//operator overloading
//generally use to simplify any complicated expression

#include <iostream>
using namespace std;

class simple{
    int x;
public:
    void get(){
        cout << "enter x" << endl;
        cin >> x;
    }
    void put(){
        cout << "the x is " << x <<  endl;
    }
    simple operator +(simple obj){
        simple s3;
        s3.x = x + obj.x;
        return s3;
    }

};

int main(){
    simple s1,s2,s3;
    s1.get();
    s2.get();
    s3 = s1 + s2;
    s1.put();
    s2.put();
    s3.put();
    return 0;
}


=================================================


#include <iostream>
using namespace std;

class simple{
    int x;
public:
    void get(){
        cout << "enter x" << endl;
        cin >> x;
    }
    void operator == (simple obj) {
        if (x == obj.x){
           cout << "equal" << endl;
       }
        else{
           cout << "not equal" << endl;
       }
    }

};

int main(){
    simple s1,s2;
    s1.get();
    s2.get();
    s1 == s2;
    return 0;
}


=================================================


#include <iostream>
using namespace std;

class simple{
    int x;
public:
    void get(){
        cout << "enter x" << endl;
        cin >> x;
    }
    void operator ++(){
        ++x;
    }
    void operator ++(int){
        ++x;
    }
    void disp(){
        cout << "the updated x value is " << x << endl;
    }
};

int main(){
    simple s1;
    s1.get();
    ++s1;
    s1.disp();
    s1++;
    s1.disp();
    return 0;
}


===========================================================


#include <iostream>
using namespace std;

class simple {
    int x,y;
public:
    simple(){
        x = 0;
        y = 0;
    }
    simple(int x1, int y1){
        x = x1;
        y = y1;
    }
    void operator =(simple obj){
        x = obj.x;
        y = obj.y;
    }
    void disp(){
        cout << "x value is " << x << endl;
        cout << "y value is " << y << endl;
    }
};

int main(){
    simple s1(10,20), s2(30,40);
    s1 = s2;
    s1.disp();
    return 0;
}


=================================================





