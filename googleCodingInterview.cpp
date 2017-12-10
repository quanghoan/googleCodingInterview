// Problem: Add one to array.
// Example: 
// [1, 2, 3]->[1, 2, 4]; 
// [0]->[1];
// [1, 0, 9]->[1, 1, 0];
// [9, 9, 9, 9]->[1, 0, 0, 0, 0];

// psudocode:

// def add_one(given_array) {
// 	carry = 1
// 	result = new int[given_array.length]
// 	for i from (given_array.length-1) down to 0
// 	{
// 		total = given_array[i]+carry
// 		if (total == 10)
// 		{
// 			carry = 1
// 		} else {
// 			carry = 0
// 		}
// 		result[i] = total % 10
// 	}
// 	if (carry == 1)
// 	{
// 		result = new int[given_array.length+1]
// 		result[0] = 1
// 	}
// 	return result;
// }	

#include <iostream>
using namespace std;

int study()
{
	int array[] = {9, 9, 9, 9, 9, 9, 9};
	int carry = 1;
	int array_length = sizeof(array)/sizeof(array[0]);
	int result[array_length];
	int total;
	for (int i = array_length - 1; i >= 0; i--)
	{
		total = array[i] + carry;
		carry = total == 10 ? 1 : 0;
		result[i] = total % 10;
		if (carry == 1)
		{
			result[array_length+1];
			result[0] = 1;
		}
	}
	for (const auto& e : result) {
    	cout << e << endl;
    }
}

int main()
{
	study();
	return 0;
}