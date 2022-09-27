#include<iostream>
using namespace std;
int main()
{
    int arr1[5], arr2[8], arrMerge[13];


	int size1, size2, i, k;
    cout<<"Enter the Size for First Array:(max.5) ";
    cin>>size1;
    cout<<"Enter "<<size1<<" Elements of First Array:(max.8) ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
        arrMerge[i] = arr1[i];
    }
    k = i;
    cout<<"\nEnter the Size of Second Array: ";
    cin>>size2;
    cout<<"Enter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
        arrMerge[k] = arr2[i];
        k++;
    }
   cout<<"\n The new array in reverse order:\n";

     for(int i=12;i>=0;i--)
    {
        cout<<arrMerge[i]<<" ";
    }

    return 0;
}
