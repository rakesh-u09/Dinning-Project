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
            cout<<endl <<foodName << "is present in the food container." << endl;
            return true;
        }
    }
    cout<< endl<< "Not enough " << foodName << " in the container." << endl;
    return false;
}



void FoodContainer::displayFoods() const {
    if(!isEmpty()){
        cout<<endl<<"\tFood\t\t\t\tQuantity"<<endl;
        for (const auto& pair : m_foods) {
            cout<<"\t"<< pair.first <<"\t\t\t\t" << pair.second.size() << endl;
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
        Food* lastFood = itrtator->second.back();
        itrtator->second.pop_back();
        return lastFood;
    } else {
        return nullptr;
    }
}

