#include "FoodContainer.h"

FoodContainer::FoodContainer() {}

void FoodContainer::addFood(const Food& food,int quantity)
{
    m_foods[&food] += quantity;
    cout<<"Adding "<<quantity <<" "<< food.getName() <<"to the container."<<endl;
}

bool FoodContainer::isEmpty() const
{
    return m_foods.empty();
}

bool FoodContainer::takeFood(const Food &food)
{
    auto iterator = m_foods.find(&food);
    if(iterator != m_foods.end() && iterator->second > 0){
        cout<<"Taking "<<food.getName() <<" from the container "<<endl;
        iterator->second--;
        return true;
    }else {
        cout << "Not enough " << food.getName() << " in the container." << endl;
        return false;
    }
}

void FoodContainer::displayFoods() const
{
    cout<<"Food in the container: "<<endl;
    for(const auto& food : m_foods){
        cout << food.first->getName() << "  " << food.second<<endl;
    }
}
