#include <iostream>

using namespace std;

int main(){
	double temperature;
	
	cout << "Enter the temperature in degrees: ";
	cin >> temperature;
	
	if (temperature < 32) {
		cout << "It's cold! You should bring a heavy jacket." << endl;
	}
	else if (temperature = 32 - 50) {
		cout << "It's a bit chilly! You should bring a light jacket." << endl;
	}
	else (temperature < 50); {
		cout << "It's warm! You don't need to bring a jacket." << endl;
	}
	return 0;
} 