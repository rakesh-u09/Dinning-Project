#ifndef FOODCONTAINER_H
#define FOODCONTAINER_H
#include "food.h"
#include "map"
typedef int foodQuantity;

class FoodContainer
{
public:
    FoodContainer();
    void addFood(const Food&,foodQuantity);
    bool isEmpty() const;
    bool takeFood(const Food&);
    void displayFoods() const;
private:
    map<const Food*,foodQuantity> m_foods;
};

#endif // FOODCONTAINER_H
