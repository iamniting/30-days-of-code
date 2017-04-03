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
    catch(exception e)
    {
        cout << "Bad String";
    }
    return 0;
}
