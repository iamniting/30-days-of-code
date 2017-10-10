#include <iostream>
using namespace std;

int main()
{
    int n, i, c = 0, max = 0;
    int a[100];
    cin >> n;
    
    for (i=0; i<32; i++) 
    {  
        if((n & (1 << i)) > 0)
            a[i] = 1;
        else
            a[i] = 0;
    }
    
    for (i=0; i<32; i++) 
    {  
        if(a[i] == 1)
            c++;
        else if(a[i] == 0)
            c = 0;
        if(max < c)
            max = c;
    }
    cout << max;
    return 0;
}
