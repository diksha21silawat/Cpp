/* Created by Diksha Silawat */


#include <iostream>
using namespace std;

int main(){

// finding a volume cone

float cone_radious , cone_height, cone_volume;
cout<<"\n***CONE***";
 cout<<"\nEnter a radious of cone ? ";
 cin>>cone_radious;
 cout<<"Enter a height of cone ? ";
 cin>>cone_height;
cone_volume =3.14519*cone_radious*cone_radious*cone_height;
cout<<"Cone volume is :- "<<cone_volume<<endl;

//  finding the Area of circle 
float c_rdious, c_Area ;
cout<<"\n***CIRCLE***";
cout<<"\nEnter the radious of Circle ? ";
cin>>c_rdious;
c_Area = 3.14519*c_rdious*c_rdious;
cout<<"Area of a Circle :- "<<c_Area<<endl;
    
    return 0;
}