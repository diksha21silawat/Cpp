/* Created by Diksha Silawat */


#include <iostream>
using namespace std;

int main(){
    float centimeter, Meter, kilometer ,feet, inch,yard;
cout<<"*****distance conversione*****"<<endl;

cout<<"Enter the distance in centimeter ? ";
cin>>centimeter;
Meter = centimeter/100;
kilometer = centimeter/100000;
feet =kilometer*3280.84;
inch = kilometer*39370.1;
yard = kilometer*1093.61;
cout<<"The distance in meter is :- "<<Meter<<endl; 
cout<<"The distance in feet is :- "<<feet<<endl; 
cout<<"The distance in inch is :- "<<inch<<endl; 
cout<<"The distance in yard is :- "<<yard<<endl; 
cout<<"The distance in kilometer is :- "<<kilometer<<endl; 



return 0;
}