#include<iostream>
using namespace std;
int main(){
double X,Y;
cin>>X>>Y;
if ( X == 0 && Y ==0)
   cout<<"Origem";
else if ( (0 < X) && (0 < Y  ) )
   cout<<"Q1";
else if ( (0 < X) && (0 > Y  ) )
   cout<<"Q4";
else if ( (0 > X ) && (0 < Y ) )
   cout<<"Q2";
else if ( (0 > X ) && (0 > Y ) )
   cout<<"Q3";
else if (X > 0 || X < 0 && Y==0)
   cout<<"Eixo X";
else if (Y > 0 || Y < 0 && X == 0)
   cout<<"Eixo Y";
return 0;
}