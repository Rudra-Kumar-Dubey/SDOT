#include<iostream>
using namespace std;
class TEST
{
    int TestCode,NoCandidate;
    string Description;
    int CenterReqd;  //no. of center required
    int CALCNTR()    //no. of center calculator
    {
        CenterReqd=NoCandidate/100+1;
        return CenterReqd;
    }
    public:
    int SCHEDULE()    //function to take input from user
    {
        cout<<"Enter Details: "<<endl;
        cout<<"Enter Test Code: "<<endl;
        cin>>TestCode;
        cout<<"Enter Description: "<<endl;
        cin>>Description;
        cout<<"Enter No. of Candidates: "<<endl;
        cin>>NoCandidate;
        CALCNTR();
    }
    void DISPTEST()  //function to display details.
    {
        cout<<"\n";
        cout<<"Test Code is: "<<TestCode<<endl;
        cout<<"Description About Test is: "<<Description<<endl;
        cout<<"Total No. of Candidates: "<<NoCandidate<<endl;
        cout<<"No of Centers: "<<CALCNTR()<<endl;
    }
};
int main()
{
    TEST t;     
    t.SCHEDULE();
    t.DISPTEST();
    return 0;
}