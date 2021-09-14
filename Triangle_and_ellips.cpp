/* Created By Diksha */

#include <iostream>
using namespace std;

int main(){
// Finding a area of triangle 

float first , second, third, t_area;
cout<<"\n***TRIANGLE***";
cout <<"\nEnter a first side of triangle ? ";
cin>>first;
cout <<"Enter a Second side of triangle ? ";
cin>>second;
cout <<"Enter a third side of triangle ? ";
cin>>third;
t_area =first*second*third;
cout<<"Area of a triangle :- "<<t_area<<endl;

// finding a volume of ellips


float r1, r2 , r3, e_volume;
cout<<"\n***ELLIPS***"<<endl;
cout<<"Enter  r1 radious of ellips ? ";
cin>>r1;
cout<<"Enter  r2 radious of ellips ? ";
cin>>r2;
cout<<"Enter  r3 radious of ellips ? ";
cin>>r3;
e_volume = 4/3*3.14519*r1*r2*r3;
cout<<"Volume of ellips is :- "<<e_volume;



    return 0;
}