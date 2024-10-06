#include <iostream>
using namespace std;

int main(){
    int N, n = 1, s = 0, se = 0, so = 0;
    int ss = 0;
    double div;
    
    cout << "Enter N: ";
    cin >> N;
    
    if (N < 1) {
        cout << "N must be greater than or equal to 1";
    } else {
        while (n <= N) {
            s += n;  // Sum of all numbers
            
            // Check if n is even or odd and add accordingly
            if (n % 2 == 0) {
                se += n;  // Even sum
            } else {
                so += n;  // Odd sum
            }
            
            n++;  // Increment the counter
        }
        
        // Output the results
        cout << "Sum of all numbers = " << s;
        cout << "\nSum of even numbers = " << se;
        cout << "\nSum of odd numbers = " << so;


        ss = s + se + so;
        div = ss/2;
        cout<<"ss ="<<ss<<"\t div = "<<div;
    }

    return 0;
}
