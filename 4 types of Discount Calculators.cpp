#include <iostream>
using namespace std;

class Calculate {
public:
    // Percentage-based discount
    void calculateDiscount(int price, int discountPercent) {
        if (price > 200000) {
            cout << "Limit Exceeded\n";
            return;
        }
        cout << "Price Before " << discountPercent << "% Discount: " << price << " Rs\n";
        int discount = price * discountPercent / 100;
        cout << "Price After " << discountPercent << "% Discount: " << price - discount << " Rs\n";
        cout << "You Saved: " << discount << " Rs\n";
    }

    // Fixed product discount
    void calculateDiscount() {
        int choice;
        cout << "Choose Your Product:\n";
        cout << "1. Rice : 5000 Rs/Kg (Discount 20%)\n";
        cout << "2. Sugar : 1200 Rs/Kg (Discount 10%)\n";
        cout << "3. Wheat : 1900 Rs/Kg (Discount 13%)\n";
        cout << "4. Barley : 1500 Rs/Kg (Discount 16%)\n";
        cin >> choice;

        switch (choice) {                //Switch Case to Select the customer requirment
        case 1:
            cout << "Rice Discounted Price: " << 5000 - (5000 * 20 / 100) << " Rs/Kg\n";
            cout << "You Saved: " << 5000 * 20 / 100 << " Rs/Kg\n";
            break;

        case 2:
            cout << "Sugar Discounted Price: " << 1200 - (1200 * 10 / 100) << " Rs/Kg\n";
            cout << "You Saved: " << 1200 * 10 / 100 << " Rs/Kg\n";
            break;

        case 3:
            cout << "Wheat Discounted Price: " << 1900 - (1900 * 13 / 100) << " Rs/Kg\n";
            cout << "You Saved: " << 1900 * 13 / 100 << " Rs/Kg\n";
            break;

        case 4:
            cout << "Barley Discounted Price: " << 1500 - (1500 * 16 / 100) << " Rs/Kg\n";
            cout << "You Saved: " << 1500 * 16 / 100 << " Rs/Kg\n";
            break;

        default:
            cout << "Select a valid item.\n";
        }
    }

    // Membership-level discount
    void calculateDiscount(float totalPrice, string membership) {
        cout << "Total Price: " << totalPrice << " Rs\n";
        float discount = 0;

        if (membership == "Gold") {
            discount = totalPrice * 20 / 100;
        }
        else if (membership == "Silver") {
            discount = totalPrice * 10 / 100;
        }
        else {
            cout << "No valid membership discount available.\n";
            return;
        }

        cout << membership << " Membership Discount: " << discount << " Rs\n";
        cout << "Price After Discount: " << totalPrice - discount << " Rs\n";
    }

    // Bulk discount based on quantity
    void calculateDiscount(int price, int quantity, int bulkThreshold, int bulkDiscountPercent) {
        if (quantity >= bulkThreshold) {
            int discount = price * bulkDiscountPercent / 100;
            cout << "Bulk Discounted Price: " << price - discount << " Rs per unit\n";
            cout << "You Saved: " << discount * quantity << " Rs in total for " << quantity << " items\n";
        }
        else {
            cout << "No bulk discount applied. Total Price: " << price * quantity << " Rs\n";
        }
    }
    /*How this Bulk Discount Method Works :

    Example
        Suppose:

        The price of a single product is 1000 Rs.
        The customer buys 15 products.
        The minimum bulk discount threshold is set to 10 products.
        So if customer buys greater than 10 products the bulk discount will be applied.
        So now the bulk discount percentage is 15 % .
        discount=(1000×15)/100 = 150 Rs Per product discount
        So the Discounted Price=1000−150=850 Rs  Per product
        So the Total Savings=150×15=2250 Rs for 15 products


​


        */
};

int main() {
    Calculate ob;
    int choice;

    cout << "Check Discounts Based On Your Criteria\n";
    cout << "1. Calculate Percentage-Based Discounts\n";
    cout << "2. Calculate Discounts on Fixed Products\n";
    cout << "3. Calculate Membership-Level Discounts\n";
    cout << "4. Calculate Bulk Discounts\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        int price, discountPercent;
        cout << "Enter Product Price: ";
        cin >> price;
        cout << "Enter Discount Percentage: ";
        cin >> discountPercent;
        ob.calculateDiscount(price, discountPercent);
        break;
    }
    case 2:
        ob.calculateDiscount();
        break;

    case 3: {
        float price;
        string membership;
        cout << "Enter Total Price: ";
        cin >> price;
        cout << "Enter Membership Level (Gold/Silver): ";
        cin >> membership;
        ob.calculateDiscount(price, membership);
        break;
    }
    case 4: {
        int price, quantity, threshold = 10, discountPercent = 15;
        cout << "Enter Product Price per Unit: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
        ob.calculateDiscount(price, quantity, threshold, discountPercent);
        break;
    }
    default:
        cout << "Invalid choice.\n";
    }
}
