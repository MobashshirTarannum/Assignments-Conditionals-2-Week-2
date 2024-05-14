#include<iostream>
using namespace std;
int main(){
    int am;
    cout<<"enter amount : ";
    cin>>am;
    int n1,n2,n5,n10,n20,n50,n100,n500,n2000;
    n1=n2=n5=n10=n20=n50=n100=n500=n2000=0;
    switch (am>=2000){
    case 1:
        n2000=am/2000;
        am=am-n2000*2000;
        break;
   }
   switch (am>=500){
    case 1:
        n500=am/500;
        am=am-n500*500;
        break;
   }
   switch (am>=100){
    case 1:
        n100=am/100;
        am=am-n100*100;
        break;
   }
   switch (am>=50){
    case 1:
        n50=am/50;
        am=am-n50*50;
        break;
   }
   switch (am>=20){
    case 1:
        n20=am/20;
        am=am-n20*20;
        break;
   }
   switch (am>=10){
    case 1:
        n10=am/10;
        am=am-n10*10;
        break;
   }
   switch (am>=5){
    case 1:
        n5=am/5;
        am=am-n5*5;
        break;
   }
   switch (am>=5){
    case 1:
        n5=am/5;
        am=am-n5*5;
        break;
   }
   switch (am>=2){
    case 1:
        n2=am/2;
        am=am-n2*2;
        break;
   }
   switch (am>=1){
    case 1:
        n1=am/1;
        am=am-n1*1;
        break;
   }
if(n2000!=0) cout<<"notes of 2000 = "<<n2000<<endl;
if(n500!=0) cout<<"notes of 500 = "<<n500<<endl;
if(n100!=0) cout<<"notes of 100 = "<<n100<<endl;
if(n50!=0) cout<<"notes of50 = "<<n50<<endl;
if(n20!=0) cout<<"notes of 20 = "<<n20<<endl;
if(n10!=0) cout<<"notes of 10 = "<<n10<<endl;
if(n5!=0) cout<<"notes of 5 = "<<n5<<endl;
if(n2!=0) cout<<"notes of 2 = "<<n2<<endl;
if(n1!=0) cout<<"notes of 1 = "<<n1<<endl;
}