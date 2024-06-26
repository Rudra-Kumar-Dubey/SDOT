//Read info from a file through an object.
#include <iostream>
#include <fstream>
using namespace std;
class emp{
    int empid;
    char empname[20];
    public:
    void putemp(){
        cout<<"Enter EMPID is "<<empid<<endl;
        cout<<"Enter EMP NAME is "<<empname<<endl;
    }
};
int main(){
    emp e;
    fstream f;
    f.open("FILEOBJ",ios::in);
    f.read((char *)&e,sizeof(e));
    cout<<"The size of e is"<<sizeof(e)<<endl;
    while(!f.eof()){
        e.putemp();
        cout<<"The size of e is"<<sizeof(e)<<endl;
        f.read((char *)&e,sizeof(e));
    }
    f.close();
    return 0;
}