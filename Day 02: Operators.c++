#include <iostream>
using namespace std;

int main() 
{
    double meal_cost;
    double tip;
    double tax;
    cin>>meal_cost;
    cin>>tip;
    cin>>tax;
    
    meal_cost = meal_cost + (meal_cost * (tip / 100)) + (meal_cost * (tax / 100));
    cout<<"The total meal cost is "<<(int)(meal_cost + 0.5)<<" dollars.";
    
    return 0;
}
