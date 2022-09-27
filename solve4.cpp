#include <iostream>
using namespace std;
int count(int number, int array[], int length)
{
    int counter = 0;
    for(int i = 0; i < length; i++)
        if(array[i] == number)
            counter++;
    return counter;
}

int main()
{
    int numbers[10];
    int i;
    int sizeone;
    cout<<"Enter Size of First Array (max.10): ";
   cin>>sizeone;
   cout<<"Enter "<<sizeone<<" Elements for First Array: ";
   for(i=0; i<sizeone; i++)
      cin>>numbers[i];
    int Input_a_number_to_search = 6;
    cout <<Input_a_number_to_search << " appears "
              << count(Input_a_number_to_search, numbers, 10)
              << " times in the array.";
    return 0;
}
