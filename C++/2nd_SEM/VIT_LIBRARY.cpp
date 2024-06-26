#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class stock
{
    string author;    //This will take name of book author
    string title;     //This will take title of the book
    char pub[50];     //This will take publishers name
    double price;     //This will take price of book
    int numcopies;    //This will take number of copies available
    public:
    void getinfo()    //This will take info from user
    {
        cout<<"Enter Author Name"<<endl;
        cin>>author;
        cout<<"Enter Title of the book"<<endl;
        cin>>title;
        cout<<"Enter name of publisher"<<endl;
        cin>>pub;
        cout<<"Enter Price"<<endl;
        cin>>price;
        cout<<"Enter Number of Copies Available"<<endl;
        cin>>numcopies;
        cout<<"\n";
    }
    string gettitle()
    {
        return title;
    }
    string getauthor()
    {
        return author;
    }
    int sell()    //This is for entering book details
    {
        int k;
        int r;
        cout<<"Author Name: "<<author<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Publisher Name: "<<pub<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"\n";
        cout<<"Enter Number Of Copies Required: ";
        cin>>k;
        if(k<=numcopies)
        {
            r=k*price;
            cout<<"The total cost of books is: "<<r<<endl;
        }
        else
        {
            cout<<"Sorry Will Serve Later\n";
        }
    }
};

int main()
{
    stock s[6];
    int i,n,ch,flag;
    char a[50],b[50];
    cout<<"Enter Number of Books you want to add\n";
    cin>>n;
    for(i=0;i<n;i++)              //It runs the loop and get the info of books
    {
        cout<<"Enter INFO of BOOKS:"<<i+1<<endl;
        s[i].getinfo();
    }
    cout<<"Select the below operations:"<<endl;
    cout<<"Enter 1 for buying a book"<<endl;
    cout<<"Enter 2 for closing the program"<<endl;
    cin>>ch;
    switch(ch)                  //This helps to either buy or leave the program
    {
        case 1:
        cout<<"Enter Title of the book"<<endl;
        cin>>a;
        cout<<"Enter Author Name"<<endl;
        cin>>b;
        for(i=0;i<n;i++)
        {
            if(s[i].gettitle()==a)
            {
                if(s[i].getauthor()==b)
                {
                flag=1;
                break;
                }
                else
                {
                    flag=0;
                }
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            cout<<"Book Not Found"<<endl;
        }
        else
        {
            s[i].sell();
        }
        break;
        case 2:
        break;
    }   
    return 0;
}
