#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int n;
long long int d;
cin>>n>>d;
cout<<"floor "<<n<<" / "<<d<<" = "<<floor(n/d)<<endl;
cout<<"ceil "<<n<<" / "<<d<<" = "<<ceil(1.00*n/d)<<endl;
cout<<"round "<<n<<" / "<<d<<" = "<<round(1.00*n/d)<<endl;

return 0;
} 