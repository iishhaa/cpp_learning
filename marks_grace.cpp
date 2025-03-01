/*wap to create a element n  with n elements here elements is actually a  student so you have to give a  max grace of five no. range 35-39(passing mark=40)

 */
#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"enter a  size of array :"<<endl;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"elemnt of index "<<i<<endl;
    cin>>arr[i];
    
  }
  for(int i=0;i<n;i++){
    // cout<<"elemnt of index "<<i<<" "<<arr[i]<<endl;
    if(arr[i]>=35&&arr[i]<=39){
        a=40-arr[i];        
       cout<<"elements of index"<<i<<" "<<arr[i]+a<<endl;
       cout<<endl;
       cout<<"student at index "<<i<<"  has "<<a<<" marks grace "<<endl;
       cout<<endl;
           }
    
  }


}