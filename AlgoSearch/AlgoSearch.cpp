#include <iostream>
using namespace std;

int arr[20];		//Array to be searched
int n;				// Number of elemenets in the array
int i;				// Index of array elements

void input() 
{
	while (true)
	{
		cout << " Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\n Array should have minimum 1 and maximum 20 elemnts. \n\n";
	}
	// Accept array elements
	cout << "\n --------------------\n";
	cout << " Enter Array Elements \n";
	cout << "\n --------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void Linearsearch()
{
	char ch;
	int ctr; //number of comparisons
	int item;

	do
	{
		// Accept the number to be searched
		cout << "\n Enter the element you want to search : "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; // step 2
		while (i < n) //step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl; //step 6
				break;
			}
		}
	}
}