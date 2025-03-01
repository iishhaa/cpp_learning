//int arr[5]={23,5,9,6,9}===key=    o/p=={23,5,0,6,0}}
#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,5,9,6,9};
    int key=9,count=0;
     for(int i=0;i<sizeof;i++){
        if(arr[i]==9){
            count++;
            arr[i]=0;
         cout<<"index at "<<i<<"  is found key  "<<key<<" is  change to "<<arr[i]<<endl;
        }
        
     }
cout<<count<<endl;
for(int j=0;j<5;j++){
    cout<<arr[j]<<"  ";
}
}