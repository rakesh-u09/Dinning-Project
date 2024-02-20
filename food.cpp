#include "food.h"
Food::Food(string name,int calories,string taste)
{
    m_name = name;
    m_calories = calories;
    m_taste = taste;
}

void Food::addIngredient(const Ingredients &ingredient)
{
    m_ingredients.push_back(ingredient);
}

string Food::getName() const
{
    return m_name;
}

int Food::getCalories() const
{
    return m_calories;
}

string Food::getTaste() const
{
    return m_taste;
}

void Food::displayIngredients()
{
    cout<<"Ingredients: "<<endl;
    for( Ingredients& ingredient :m_ingredients){
        cout<< "-"<< ingredient.getName() <<": "<< ingredient.getQuantity()<<" grams/ml"<<endl;
    }
}
