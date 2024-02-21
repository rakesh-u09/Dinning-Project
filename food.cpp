#include "food.h"
Food::Food(string name,int calories)
{
    m_name = name;
    m_calories = calories;
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


void Food::displayIngredients()
{
    cout<<"Ingredients: "<<endl;
    for( Ingredients& ingredient :m_ingredients){
        cout<< "-"<< ingredient.getName() <<": "<< ingredient.getQuantity()<<" grams/ml"<<endl;
    }
}
