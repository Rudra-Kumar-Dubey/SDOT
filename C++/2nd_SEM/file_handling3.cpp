#include <iostream>
#include <fstream>
//seekg() ---> used to move the get pointer to desired location.
//seekp() ---> used to move the put pointer to desired location.
using namespace std;
int main(){
    fstream f;
    char c;
    f.open("fileobj.txt",ios::in|ios::out);  //app --> append
    cout<<f.tellg()<<endl;
    f<<"hello world";
    cout<<f.tellg()<<endl;
    f.seekg(1,ios::beg); //to start from begin
    cout<<f.tellg()<<endl;
    c=f.get();
    cout<<"the char at current position is "<<c<<endl;
    f.seekg(-3,ios::end); //to start from end
    c=f.get();
    cout<<"the char at current position from end is "<<c<<endl;
    f.seekg(-6,ios::end);
    cout<<f.tellg()<<endl;
    c=f.get();
    cout<<"the char at current position (-6) from the end is "<<c<<endl;
    f.seekg(-1,ios::end);
    cout<<f.tellg()<<endl;
    c=f.get();
    cout<<"the char at current position from the end is "<<c<<endl;
    f.put('x');
    cout<<f.tellg()<<endl;
    f.seekp(11,ios::beg);
    f.seekg(-1,ios::end);
    c=f.get();
    cout<<"the char at updated position from the end is "<<c<<endl;
    f.close();
    return 0;
}