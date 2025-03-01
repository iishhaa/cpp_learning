#include<iostream>
using namespace std;
int main(){
    char k;
    cout<<"enter any char.";
    cin>>k;
if(islower(k)){
    cout<<"this is"<<k<<" lower case"<<endl;

}  else if(isupper(k)){
    cout<<"this is"<<k<<" upper case"<<endl;
} 
else{
    cout<<"this is invalid ."<<endl;
}
}