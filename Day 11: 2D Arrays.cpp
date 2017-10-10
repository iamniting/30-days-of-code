#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector < vector<int> > ar(6, vector<int>(6));
    int sum, max = -20;
    
    for(int i=0; i<6; i++)
    {
       for(int j=0; j<6; j++)
       {
          cin >> ar[i][j];
       }
    }
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
            if(sum > max)
                max = sum;
        }
    }
    
    cout << max;
    
    return 0;
}
