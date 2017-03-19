#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int in;
    double dou;
    string st;
    // Declare second integer, double, and String variables.
    cin>>in;
    cin>>dou;
    cin.ignore();
    getline(cin, st);
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cout<<in + i<<endl;
    
    // Print the sum of both integer variables on a new line.
    cout<<fixed<<setprecision(1)<<d+dou<<endl;
    
    // Print the sum of the double variables on a new line.
    cout<<s + st;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    return 0;
}
