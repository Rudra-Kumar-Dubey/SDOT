//Read info from a file through an object.
#include <iostream>
#include <fstream>
using namespace std;
class saving_acc{
    public:
    int Amount;
    char cust_name[20];
	void getemp(){
        cout<<"Enter CUSTOMER NAME"<<endl;
        cin>>cust_name;
        cout<<"Enter Amount"<<endl;
        cin>>Amount;
    }
    void putemp(){
        cout<<"Enter CUSTOMER NAME is "<<cust_name<<endl;
        cout<<"Enter Amount is "<<Amount<<endl;
    }
};
int main(){
    saving_acc e;
	char c;
    int t;
    fstream f;
    f.open("ICICI_BANK.txt",ios::out);
	do{
        e.getemp();
        f.write((char *)&e,sizeof(e));
        cout<<"Details SAVED"<<endl;
        cout<<"Enter y to ADD ANOTHER ACCOUNT"<<endl;
        cin>>c;
    }while(c=='y');
    f.close();

    f.open("ICICI_BANK.txt",ios::in);
    while(!f.eof()){
        e.putemp();
        f.read((char *)&e,sizeof(e));     
    }
    f.close();
    return 0;
}