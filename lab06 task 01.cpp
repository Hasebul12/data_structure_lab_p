#include<iostream>
using namespace std;
 char stack[20];
 int top=-1;
class convert_to_postfix
{
 public:
    convert_to_postfix(){};
void push(char a)
{
    stack[++top]=a;
}
 char pop()
 {
    if(top==-1)
    {
       return -1;
    }
    else
    {
        return stack[top--];
    }
 }
  int priority(char a)
  {
    if(a=='(')
        return 0;
    if(a=='+' || a=='-')
        return 1;
    if(a=='*' || a=='/')
        return 2;
   }
};

int main()
{
    convert_to_postfix ob;
    char ex[20];
    char *e, a;
    cout<<"enter the infix expression:";
    cin>>ex;
    e=ex;
    cout<<"postfix expression is:";
    while(*e!='\0')
    {
        if(isalnum(*e))
            cout<<*e;
        else if(*e=='(')
            ob.push(*e);
        else if(*e==')')
        {
            while((a=ob.pop())!='(')
                cout<<a;
        }
        else
        {
            while(ob.priority(stack[top])>=ob.priority(*e))
                cout<<ob.pop();
            ob.push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        cout<<ob.pop();
    }
    return 0;
}

