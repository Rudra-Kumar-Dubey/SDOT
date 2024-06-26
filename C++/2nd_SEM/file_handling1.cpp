//Write info into a file through an object.
#include <iostream>
#include <fstream>
using namespace std;
class emp{
    int empid;
    char empname[20];
    public:
    void getemp(){
        cout<<"Enter EMPID"<<endl;
        cin>>empid;
        cout<<"Enter EMP NAME"<<endl;
        cin>>empname;
    }
};
int main(){
    emp e;
    ofstream f;
    char c;
    f.open("FILEOBJ",ios::out);
    do{
        e.getemp();
        f.write((char *)&e,sizeof(e));
        cout<<"WRITTEN TO A FILE"<<endl;
        cout<<"Enter y to write again"<<endl;
        cin>>c;
    }while(c=='y');
    //e.getemp();
    //f.write((char *)&e,sizeof(e));
    //cout<<"WRITTEN TO A FILE"<<endl;
    //cout<<"the size of e is "<<sizeof(e);
    f.close();
    return 0;
}
