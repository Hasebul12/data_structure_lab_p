#include<iostream>
using namespace std;
class product
{
public:
    string product_name;
    int product_id;
    string product_category;
    int unite_price;
};
int main()
{
    int i,j,n,temp;
    cout<<"Enter the number of products:";
    cin>>n;
    product p[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter product "<<i+1<<" details:"<<endl;
        cout<<"Enter product name:";
        cin>>p[i].product_name;
        cout<<"Enter product id:";
        cin>>p[i].product_id;
        cout<<"Enter product category:";
        cin>>p[i].product_category;
        cout<<"Enter unite price:";
        cin>>p[i].unite_price;
    }
int button;
cout << "1.Bubble Short: " << endl;
cout << "2.Selection Short: " << endl;
cout << "3.Search a Product: " << endl;
cout << " Press the button which sort you want : ";

cin>>button;

switch (button) {
  case 1:
    cout << "Bubble Short";
    cout<<"The products sorted according to unite price are:"<<endl;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i].unite_price>p[j].unite_price)
            {
                product temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"Product "<<i+1<<" details:"<<endl;
        cout<<"Product name:"<<p[i].product_name<<endl;
        cout<<"Product id:"<<p[i].product_id<<endl;
        cout<<"Product category:"<<p[i].product_category<<endl;
        cout<<"Unite price:"<<p[i].unite_price<<endl;
    }

    break;
  case 2:
    cout << "Selection Short";
    cout<<"";

for(int i=0;i<5;i++)
{
    int min_index =i;
    for(int j=i+1;j<5;j++)
    {
    if(p[min_index].unite_price>p[j].unite_price)
    {
    min_index=j;


    }
    temp = p[min_index];
    p[min_index]=p[i];
    p[i]=temp;

    }


    cout<<endl;

}
break;
  case 3:
    cout << "Search a Product";


cout<<"Enter the Product's Name to search;";
cin>>name;
for(i=0;i<5;i++)
{
if(p.[i].productName==name)

{
cout<<"Product's ID;"<<p[i].product_id<<endl;
cout<<"Product's Name;"<<p[i].product_name<<endl;
cout<<"Product's Price;"<<p[i].unit_price<<endl;
cout<<"Product's Category;"<<p[i].product_category<<endl;
}
}

}

    return 0;
}
