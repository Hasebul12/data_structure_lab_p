#include<iostream>
using namespace std;

string encode(string s, int j){
    int l = s.size();
    int cnt = 0;
    for(int i=0; i<l; i++){
        cnt++;
        if(cnt==j){
            if(i+1>=l) break;
            s[i+1] += 2;
            i++;
            cnt = 0;
        }
    }
    return s;

}

int main(){
    string s = "I am a student";
    int j  = 2;
    cout << "INPUT :" << endl;
    cout << "string : " << s << endl << "Skip = " << j << endl;
    cout << "Encoded string : " << encode(s, j) << endl;


    return 0;
}
