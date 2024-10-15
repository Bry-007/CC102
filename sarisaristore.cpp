#include <iostream>

using namespace std;

int main () 
{
    float sugarPriceUSD = 1.5, ricePricePound = 2.0, sardinesPricePound = 1.8, coffeePriceUSD = 3.0, milkPriceUSD = 1.1, USDtoPhp = 55.0, PoundtoPhp = 70.0;
	int	sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	
	cout << "Enter the quantity of each product purchased:\n";
	cout << "Sugar:";
	cin >> sugarQty;
	
	cout << "Rice:";
	cin >> riceQty;
	
	cout << "Sardines:";
	cin >> sardinesQty;
	
	cout << "Coffee:";
	cin >> coffeeQty;
	
	cout << "Milk:";
	cin >> milkQty;
	
	
	double sugarCostPhp = sugarPriceUSD * sugarQty * USDtoPhp;
	double coffeeCostPhp = coffeePriceUSD * coffeeQty * USDtoPhp;
	double milkCostPhp = milkPriceUSD * milkQty * USDtoPhp;
	double riceCostPhp = ricePricePound * riceQty * PoundtoPhp;
	double sardinesCostPhp = sardinesPricePound * sardinesQty * PoundtoPhp;
	
	double totalCostPhp = sugarCostPhp + coffeeCostPhp + milkCostPhp + riceCostPhp + sardinesCostPhp ;
	
	
	
	
	return 0;

}