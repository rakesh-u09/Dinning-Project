#include "Plate.h"


Plate::Plate()
{

}

// Size Plate::displaySize()
// {
//     return m_size;
// }

void Plate::addFood(Food* food)
{
    m_foodItems.push_back(food);
    cout<<"Adding "<< food->getName() <<" to the plate."<<endl;
}

void Plate::displaAllFoods() const
{
    cout<<"Plate contents: "<<endl;
    for (const auto& food : m_foodItems) {
        cout << food->getName() << endl;
    }
}

bool Plate::isEmpty() const
{
    return m_foodItems.empty();
}
