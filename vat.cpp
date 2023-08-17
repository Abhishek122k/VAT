#include <iostream>
#include <cmath>
using namespace std;

double calculateOriginalPrice(double finalPriceWithVAT) {
    if (finalPriceWithVAT <= 0) {
        return -1;  
    }

   
    double originalPrice = finalPriceWithVAT / (1 + 0.15);

   
    originalPrice = round(originalPrice * 100) / 100;

    return originalPrice;
}

int main() {
    double finalPrice = 230;
    double originalPrice = calculateOriginalPrice(finalPrice);

    if (originalPrice == -1) {
        cout << "Invalid input." << endl;
    } else {
        cout << "Original Price: " << originalPrice << endl;   // output is 230 - 15% i.e 200
    }

    return 0;
}