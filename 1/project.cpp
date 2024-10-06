#include <iostream>
using namespace std;

int main(){
    int N, n =1,s = 0, se = 0, so = 0;
    cout<<"Enter N: ";
    cin>>N;
    if (N<1)
        cout<<"N must be greater than 1";
    else
        while(n<=N){
            s+=n;
            n++;
            if(n%2==0){
                se+=n;
            }else if (n%2==1){
                so+=n;
            }
            else
                n++;
        }
        
    cout<<"Sum = "<<s;
    cout<<"\nSum of even numbers = "<<se;
    cout<<"\nSum of odd numbers = "<<so;
    return 0;

}