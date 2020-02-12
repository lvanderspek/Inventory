#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/* The inventory class is used to keep track of a product. You may sell that
 * product, or print the product. The class keeps track of the name, price, and
 * quantity of the item.
 */
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    int  get_stock();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
