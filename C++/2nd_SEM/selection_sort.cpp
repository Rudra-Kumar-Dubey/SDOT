#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,23,3,15,4,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j;
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (j = i+1; j < n; j++){
            if (arr[j]<arr[min]){
                min = j;   
            }       
        }
        if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;    
        }      
    }
	for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}