#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int main()
{
    int N;
    bool isPrime = true;
    
    // Input the number
    cout << "Enter N: ";
    cin >> N;
    
    // Numbers less than 2 are not prime
    if (N <= 1)
    {
        cout << "N is not Prime" << endl;
        return 0;
    }
    
    // Only check divisors up to sqrt(N)
    for (int i = 2; i <= sqrt(N); i++)
    {
        cout << "i = " << i << endl;
        if (N % i == 0)
        {
            cout << "N is not Prime" << endl;
            isPrime = false;
            break; // Exit the loop as we found a divisor
        }
    }
    
    if (isPrime)
    {
        cout << "N is Prime" << endl;
    }

    return 0;
}
