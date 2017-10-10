#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int l = 0; l < t; l++)
    {
        int n;
        int k;
        cin >> n >> k;
        
        int result = -1;
        for(int i=1; i<n; i++)
        {
            int a = i;
            for(int j=1; j<=n; j++)
            {
                int b = j;
                if((a < b) && ((a & b) > result) && ((a & b) < k))
                {
                    result = a & b;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
