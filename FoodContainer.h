#ifndef FOODCONTAINER_H
#define FOODCONTAINER_H
#include "food.h"
#include "map"
typedef int foodQuantity;

class FoodContainer
{
public:
    FoodContainer();
    ~FoodContainer();
    void addFood(const Food*,foodQuantity);
    bool isEmpty() const;
    bool checkFood(const string&);
    void displayFoods() const;
private:
    map<const Food*,foodQuantity> m_foods;
};

#endif // FOODCONTAINER_H
