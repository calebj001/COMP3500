// Author: Caleb Johnson
// File: simple.cpp
// Version: 08/30/22
// Sources: I googled a few linux commands such as rmdir and how to use chmod.
// I also viewed the site https://www.hostinger.com/tutorials/linux-commands
// for a more robust understanding/refresher on the cd command. 

#include<iostream>
#include<cmath>

using namespace std;

float calculateSD(float data[], int n);
int calculateFact(int n);

int main() {
	int i, j = 1;
	float data[10];

	cout << "Enter a positive number (<10): ";
	cin >> j;
	cout << "Please enter " << j << " positive numbers: ";

	for(i=0; i<j; ++i) {
		cin >> data[i];
	}
	
	// Standard Deviation output
	cout << endl << "Standard Deviation = " << calculateSD(data, j) << endl;

	// Factiorial output
	cout << "Factorial of " << j << " = " << calculateFact(j) << endl;	
	return 0;
}

// Calculates the SD of an array 'data'
float calculateSD(float data[], int n) {
	float sum, mean, SD = 0.0;
	int i;

	// Calculates the sum of the data
	for (i=0; i < n; ++i) {
		sum += data[i];
	}
	mean = sum / n;

	// Begins calculations for the SD using the mean found above
	for (i=0; i < n; ++i) {
		SD += pow(data[i] - mean, 2);
	}
	
	return sqrt(SD / n);
			
}

// Calculates the factorial of the integer j
int calculateFact(int n) {
	if (n > 1) return n * calculateFact(n-1);
	else return 1;
}
