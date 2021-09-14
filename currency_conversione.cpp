/* Created by Diksha */



#include <iostream>
using namespace std;

int main( ){
    cout<<"*****Currency Conversione*****"<<endl;

float rupee ,afghani,dollar,peso,euro,taka,pound;
cout<<"Enter indian rupee ? ";
cin>>rupee;
afghani =rupee*1.17;
dollar = rupee*0.018;
peso = rupee*10.66;
euro = rupee*0.012;
taka = rupee*1.16;
pound = rupee*6.03;
cout<<"The value of indian rupee in afghani currency :- "<<afghani<<endl;
cout<<"The value of indian rupee in dollar currency :- "<<dollar<<endl;
cout<<"The value of indian rupee in peso currency :- "<<peso<<endl;
cout<<"The value of indian rupee in euro currency :- "<<euro<<endl;
cout<<"The value of indian rupee in Taka currency :- "<<taka<<endl;
cout<<"The value of indian rupee in Pound currency :- "<<pound<<endl;

    

    return 0;
}