#include <iostream>
using namespace std;

int main() 
{
    int n;
    string str[10];
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; str[i][j]!='\0'; j++)
        {
            if(j % 2 == 0)
            {
                cout << str[i][j];
            }
        }
        cout << " ";
        for(int j=0; str[i][j]!='\0'; j++)
        {
            if(j % 2 != 0)
            {
                cout << str[i][j];
            }
        }
        cout << endl;
    }
    
    return 0;
}
