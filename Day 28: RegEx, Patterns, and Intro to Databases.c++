#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector <string> name;
    vector <string> email;
    vector <string> :: iterator itr;
    for(int i=0; i<N; i++)
    {
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        // find return index of @gmail.com
        if(emailID.find("@gmail.com") != -1)
        {
            name.push_back(firstName);
            email.push_back(emailID);
        }
    }
    sort(name.begin(), name.end());
    for(itr=name.begin(); itr!=name.end(); itr++)
    {
        cout << *itr << endl;
    }
    return 0;
}
