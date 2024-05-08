#include<iostream>
using namespace std;
int main(){
int y,m,d,N;
cin>> N;
y = N / 365;
N = N%365;
m = N/30;
N = N%30;
d = N;
cout<<y<<" years"<<endl;
cout<<m<<" months"<<endl;
cout<<N<<" days"<<endl;
return 0;
}