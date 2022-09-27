#include<iostream>
using namespace std;



int main(){
    bool visited[1001] = {false};
    int arr[10];
    bool f = true;
    int new_arr[10];
    int j=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(!visited[arr[i]]){
            visited[arr[i]]=true;
            new_arr[j] = arr[i];
            j++;
        }
        else
            f = false;
    }
    if(f){
        cout << "Array already unique!" << endl;
    }
    else{
        for(int i=0; i<j; i++){
            cout << new_arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

