#include "FoodContainer.h"

FoodContainer::FoodContainer() {}

FoodContainer::~FoodContainer()
{
    for (auto& pair : m_foods) {
        delete pair.first;
    }
}

void FoodContainer::addFood(const Food* food,int quantity)
{
    m_foods.insert(make_pair(food, quantity));
    // m_foods[&food] += quantity;
    cout<<"Adding "<<quantity <<" "<< food->getName() <<"to the container."<<endl;
}

bool FoodContainer::isEmpty() const
{
    return m_foods.empty();

}
bool FoodContainer::checkFood(const string& foodName) {
    for (auto& pair : m_foods) {
        if (pair.first->getName() == foodName && pair.second > 0) {
            cout << "Taking " << pair.first->getName() << " from the container." << endl;
            pair.second--;
            return true;
        }
    }

    cout << "Not enough " << foodName << " in the container." << endl;
    return false;
}

// bool FoodContainer::checkFood(const Food &food) {
//     auto iterator = m_foods.find(&food);
//     if (iterator != m_foods.end() && iterator->second > 0) {
//         cout << "Taking " << food.getName() << " from the container." << endl;
//         iterator->second--;
//         return true;
//     } else {
//         // Check if iterator points to a valid entry
//         if (iterator != m_foods.end()) {
//             cout << "Not enough " << food.getName() << " in the container." << endl;
//         } else {
//             // Handle case where food is not found in the container
//             cout << "Food not found in the container." << endl;
//         }
//         return false;
//     }
// }


// bool FoodContainer::checkFood(const Food &food)
// {
//     auto iterator = m_foods.find(&food);
//     if(iterator != m_foods.end() && iterator->second > 0){
//         cout<<"Taking "<<food.getName() <<" from the container "<<endl;
//         iterator->second--;
//         return true;
//     }else {
//         cout << "Not enough " << food.getName() << " in the container." << endl;
//         return false;
//     }
// }

void FoodContainer::displayFoods() const
{
    cout<<"Food in the container: "<<endl;
    for(const auto& food : m_foods){
        cout << food.first->getName() << "  " << food.second<<endl;
    }
}
