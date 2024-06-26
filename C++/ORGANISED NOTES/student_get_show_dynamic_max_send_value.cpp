#include <iostream>
using namespace std;

class student {
    int id;
    char name[20];
public:
    void put();
    void get();
};
    void student::get(){
        cout << "Enter Student ID and Name"<<endl;
        cin >> id >> name;
    }

void student::put() {
    cout << "The student id is"<< id<<endl;
    cout << "the student name is"<< name << endl;

}


int main() {
    student s;
    s.get();
    s.put();
    return 0;
}


#include <iostream>
using namespace std;

class student{
    int id;
    int subj[6];
    char name[20];
public:
    void get();
    void put();
};

void student::get(){
    cout << "enter student id and name"<< endl;
    cin >> id>>name;
    cout << "enter each subject marks"<<endl;
    for(int i = 0; i < 6;i++){
        cin >> subj[i];
    }
}

void student::put() {
    int total = 0;
    for(int i = 0;i < 6; i++){
        total = total + subj[i];
    }
    cout << total << endl;
    int flag = 1;
    cout << "the student result is" << endl;
    for (int i = 0; i < 6; i++){
        if (subj[i]<40){
            cout << "the student failed"<<endl;
            flag = 0;
            break;
        }
        }
    if (flag == 1){
        cout << "the student is passed";
    };
}

int main() {
    student s;
    s.get();
    s.put();
    return 0;

}

#include <iostream>
using namespace std;

class student{
    int id;
    float fee;
public:
    void get(int,float);
    void put();
};

void student::get(int id1, float fee1){
    id = id1;
    fee = fee1;
}

void student::put() {
    cout << "The student id is"<< id << endl;
    cout << "The student fee is"<< fee<< endl;

}


int main() {
    student s;
    s.get(123,1000.20);
    s.put();
    return 0;

}

#include <iostream>
using namespace std;

class simple{
    int x,y;
public:
    void get(int p,int q){
        x = p;
        y = q;
    };
    void put(){
        cout << "the x value is "<< x << endl;
        cout << "the y value is "<< y<<endl;
    };
    int max(){
        if (x>y){
            return x;
        }
        else{

            return y;
        }
    }

};

int main() {
    simple s;
    s.get(20,30);
    s.put();
    int res = s.max();
    cout << "The max value is "<< res;
    return 0;

}

#include <iostream>
using namespace std;

class simple{
    int x;
public:
    void get(){
        cout << "enter x value"<<endl;
        cin >> x;
    };
    void put(){
        cout << "The value of x is "<<x<<endl;
    };
    void max(simple s2){
        if (x>s2.x){
            cout << "The x in s1 is max"<<endl;
        }
        else if (x < s2.x){
            cout << "the x in s2 is max" << endl;
        }
        else{
            cout << "both are equal" <<endl;
        }

    }

};

int main() {
    simple s1,s2;
    s1.get();
    s2.get();
    s1.put();
    s2.put();
    s1.max(s2);

    return 0;

}

#include <iostream>
using namespace std;

class simple{
    int x,y;
public:
    void get(){
        cout << "enter x and y value "<<endl;
        cin >> x >>y;
    };
    void put(){
        cout << "The value of x is "<<x<<endl;
        cout <<"The value of y is " << y << endl;
    };
    simple sum(simple s2){
        simple s3;
        s3.x = x + s2.x;
        s3.y = y + s2.y;
        s3.put();
    }

};

int main() {
    simple s1,s2,s3;
    s1.get();
    s2.get();
    s1.put();
    s2.put();
    s1.sum(s2);
    //cout << "the data members of s3 object" << endl;
    //s3.put();

    return 0;

}
