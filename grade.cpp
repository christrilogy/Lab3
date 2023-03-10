
//  Christian Morgan

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	float grades[3];  // stores our three grades to be averaged
	float avg;        // the average of our three grades
	
	// ask for each of the three grades individually
	cout << "Please input the first grade" << endl;
	cin >> grades[0];
	
	cout << "Please input the second grade" << endl;
	cin >> grades[1];
	
	cout << "Please input the third grade" << endl;
	cin >> grades[2];
	
	avg = (grades[0] + grades[1] + grades[2]) / 3;
	
	cout << "The average of the three grades is " // preamble
	     << fixed << showpoint << setprecision(2) // formatting
	     << avg << endl;                          // actual output
	
	return 0;
  }
