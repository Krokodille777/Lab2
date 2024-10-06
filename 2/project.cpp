#include <iostream>
using namespace std;

int main()
{
    int fy, sy, n;

    cout << "Enter first year: ";
    cin >> fy;

    cout << "Enter second year: ";
    cin >> sy;

    if (fy > sy)
    {
        cout << "Second year should be greater than or equal to the first year";
    }
    else
    {
        // Calculate the number of years between fy and sy
        n = sy - fy;

        if (n>100) 
            cout <<"The number of years between is too big";
        else 
            cout << "The number of years between " << fy << " and " << sy << " is " << n;
    }

    return 0;
}
