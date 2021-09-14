/* Created By Diksha Silawat*/

#include <iostream>
using namespace std;

int main(){
//  finding a Rectangular box volume

float length, width, rec_hight, rec_volume;
cout<<"\n***RECTANGULAR BOX***";
cout<<"\nEnter the length of rectangular box ? ";
cin>>length;
cout<<"Enter the width of rectangular box ? ";
cin>>width;
cout<<"Enter the hight of rectangular box ? ";
cin>>rec_hight;

rec_volume = length*width*rec_hight;
cout<<"rectangular box volume :- "<<rec_volume<<endl;


// finding a volume ofsphere
float sphere_radious, sphere_volume;
cout<<"\n***SPHERE***";
cout<<"\nEnter a radious of sphere ? ";
cin>>sphere_radious;

sphere_volume =4*3.14519*sphere_radious*sphere_radious*sphere_radious/3;
cout<<"Sphere volume is :- "<<sphere_volume<<endl;


    return 0;
}