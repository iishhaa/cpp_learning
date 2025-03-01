#include<iostream>
using namespace std;
int main(){
    int arr[]={12,13,14,15,16};//arrray always hold base address
    cout<<arr[2]<<endl;//it gives 2nd ndex value
      arr[1]=400;//it is used to change the value of array elemnts
      cout<<arr[2]<<endl;
      cout<<arr[60];//it gives garbage value becoz it is not initialized  
   arr[60]=89;//but in this compilor error because of it is not accesss this index due to array size is 5
   //undefined behaviour means sometimes gives error
}