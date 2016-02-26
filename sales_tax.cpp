// Program 2.2: compute sales tax on purchase
// Authors: James P. Cohoon and Jack W. Davidson
// Date: 1/25/1994
#include <iostream>
using namespace std;
int main()
{
	// Input price
	cout << "Purchase price ? " << flush;
	float Price;
	cin >> Price;

	// Compute and output sales tax
	cout << "Sales tax on $" << Price << " is ";
	cout << "$" << Price * 0.04 << endl;
	return 0;
}
