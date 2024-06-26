#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    string s = to_string(n);
    int len = s.length();
    int a;
    int sum = 0;
    if(len>=13 && len<=16 && (s.substr(0, 2) == "37" || s.substr(0, 1) == "4"  || s.substr(0, 1) == "5" || s.substr(0, 1) == "6")){
        for(int i = len-2; i >= 0 ; i = i - 2 ){
            a = stoi(s.substr(i, 1));
            if((a*2)>9){
                a = (a*2)/10 + (a*2)%10;
            }else{
                a = a*2;
            }
            sum += a;
        }
        for(int i = len-1 ; i >=0 ; i = i - 2){
            a = stoi(s.substr(i, 1));
            sum += a;
        }
        if(sum%10 == 0){
             cout<<n<<" is valid"<<endl;
        }else{
            cout<<n<<" is invalid"<<endl;
        }
    }else{
        cout<<n<<" is invalid"<<endl;
    }
    
    return 0;
}

