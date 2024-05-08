#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double r;
cin>>r;
cout<< fixed << setprecision(9);
cout<<(3.141592653*r*r);
return 0;
}