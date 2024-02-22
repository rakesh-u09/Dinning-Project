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
        cout<<"Adding "<< food->getName() <<" to the plate."<<endl;
        return true;
    }
    return false;
}

void Plate::displaAllFoods() const
{
    if (m_foodItems.empty()) {
        cout << "The plate is empty." << endl;
        return;
    }
    cout<<"Plate contents: "<<endl;
    for (const auto& food : m_foodItems) {
        cout << food->getName() << endl;
    }
}

Food *Plate::takeFood(const string& foodName)
{
    for (auto it = m_foodItems.begin(); it != m_foodItems.end(); ++it) {
        // Check if the current food item has the specified name
        if ((*it)->getName() == foodName) {
            // If found, get the food item
            Food* food = *it;
            // Remove the food item from the plate
            m_foodItems.erase(it);
            // Return the removed food item
            return food;
        }
    }
    // If the specified food item is not found in the plate, return nullptr
    return nullptr;
}

bool Plate::isEmpty() const
{
    return m_foodItems.empty();
}
