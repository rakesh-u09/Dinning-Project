#include "food.h"
Food::Food(string name,int calories)
{
    m_name = name;
    m_calories = calories;
}

Food::~Food()
{
    for (Ingredients* ingredient : m_ingredients) {
        delete ingredient;
    }
}

bool Food::addIngredient(Ingredients* ingredient)
{
    if(!ingredient){
        cout<<"can't add null pointer to Ingredient to food"<< endl << endl;
        return false;
    }
    else{
        m_ingredients.push_back(ingredient);
        return true;
    }
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
    for (const auto& ingredient : m_ingredients) {
        cout << "Name: " << ingredient->getName() << ", Quantity: " << ingredient->getQuantity()<<" grams/ml" << endl;
    }
}
