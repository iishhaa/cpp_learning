#include<iostream>
using namespace std;
int main(){
    int n,n2;
    cout<<"enter size of rows :"<<endl;
    cin>>n;
    cout<<"enter size of rows :"<<endl;
    cin>>n2;
    int a[n][n2],b[n][n2];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
            cout<<"enter elements of index :"<<i<<j<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"matrix of a :"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
         
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
            cout<<"enter elements of index :"<<i<<j<<endl;
            cin>>b[i][j];
        }
    }
    cout<<"matrix of b :"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
         
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
     int c[n][n2];
    cout<<"matrix of sum of a and b:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
         c[i][j]=a[i][j]+b[i][j];
         
        }
    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
         
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}