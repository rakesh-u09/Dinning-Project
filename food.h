#ifndef FOOD_H
#define FOOD_H
#include "string"
#include "vector"
#include "ingredients.h"
#include "iostream"
typedef string name;
typedef int calories;
using namespace std;

class Food
{    
public:
    Food(name,calories);
    ~Food();
    bool addIngredient( Ingredients* ingredient);
    string getName() const;
    int getCalories() const;
    void displayIngredients();
private:
    string m_name;
    int m_calories;

    vector<Ingredients*> m_ingredients;
};
#endif // FOOD_H
