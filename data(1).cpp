#include<iostream>
using namespace std;
int main(){
int den, mesec, godina;
cout<<"Vuvedete data"<<endl;
cin>>den>>mesec>>godina;
bool visokosna=false;
if((godina%4==0 && godina%100!=0) || godina%400==0){
visokosna=true;
}
int kraiNaMesec;
switch(mesec){
case 2:
if(visokosna){
kraiNaMesec=29;
}else{
kraiNaMesec=28;
}
break;
case 4:
kraiNaMesec=30;
break;
case 6:
kraiNaMesec=30;
break;
case 9:
kraiNaMesec=30;
break;
case 11:
kraiNaMesec=30;
break;
default:
kraiNaMesec=31;
}
if(den==kraiNaMesec){
if(mesec<12){
mesec++;
den=1;
}else{
godina++;
mesec=1;
den=1;
}
}else{
den++;
}
cout<<den<<" "<<mesec<<" "<<godina;
return 0;
}
