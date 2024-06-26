#include <iostream>
using namespace std;
class bank_account
{
    int account_num;
    char depname[20];
    char account_type[2];
    float amount;
    public:
    void getinfo()
    {
        cout<<"Enter Depositer Name"<<endl;
        cin>>depname;
        cout<<"Enter Account Number"<<endl;
        cin>>account_num;
        cout<<"Enter Account TYPE"<<endl;
        cin>>account_type;
        cout<<"Enter Amount"<<endl;
        cin>>amount;
        cout<<"\n";
    }
    int getaccount_num()
    {
        return account_num;
    }
    void deposit()
    {
        float depo;
        cout<<"Enter amount to be deposit"<<endl;
        cin>>depo;
        amount+=depo;          //amount=amount+depo
        cout<<"The current/updated amount is"<<amount<<endl;
    }
    void withdraw()
    {
        float with;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>with;
        if(with>1000)
        {
            amount-=with; //amount=amount-with;
            cout<<"The current/updated amount is"<<amount<<endl;
        }
        else
        {
            cout<<"The min balance that can be withdrawn should be 1000"<<endl; 
        }
    }
};   
int main()
{
    bank_account ba[6];
    int i,ch,a,flag;
    for(i=0;i<6;i++)
    {
        cout<<"Enter INFO of DEPOSITER:"<<i+1<<endl;
        ba[i].getinfo();
    }
    cout<<"Select the below operations:"<<endl;
    cout<<"Enter 1 for deposit"<<endl;
    cout<<"Enter 2 for withdraw"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter Account Number:"<<endl;
        cin>>a;
        for(i=0;i<6;i++)
        {
            if(ba[i].getaccount_num()==a)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            cout<<"Account NOTFOUND"<<endl;
        }
        else
        {
            ba[i].deposit();
        }
        break;
        case 2:
        cout<<"Enter Account Number:"<<endl;
        cin>>a;
        for(i=0;i<6;i++)
        {
            if(ba[i].getaccount_num()==a)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            cout<<"Account NOTFOUND"<<endl;
        }
        else
        {
            ba[i].withdraw();
        }
        break;
    }
    return 0;   
}