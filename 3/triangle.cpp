#include <iostream>
using namespace std;

int main(){
    int st = 1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = st; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}