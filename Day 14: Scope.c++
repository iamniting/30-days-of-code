#include <iostream>
#include <vector>
using namespace std;

class Difference
{
    private:
        vector<int> elements;
    public:
        int maximumDifference;
        
        Difference(vector <int> x)
        {
            elements = x;
        }
        
        void computeDifference()
        {
            int min = 100, max = 0;
            vector <int> :: iterator itr;
            for(itr=elements.begin(); itr!=elements.end(); itr++)
            {
                if(min > *itr)
                    min = *itr;
                if(max < *itr)
                    max = *itr;
            }
            maximumDifference = max - min;
        }
};

int main()
{
    int N;
    cin >> N;
    vector <int> a;
    
    for (int i=0; i<N; i++)
    {
        int e;
        cin >> e;
        a.push_back(e);
    }
    
    Difference d(a);
    d.computeDifference();
    cout << d.maximumDifference;
    
    return 0;
}
