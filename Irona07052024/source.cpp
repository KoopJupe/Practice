/* Joel Irona 
   07/05/2024
 */
#include <iostream>
#include <string>

using namespace std;

class Stock {
private:
    string symbol;
    string name;
    double previousClosingPrice;
    double currentPrice;

public:
    // Constructor
    Stock(string sym, string n, double prevPrice)
        : symbol(sym), name(n), previousClosingPrice(prevPrice), currentPrice(prevPrice) {}

    // Accessor functions
    string getSymbol() const {
        return symbol;
    }

    string getName() const {
        return name;
    }

    double getPreviousClosingPrice() const {
        return previousClosingPrice;
    }

    double getCurrentPrice() const {
        return currentPrice;
    }

    // Mutator functions
    void setPreviousClosingPrice(double price) {
        previousClosingPrice = price;
    }

    void setCurrentPrice(double price) {
        currentPrice = price;
    }

    // Constant function to calculate percentage change
    double getChangePercent() const {
        if (previousClosingPrice == 0) {
            return 0; // To avoid division by zero
        }
        return ((currentPrice - previousClosingPrice) / previousClosingPrice) * 100;
    }
};

int main() {
   
    Stock stock("MSFT", "Microsoft Corporation", 27.5);

    // Display initial price
    cout << "Initial price for " << stock.getSymbol() << " (" << stock.getName() << ") is $" << stock.getPreviousClosingPrice() << endl;

    
    stock.setCurrentPrice(27.6);

    // Display new price
    cout << "New price for " << stock.getSymbol() << " (" << stock.getName() << ") is $" << stock.getCurrentPrice() << endl;

    // Displaying the price-change percentage
    cout << "The price-change percentage for " << stock.getSymbol()
        << " (" << stock.getName() << ") is "
        << stock.getChangePercent() << "%" << endl;

    return 0;
}
