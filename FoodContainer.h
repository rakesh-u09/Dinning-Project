#ifndef FOODCONTAINER_H
#define FOODCONTAINER_H
#include "food.h"
#include "map"
typedef int foodQuantity;
typedef string foodName;

class FoodContainer
{
public:
    FoodContainer();
    ~FoodContainer();
    void addFood(const string& foodName,vector<Food*>& foods);
    bool isEmpty() const;
    bool checkFood(const string&);
    void displayFoods() const;
    Food* takeFood(const string&);
private:
    map<foodName, vector<Food*>> m_foods;
};

#endif // FOODCONTAINER_H
