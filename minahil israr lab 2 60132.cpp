#include<iostream>
using namespace std;
int main()
{
	
	 int n;

    // Ask user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to print the inverted triangle
    for (int i = n; i >= 1; i--) {
        // Print spaces before stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	