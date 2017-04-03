#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    
    try
    {
        int num = stoi(S);
        cout << num;
    }
    catch(...)
    {
        cout << "Bad String";
    }
    return 0;
}
