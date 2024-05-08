#include<iostream>
using namespace std;
int main(){
long long int n;
long long int d=0;
scanf("%lld",&n);
for(int i = 1; i<=n; i++){
   d = d+i;
}
printf("%lld",d);
return 0;
}