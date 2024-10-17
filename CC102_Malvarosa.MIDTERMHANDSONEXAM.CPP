#include <iostream>

using namespace std;

int main () 
{
    float sugarPriceUSD = 1.5, ricePricePound = 2.0, sardinesPricePound = 1.2, coffeePriceUSD = 3.5, milkPriceUSD = 1.8, USDtoPhp = 56.0, PoundtoPhp = 75.0;
	int	sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	
	cout << "Enter the quantity of each product purchased:\n";
	cout << "Sugar     :";
	cin >> sugarQty;
	
	cout << "Rice      :";
	cin >> riceQty;
	
	cout << "Sardines  :";
	cin >> sardinesQty;
	
	cout << "Coffee    :";
	cin >> coffeeQty;
	
	cout << "Milk      :";
	cin >> milkQty;
	
	
	double sugarCostPhp = sugarPriceUSD * sugarQty * USDtoPhp;
	double coffeeCostPhp = coffeePriceUSD * coffeeQty * USDtoPhp;
	double milkCostPhp = milkPriceUSD * milkQty * USDtoPhp;
	double riceCostPhp = ricePricePound * riceQty * PoundtoPhp;
	double sardinesCostPhp = sardinesPricePound * sardinesQty * PoundtoPhp;
	
	double totalCostPhp = sugarCostPhp + coffeeCostPhp + milkCostPhp + riceCostPhp + sardinesCostPhp ;
	
	cout << "\n----------Purchase Details----------\n";
	cout << "Sugar     (x" << sugarQty << ")      : " << sugarCostPhp << " Php\n";
	cout << "Rice      (x" << riceQty << ")      : " << riceCostPhp << " Php\n";
	cout << "Sardines  (x" << sardinesQty << ")      : " << sardinesCostPhp << " Php\n";
	cout << "Coffee    (x" << coffeeQty << ")      : " << sardinesCostPhp << " Php\n";
	cout << "Milk      (x" << milkQty << ")      : " << milkCostPhp << " Php\n";
	
	cout << "\nTotal Amount to pay: " << totalCostPhp << " Php\n";
	
	
	
	
	return 0;

}