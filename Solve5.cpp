#include<iostream>
using namespace std;



int main(){
    int frequency[10] = {0};
    int arr[10];
    cout<<"Enter the element of number": <<endl;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        frequency[arr[i]]++;
    }
    for(int i=0; i<10; i++){
        if(frequency[arr[i]]!=-1){
            cout << arr[i] << " occurs = " << frequency[arr[i]] << " time";
            if(frequency[arr[i]]>1) cout << "s";
            cout << endl;
            frequency[arr[i]] = -1;
        }
    }


    return 0;
}
