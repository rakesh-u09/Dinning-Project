#include "FoodContainer.h"

FoodContainer::FoodContainer() {}

FoodContainer::~FoodContainer()
{
    for (const auto& pair : m_foods) {
        for (Food* food : pair.second) {
            delete food;
        }
    }
}
void FoodContainer::addFood(const string& foodName, vector<Food*>& foods) {
    m_foods.insert(make_pair(foodName, foods));
}


bool FoodContainer::isEmpty() const
{
    return m_foods.empty();

}

bool FoodContainer::checkFood(const string& foodName) {
    for (auto& pair : m_foods) {
        if (pair.first == foodName && !pair.second.empty()) {
            cout <<foodName << "is present in the food container." << endl;
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

void FoodContainer::displayFoods() const {
    if(!isEmpty()){
        for (const auto& pair : m_foods) {
            cout << "Food: " << pair.first << ", Quantity: " << pair.second.size() << endl;
        }
    }
    else{
        cout<<"Food container is empty ..."<< endl;
    }

}

Food* FoodContainer::takeFood(const string & foodName)
{

    auto itrtator = m_foods.find(foodName);
    if (itrtator != m_foods.end() && !itrtator->second.empty()) {
        // Retrieve the last food in the vector
        Food* lastFood = itrtator->second.back();
        // Remove the last food from the vector
        itrtator->second.pop_back();
        // Return the last food
        return lastFood;
    } else {
        return nullptr; // Return nullptr if the food name is not found or the vector is empty
    }
}

