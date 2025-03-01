#include<iostream>
using namespace std;
int main(){
//     char c,A,E,I,O,U,a,e,i,o,u;
//     cout<<"enter a charcater :";
//     cin>>c;
//     if(c =='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
//      cout<<"thi is vowel .";
//     }
//    else {
//         cout<<"this is consonant.";
// }

// question 2============================

/*Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
 if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.
*/
  int pen_cost,discount,quantity,  total_cost;
  cout<<"enter a cost of pen :";
  cin>>pen_cost;
  cout<<"how many pens you purchase :";
  cin>>quantity;
    total_cost=quantity*pen_cost;
  cout<<"total quantity of pens :"<<total_cost;

  if (total_cost>=1000)

  {
    cout<<"     yeah!! you got 20percent discount...."<<endl;
    cout<<" your total discount :"<<total_cost*20/100<<endl;
  cout<<"you pay only :"<<total_cost-total_cost*20/100<<endl;
  }
  else if(total_cost<1000){
    cout<<"     yeah!! you got  10 percent discount...."<<endl;

  cout<<" your total discount :"<<total_cost*10/100<<endl;
  cout<<"you pay only :"<<total_cost-total_cost*10/100<<endl;
  }
  
}