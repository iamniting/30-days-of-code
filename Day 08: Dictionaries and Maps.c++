#include <iostream>
#include <algorithm>
using namespace std;

int check(string name[], long long int num[], string name1, int n)
{
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        if(name1 == name[i])
        {
            cout << name[i] << "=" << num[i] << endl;
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    string name[100001];
    long long int num[100001];
    string name1;
    int n, length, flag;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> name[i];
        cin >> num[i];
    }
    
    while(1)
    {
        cin >> name1;
        if(name1.empty())
            break;
        flag = 0;
        flag = check(name, num, name1, n);
        
        if(flag == 0)
        {
            cout << "Not found" << endl;
        }
        name1 = "";
    }
    
    return 0;
}
