#include "Plate.h"


Plate::Plate(Size size)
{
    m_size = size;
}

void Plate::addFood(const Food& food)
{
    m_foodItems.push_back(food);
    cout<<"Adding "<< food.getName() <<" to the plate."<<endl;
}

void Plate::displaAllFoods() const
{
    cout<<"Plate contents: "<<endl;
    for(const Food& food :m_foodItems){
        cout<<"- " << food.getName() << endl;
    }
}

bool Plate::isEmpty() const
{
    return m_foodItems.empty();
}
