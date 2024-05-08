#include<iostream>
#include<iomanip>
using namespace std;
int main(){
long long int a,b;
cin>>a>>b;
while ( (a/10!=0) && (b/10 !=0))
{
   a = a%10;
   b = b%10;
}

cout<<a+b;
return 0;
}