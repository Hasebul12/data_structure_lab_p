#include<iostream>

using namespace std;

int main()
{
   int arry1[10], arry2[10], common[10];
   int i,j,k=0;
   int sizeone, sizetwo, x, cnt=0;
   cout<<"Enter Size of First Array (max.10): ";
   cin>>sizeone;
   cout<<"Enter "<<sizeone<<" Elements for First Array: ";
   for(i=0; i<sizeone; i++)
      cin>>arry1[i];
   cout<<"Enter Size of Second Array (max.10): ";
   cin>>sizetwo;
   cout<<"Enter "<<sizetwo<<" Elements for Second Array: ";
   for(i=0; i<sizetwo; i++)
      cin>>arry2[i];
   for(i=0; i<sizeone; i++)
   {
      for(j=0; j<sizetwo; j++)
      {
         if(arry1[i]==arry2[j])
         {
            cnt = 0;
            for(x=0; x<k; x++)
            {
               if(arry1[i]==common[x])
                  cnt++;
            }
            if(cnt==0)
            {
               common[k] = arry1[i];
               k++;
            }
         }
      }
   }
   if(k==0)
      cout<<"No common element!";
   else
   {
      cout<<"\nHere are all "<<k<<" Common elements:\n";
      for(i=0; i<k; i++)
         cout<<common[i]<<" ";
   }
   cout<<endl;
   return 0;
}
