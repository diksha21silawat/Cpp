/* Created By Diksha Silawat*/

#include <iostream>
using namespace std;

int main(){
    // finding a cube volume
    
    float cube_side, cube_volume;
    cout<<"***CUBE***"<<endl;
    cout<<"Enter the side of cube ? ";
    cin>>cube_side;
    cube_volume = cube_side*cube_side*cube_side;

    cout<<"Cube volume is :- "<<cube_volume<<endl;

// finding a Cylinder volume  
  float radious, hight, cylinder_volume;
  cout<<"\n***CYLINDER***"<<endl;
  cout<<"Enter the Radious of cylinder ? ";
  cin>>radious;
  cout<<"Enter the hight of cylinder ? ";
  cin>>hight;

  cylinder_volume = 3.14519*radious*radious*hight;

  cout<<"Cylinder volume is :- "<<cylinder_volume<<endl;
      


    return 0;
}