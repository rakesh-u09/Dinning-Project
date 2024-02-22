#include "DiningTable.h"

DiningTable::DiningTable() {
    m_plate = nullptr;
    m_person = nullptr;
    m_foodContainer = nullptr;
    m_glass = nullptr;
}

DiningTable::~DiningTable()
{
    delete m_plate;
    delete m_glass;
}

bool DiningTable::takePlate(Plate* plate )
{
    if(!m_plate){
        m_plate = plate;
        cout<< endl << "Plate taken." <<endl << endl;
        return true;
    }
    else{
        cout<< endl<<"Plate already taken...."<<endl<< endl;
        return false;
    }
}

bool DiningTable::sitInTable(Person *person)
{
    if(!m_person){
        m_person = person;
        cout<< endl <<person->getName() << " Sit on the Dining table .." << endl << endl;
        return true;
    }
    else{
        cout<< endl << "Peson already in dining table.. "<< endl << endl;
        return false;
    }
}

bool DiningTable::takeGlass(Glass *glass)
{
    if(!m_glass){
        m_glass = glass;
        cout<< endl << "Glass taken."<< endl << endl;
        return true;
    }
    else{
        cout<< endl<<"Glass already taken. "<< endl<< endl;
        return false;
    }
}

bool DiningTable::takeFoodContainer(FoodContainer *foodContainer)
{
    if(!m_foodContainer){
        m_foodContainer = foodContainer;
        cout<<endl << "Food container taken." << endl<< endl;
        return true;
    }
    else{
         cout<< endl << "Food container already taken." << endl;
        return false;
    }

}

bool DiningTable::addFoodToPlate(const string & foodName)
{
    if (!m_person || !m_plate || !m_foodContainer) {
        cout<< endl << "Error: Unable to eat food. Missing person, plate, or food container." << endl;
        return false;
    }
    if(m_foodContainer->checkFood(foodName)){
        m_plate->addFood(m_foodContainer->takeFood(foodName));
        return true;
    }
    return false;
}

bool DiningTable::drinkWater(double amountOfWater)
{
    if (!m_glass) {
        cout <<endl<< "Error:  glass is not taken yet." << endl << endl;
        return false;
    }
    if(m_glass->discharge(amountOfWater)){
        m_person->drinkWater(m_glass->getContent());
        return true;
    }
    return false;
}

bool DiningTable::displayAllFoodInPlate() const
{
    if (!m_plate) {
        cout <<endl<< "Error:plate is not taken yet." << endl << endl;
        return false;
    }
    else{
        m_plate->displaAllFoods();
        return true;
    }
}

bool DiningTable::eatFoodsFromPlate(const string& foodName)
{
    if (!m_person || !m_plate || !m_foodContainer) {
        cout<< endl << "Error: Unable to eat food. Missing person, plate, or food container." << endl << endl;
        return false;
    }
    if (m_plate->isEmpty()) {
        cout << "The plate is empty." << endl;
        return false;
    }
    Food* food = m_plate->takeFood(foodName);

    if (!food) {
        cout << "Food \"" << foodName << "\" not found in the plate" << endl;
        return false;
    }
    m_person->graspFood();
    m_person->grabFood(food->getName());
    m_person->releaseFood();
    m_person->chewFood(food->getName());
    cout << "The person eats " << food->getName() << "." << endl;
    // Delete the food pointer
    delete food;
    return true;

}

bool DiningTable::displaAllFoodsInContainer() const
{
    if (!m_foodContainer) {
        cout <<endl<< "Error:food container is not taken yet." << endl << endl;
        return false;
    }
    if(!m_foodContainer->isEmpty()){
        m_foodContainer->displayFoods();
        return true;
    }
    else {
        return false;
    }

}

bool DiningTable::fillGlass(double amountOfWater)
{
    if (!m_glass) {
        cout <<endl<< "Error:  glass is not taken yet." << endl << endl;
        return false;
    }
    else {
        m_glass->fill(amountOfWater);
        return true;
    }

}
