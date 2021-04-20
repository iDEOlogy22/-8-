#include<iostream>
using namespace std;
bool prosto(int chislo){
for(int i=2;i<=chislo/2;i++){
if(chislo%i==0){
return false;
}
}
return true;
}
bool imalikprostidel(int chislo, int k){
int prdel=0;
for(int i=2;i<=chislo;i++){
if(chislo%i==0){
if(prosto(i)){
prdel++;
}
}
}
if(prdel==k){
return true;
}
return false;
}
int main(){
int n,k;
cout<<"Vuvedete N i K"<<endl;
cin>>n>>k;
for(int i=1;i<=n;i++){
if(imalikprostidel(i,k)){
cout<<i<<"\n";
}
}
return 0;
}
