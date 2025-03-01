/*- Wap to display the array in ascending order.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array :"<<endl;
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int highest=arr[0];
    int c=0;
    int brr[n];
     for(int i=0;i<n;i++){

        if(arr[i]>highest){
           
          
        }

    }
    // cout<<"\n highest no. is"<<highest;
//    cout<<"\n indeex is "<<c;
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
}
