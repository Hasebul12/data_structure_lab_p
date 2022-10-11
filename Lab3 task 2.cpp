#include<iostream>
#include<string.h>
using namespace std;

int main(){
int a;
char text[100],ch;
cout<<" Enter your text: ";
cin.getline(text,100);
cout<<"skip number: ";
cin>>a;
for(int i=0;text[i]!='\0';i=i+2){

    ch=text[i];
    if(ch>='a'){
        ch=ch+a;
        text[i]=ch;

    }

}
cout<<"Encrypted info: " <<text;
}
