#include<iostream>  
using namespace std;
int main() 
{  
    int c,grace = 0,failed;  
    cout<<"Enter the class obtained by the student\n";  
    cin>>c; 
    cout<<"How many subjects has the student failed\n";  
    cin>>failed;  
    switch(c)  
    {  
        case 1:  
                if(failed > 3)  
                    grace = 0;  
                else  
                    grace = 5;  
                break;  
        case 2:  
                if(failed > 2)  
                    grace = 0;  
                else  
                    grace = 4;
                break; 
        case 3:  
                if(failed > 1)  
                    grace = 0;  
                else  
                    grace = 5;  
                break;  
        default: 
                cout<<"You entered wrong class for the student\n";  
    }    
    if(c == 1 || c == 2 || c == 3)  
    {  
        cout<<"The student has obtained a grace marks of "<<grace<<" per subject\n";  
    }  
    return 0;  
}  