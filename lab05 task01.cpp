#include<iostream>
using namespace std;
class Student
{
    public:
    string ID;
    string Name;
    float CGPA;
    int Credit;
};
int main(){
int a=5;
Student info[a];
Student s1;

for(int i=0;i<a;i++){
    cout<<" Enter student Name: "<<endl;
    cin>>info[i].Name;
    cout<<"Enter the ID: ";
    cin>>info[i].ID;
    cout<<"Enter the CGPA: "  ;
    cin>>info[i].CGPA;
    cout<<"Enter the Credit: "  ;
    cin>>info[i].Credit;
}
/*s1.ID="22-46328-1";
s1.CGPA=3.50;
s1.Name="Hasebul Hasan";
s1.Credit=34;*/


/*cout<<s1.ID<<endl;
cout<<s1.Name<<endl;
cout<<s1.CGPA<<endl;
cout<<s1.Credit<<endl;
*/
for(int i=0;i<a;i++){

cout<<"ID number: "<<info[i].ID<<endl;
cout<<"Student name: "<<info[i].Name<<endl;
cout<<"Student CGPA: "<<info[i].CGPA<<endl;
cout<<"Student Credit: "<<info[i].Credit<<endl;

return 0;


}}
