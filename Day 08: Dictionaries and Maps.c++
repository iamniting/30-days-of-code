#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
    map <string, string> pbook;
    string name, num;
    int n;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> name >> num;
        pbook.insert(make_pair(name, num));
    }
    
    while(cin>>name)
    {
        map<string, string>::iterator p = pbook.find(name);
        if(p != pbook.end())
            cout << p->first << "=" << p->second;
        else
            cout << "Not found";
        cout<<endl;
    }
    
    return 0;
}
