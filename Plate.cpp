#include "Plate.h"


Plate::Plate()
{

}

Plate::~Plate()
{
    for (Food* food : m_foodItems) {
        delete food;
    }
    m_foodItems.clear();
}

bool Plate::addFood(Food* food)
{
    if(food){
        m_foodItems.push_back(food);
        cout<< endl<<"Adding "<< food->getName() <<" to the plate."<<endl<<endl;
        return true;
    }
    return false;
}

void Plate::displaAllFoods() const
{
    if (m_foodItems.empty()) {
        cout<< endl << "The plate is empty." <<endl<< endl;
        return;
    }
    cout<<"Foods in plate: "<<endl;
    for (const auto& food : m_foodItems) {
        cout<< endl<<"\t" << food->getName() << endl;
    }
}

Food *Plate::takeFood(const string& foodName)
{
    for (auto iterator = m_foodItems.begin(); iterator != m_foodItems.end(); ++iterator) {
        if ((*iterator)->getName() == foodName) {
            Food* food = *iterator;
            m_foodItems.erase(iterator);
            return food;
        }
    }
    return nullptr;
}

bool Plate::isEmpty() const
{
    return m_foodItems.empty();
}
