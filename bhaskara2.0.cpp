#include <iostream>
#include <math.h>

using namespace std;

int main() {
float ba,bb,bc,bd,bx1,bx2,bid,oper,pa,pb,pr;
cout<<"Select your operation:\n Bhaskara(1), Remarkable identities(2)\n";
cin>>oper;
if (oper>2){
cout<<"You have seleceted something wrong!";
}
else{
if (oper==1){
cout<<"~~~~~~~~~~~~~~~~BHASKARA~~~~~~~~~~~~~~~~~\n";
cout<<"Do write variable a \n";
cin>>ba;
cout<<"Do write variable b \n";
cin>>bb;
cout<<"Do write variable c \n";
cin>>bc;
bd=bb*bb-4*ba*bc;
cout<<"this is your delta -> "<<bd<<"\n";
if (bd>=0) {
bx1=(-bb)+sqrt(bd)/(2*ba);
bx2=(-bb)-sqrt(bd)/(2*ba);
cout<<"this is x1 -> "<<bx1<<"\n this is your x2 -> "<<bx2;
}
else {
bd=-bd;
bx1=-bb/(2*ba);
bx2=-bb/(2*ba);
bid=sqrt(bd)/(2*ba);
if (bid==1) {
cout<<"this is your x1 -> "<<bx1<<"+"<<"i "<<"\n this is your x2 -> "<<bx2<<"-"<<"i";
}
else {
cout<<"this is your x1 -> "<<bx1<<"+"<<bid<<"i "<<"\n this is your x2 -> "<<bx2<<"-"<<bid<<"i\n";
}
}
}
if (oper==2){
cout<<"~~~~~~~~~~~~~~~~Remarkable identities~~~~~~~~~~~~~~~~~\n";
cout<<"Do write variable a \n";
cin>>pa;
cout<<"Do write variable b \n";
cin>>pb;
if (pb>0){
pr=pa*pa+2*pa*pb+pb*pb;
cout<<"\n"<<pr;
if (pb<0){
pr=pa*pa-2*pa*pb+pb*pb;
cout<<pr;
}
}
}
}return 0;
}
