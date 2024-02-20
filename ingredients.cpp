#include "ingredients.h"

Ingredients::Ingredients(string name,double quantity)
{
    m_name = name;
    m_quantity =quantity;
}

string Ingredients::getName()
{
    return m_name;
}

double Ingredients::getQuantity()
{
    return m_quantity;
}
