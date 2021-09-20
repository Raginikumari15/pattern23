#include <iostream>
using namespace std;
/*A
  BB
  CCC*/
int main(){
int i=1;
int j,n;
cin>>n;
while(i<=n){
j=1;
while(j<=i){
char ch ='A'+i-1;
cout<< ch;
j++;
}
cout<< endl;
i++;
}
}