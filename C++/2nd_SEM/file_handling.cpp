//files in c++
/*
File is used to save data permanently-->storage device{HD}
You are going to save information into file or you are going 
to read info from a file......file handling.
FILE HANDLING in c++
Used in banking and offices
File I/O operations--
They are intereface {INPUT AND OUTPUT STREAM}
OUTPUT STREAM - WRITING DATA FROM C++ PROGRAM
INPUT STREAM - READ THE INFO IN THE FILE
FSTREAM HELP US USE IFSTREAM AND OFSTREAM
TYPES OF DATA FILES:
*TEXT FLIES - Store information in ASCII characters .... EOL Character
*BINARY FILES - Store information in Binary which machine can understand....no EOL character
closing the file is important with f.close();
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream f;  //file handler
    f.open("VIT1.txt",ios::out); //creating file in c++
    //f.open("VIT1.txt"); //Reading mode
    if(!f){
        cout<<"FILE DOES NOT EXIST"<<endl;
    }
    else{
        f<<"HELLO THERE, NICE TO SEE YOU , HOW WAS YOUR DAY";
        /*string c;
        while(1){
            f>>c; //READING
            if(f.eof())
            break;
            cout<<c;
        }*/
        f.close();
    }
    return 0;
}