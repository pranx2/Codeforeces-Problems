#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int n;
long long int d;
cin>>n>>d;
if( n%d == 0) 
   cout<<"Multiples"<<endl;
else if( d%n == 0)
   cout<<"Multiples"<<endl;
else cout<<"No Multiples"<<endl;
return 0;
} 