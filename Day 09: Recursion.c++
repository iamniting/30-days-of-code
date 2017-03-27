#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 1)
        return 1;
    
    int temp = factorial(n-1);
    temp = temp * n;
    
    return temp;
}

int main() 
{
    int n;
    cin >> n;
    
    cout << factorial(n);
    
    return 0;
}
