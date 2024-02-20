#ifndef INGREDIENTS_H
#define INGREDIENTS_H
#include "string"
using namespace std;
typedef string name;
typedef double quantity;
class Ingredients
{
private:
    string m_name;
    double m_quantity;

public:
    Ingredients(name,quantity);
    name getName();
    quantity getQuantity();
};

#endif // INGREDIENTS_H
