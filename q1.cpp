#include<iostream>
using namespace std;
void maxnum(int size,int a[]){
    int  max=a[0];
    int index=0;
    for(int i=0;i<size;i++){
        if(i>max){
            max=a[i];
            index=i;
        }
    }
    cout<<"largest element :"<<max;
    cout<<"\nindex of largest element :"<<index
;}
int main(){
    
    int a[]={12,67,45,98,23,7};
    int n=6;
    maxnum(n,a);
}
    