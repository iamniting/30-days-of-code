#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
    int a[30], n;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    for(int i=0; i<n; i++)
    {
        int flag = 0;
        
        if(a[i] == 1)
        {
            cout << "Not prime" << endl;
            flag = 1;
        }
        
        for(int j=2; j<=sqrt(a[i]); j++)
        {
            if(a[i] % j == 0)
            {
                cout << "Not prime" << endl;
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            cout << "Prime" <<endl;
        }
    }
    
    return 0;
}
