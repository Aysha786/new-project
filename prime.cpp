#include<iostream>
using namespace std;
int main(){
int a,b, num;
cout<<"enter the number you wanna check:";
cin>>a>>b;
int i;
for(num=a;num<=b;num++)
{
for(i=2;i<num;i++){
    if(num%i==0){
    break;
    }}
if(i==num)
    cout<<num;
}

return 0;
}
