// Euclidean Algorithm : Greatest Common Dinominator
#include "cmpt_error.h"
#include <iostream>
using namespace std;

int euclideanAlgorithm( int num1, int num2 );

int main() {

	int num1 = 0;
	int num2 = 0;
	int answer = 0;

	cout << "Enter First Number:";
	cin >> num1;
	cout << "Enter Second Number:";
	cin >> num2;

	answer = euclideanAlgorithm( num1, num2 );

	cout << "The Greatest Common Denominator of " << num1 << " and " << num2 << " is " << answer << ".";

} // main 

int euclideanAlgorithm( int num1, int num2 ) {

	if( num1 > num2 ) {
		num1 = num1 - num2; 
	} else if ( num1 < num2 ) {
		num2 = num2 - num1; 
	} 
	
	if( num1 != num2 ) {
		euclideanAlgorithm( num1, num2 );
	} 

	return num1;

} // Euclidean Algorithm 