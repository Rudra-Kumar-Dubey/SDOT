#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Batsman{
char First_Name[30];
char Last_Name[30];
int runs,fours,sixes;
public:
void initial(){
cout<<endl<<"Enter First Name: ";
gets(First_Name);
cout<<endl<<"Enter Last Name: ";
gets(Last_Name);
cout<<endl<<"Enter The Runs Made By The Player: ";
cin>>runs;
cout<<endl<<"Enter how many fours: ";
cin>>fours;
cout<<endl<<"Enter how many sixes: ";
cin>>sixes;
}
void update(){
int new_run,new_four,new_sixes,cal_four,cal_six;
cout<<endl<<"Enter new runs Made: ";
cin>>new_run;
cout<<endl<<"Enter new fours Made: ";
cin>>new_four;
cout<<endl<<"Enter new sixes Made: ";
cin>>new_sixes;
fours=fours+new_four;
sixes=sixes+new_sixes;
cal_four=fours*4;
cal_six=sixes*6;
runs=runs+new_run+cal_four+cal_six;
display();
cout<<"Total Runs Made: "<<runs<<endl;
cout<<"Number of fours: "<<fours<<endl;
cout<<"Number of sixes: "<<sixes<<endl;
}
void display(){
 cout<<".....Batsman's information....."<<endl;
cout<<"Name: "<<First_Name<<" "<<Last_Name<<endl;
}
};
int main()
{
Batsman b1;
b1.initial();
b1.update();
getch();
return 0;
}