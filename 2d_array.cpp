/*wap to  create a dimensional array named as marks in which we storethe marks of a statements
every students eappeared for 3 subjects */
#include<iostream>
using namespace std;
int main(){
    int n,n2;
    cout<<" enter length of rows :"<<endl;
    cin>>n;
     cout<<" enter length ofcolumns :"<<endl;
    cin>>n2;
    int A[n][n2];
    int B[n][n2];
    cout<<"matrics of A enter elements :"<<endl;
    for(int i=0;i<n;i++){//outer loop for rowws
        for(int j=0;j<n2;j++){//inner loop for columns
            cout<<"enter a index of"<<i<<j<<endl;
            cin>>A[i][j];
        }
    }
    cout<<"matrics of B enter elements :"<<endl;

    for(int k=0;k<n;k++){//outer loop for rowws
        for(int l=0;l<n2;l++){//inner loop for columns
            cout<<"enter a index of"<<k<<l<<endl;
            cin>>B[k][l];
        }
    }
    cout<<"matric of A :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n2;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matric of b:"<<endl;

    for(int k=0;k<n;k++){
        for(int l=0;l<n2;l++){
            cout<<B[k][l]<<" ";
        }
        cout<<endl;
    }
   int C[n][n2];
      for(int k=0;k<n;k++){
        for(int l=0;l<n2;l++){
            C[k][l]=A[k][l]+B[k][l];
        }
    }

    cout<<endl;
    cout<<"addition of a and b :"<<endl;
    for(int k=0;k<n;k++){
        for(int l=0;l<n2;l++){
            cout<<C[k][l]<<" ";
        }
        cout<<endl;
    }

/*
*/
}