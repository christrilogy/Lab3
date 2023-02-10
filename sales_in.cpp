// This program will bring in two prices and two quantities of items 
// from the keyboard and print those numbers in a formatted chart. 
//Christian Morgan

#include <iostream> 
#include <iomanip>         // Fill in the code to bring in the library
using namespace std;       // formatted output. 


int main() 
{ 

  cout << "Suny Orange Fruit Co." << endl;
  cout << "Sales Invoice" << endl;

  char item; 
  double unit_price, tax, subtotal;
  int quantity;
  int total;

  cout << "Please enter the item and the quantity" << endl;
    cin >> item >> quantity;
  
  cout << "Please enter unit price" << endl;
    cin >> unit_price;

  cout << setw(15) << "ITEM" << setw(12) << "QUANTITY \t" << setw(9) << "UNIT_PRICE \t" << setw(6) << "TAX\t" << setw(3) << "SUBTOTAL\t" << "TOTAL\n\n"; 
  
  tax = 0.1 * unit_price * quantity;

  subtotal =  unit_price + quantity;

  total= subtotal + tax;
  
  cout << setw(13) << item << setw(12) << quantity << setw(9) << unit_price << setw(10) << tax << setw(10) << subtotal << setw(10) << total; 
  
  
  return 0;
  }
