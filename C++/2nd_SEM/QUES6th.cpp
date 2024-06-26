#include <iostream>
using namespace std;
class student
{
    public:
  int marks1, marks2;
  void get ()
  {
    cout<<"ENTER MARKS OF 1ST STUDENT "<<endl;
    cin>>marks1;
    cout<<"ENTER MARKS OF 2nd STUDENT "<<endl;
    cin>>marks2;
  }
  void show();
  int max();
  
};
int student::max()
{
    if (marks1>marks2)
    return marks1;
    else
    return marks2;
    
}
void student::show()
{
    cout<<"MAXIMUM MARKS ARE "<<max();
}
int main()
{
  student a;
  a.get();
  a.show();
  return 0;
}