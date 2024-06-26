#include <iostream>
using namespace std;
class list   //Base Class
{     
    public:
    int quantity;
    char productname[20];
    virtual void stock()
    {
        cout<<"Name of the product for Base Class Stock: ";
        cin>>productname;
        cout<<"Quantity of the product for Base Class Stock: ";
        cin>>quantity;
    }
    virtual void retrieve()
    {
        cout<<"Name of the product in Base Class Retrieve is "<<productname<<endl;
        cout<<"Quantity of the product in Base Class Retrieve is "<<quantity<<endl;
    }
};
class stack:public list
{     
    public:
    void stock()          //stores value for stack
    {    
        cout<<"Name of the product for Stack Class Stock: ";
        cin>>productname;
        cout<<"Quantity of the product for Stack Class Stock: ";
        cin>>quantity;
    }
    void retrieve()       //retrieve value of stack
    {
        cout<<"Name of the product in Stack Class Retrieve is "<<productname<<endl; 
        cout<<"Quantity of the product in Stack Class Retrieve is "<<quantity<<endl;
    }      
};
class queue:public list
{     
    public:
    void stock()          //stores value for queue
    { 
        cout<<"Name of the product for Queue Class Stock: ";
        cin>>productname;
        cout<<"Quantity of the product for Queue Class Stock: ";
        cin>>quantity;
    }
    void retrieve()       //retrieve value of queue
    {     
        cout<<"Name of the product in Queue Class Retrieve is "<<productname<<endl; 
        cout<<"Quantity of the product in Queue Class Retrieve is "<<quantity<<endl; 
    }     
};
int main()    //In this you can see that pure virtual functions get overrided.
{
    list l;               
    stack s;
    queue q;
    list *p;           // this is pointer calling to override.
    p=&l;
    p->stock();
    p->retrieve();
    cout<<"\n";
    p=&s;
    p->stock();
    p->retrieve();
    cout<<"\n";
    p=&q;
    p->stock();
    p->retrieve();
}
