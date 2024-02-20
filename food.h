#ifndef FOOD_H
#define FOOD_H
#include "string"
#include "vector"
#include "ingredients.h"
#include "iostream"
typedef string name,taste;
typedef int calories;
using namespace std;

class Food
{    
public:
    Food(name,calories,taste);
    void addIngredient(const Ingredients& ingredient);
    string getName() const;
    int getCalories() const;
    string getTaste() const;
    void displayIngredients();
private:
    string m_name;
    int m_calories;
    string m_taste;
    vector<Ingredients> m_ingredients;
};
#endif // FOOD_H
