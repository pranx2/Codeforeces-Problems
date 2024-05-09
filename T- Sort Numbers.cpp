
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector <int> X(3), Y(3); //Taking two vectors for sorting..
   for (auto &N : X) cin >> N;
   Y = X;
   sort ( X.begin(), X.end()); //sort the vector;
   for(auto &N : X) cout<<N;
   cout<<endl<<endl;
   for(auto &N : Y) cout<<N;
   cout<<endl;  
}