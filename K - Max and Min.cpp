#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int a,b,c;
cin>>a>>b>>c;
int max = a, min  = a;
for(int i = 1 ; i < 3; i++){
   if(max < b ){
      max = b;
   }
   else if( max < c){
      max = c;
   }
   else if( min > b){
      min = b;
   }
   else if(min > c){
      min = c;
   }
}
cout<<min<<" "<<max<<endl;
return 0;
} 