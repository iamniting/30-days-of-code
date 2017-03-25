#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int in;
    double dou;
    string st;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.    
    cin >> in;
    cin >> dou;
    cin.ignore();
    getline(cin, st);
    
    // Print the sum of both integer variables on a new line.
    cout << in + i << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d+dou << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.   
    cout << s + st;
    
    return 0;
}
