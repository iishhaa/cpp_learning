#include<iostream>
using namespace std;
int main(){
    int temp;
//     Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
/*
cout<<"enter a temperature :";
cin>>temp;
if(temp < 0){
cout<<temp<<"  then freezing weather";
}
else if(temp < 10){
cout<<temp<<"  then very cold weather";

}
else if(temp < 20){
cout<<temp<<"  then cold weather";

}
else if(temp < 30){
cout<<temp<<"  then normal weather";

}
else if(temp < 40){
cout<<temp<<"  then its hot weather";

}
else if(temp >=40){
cout<<temp<<"  then its very hot weather";

}*/
/*Write a  program to determine eligibility for admission to a professional course based on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=190
*/

int mm,pm,cm,tm;
cout<<"marks in maths :"<<endl;
cin>>mm;
cout<<"marks in physics :"<<endl;
cin>>pm;
cout<<"marks in chemistry :"<<endl;
cin>>cm;
tm=mm+pm+cm;
cout<<"total in all three subject :"<<tm<<endl;
if(mm>=65&&pm>=55&&cm>=50&&tm>=190){
    cout<<" u are elegible  ta proffesional course critera";
}else{
    cout<<"u are not elegible";
}





}