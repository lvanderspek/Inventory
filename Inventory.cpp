#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
  
/* constructor for the Inventory class. Simply initializes the name, price, and
 * initial count of the product.
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/* records a sale of the product. Simply decreases the stock of the prdouct.
 */
void Inventory::sell()
{
  m_in_stock--;
}

/* returns the quantity of the product.
 */
int Inventory::get_stock()
{
    return m_in_stock;
}

/* prints the product as "<name> $<price>"
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
