#include <iostream>
#include "glass.h"
#include "FoodContainer.h"
#include "Person.h"
#include "ingredients.h"
#include "glass.h"
#include "Tooth.h"
#include "Tongue.h"
#include "DiningTable.h"

using namespace std;
typedef string name;

FoodContainer* foodContainer =  new FoodContainer();

void prepareFood();
Food* prepareRice();
Food* prepareSambar();
Food* prepareSalad();
Food* prepareLemonRice();
Person* createPersonObject(name);
Tongue* createTongueObject();
Mouth* createMouthObject();
Hand* createHandObject();
vector<Tooth*> createToothObjects();
void addPlatesToTrack();
void displayMenu();

int main()
{   
    prepareFood();
    Person* person = createPersonObject("Rakesh");

    // person->displayFingers();
    // person->displayTooths();

    // foodContainer->displayFoods();
    // foodContainer->checkFood("Rice");
    // foodContainer->displayFoods();

    Plate* plate = new Plate();
    Glass* glass = new Glass(5,"water");

    DiningTable diningTable;
    // diningTable.sitInTable(person);
    // diningTable.takePlate(plate);
    // diningTable.takeGlass(glass);
    // diningTable.takeFoodContainer(foodContainer);

    // diningTable.displaAllFoodsInContainer();


    // diningTable.addFoodToPlate("Sambar");
    // diningTable.addFoodToPlate("Rice");

    // diningTable.displayAllFoodInPlate();

    // diningTable.displaAllFoodsInContainer();

    // diningTable.drinkWater(5);

    // diningTable.eatFoodsFromPlate("Sambar");
    // diningTable.eatFoodsFromPlate("Sambar");
    // diningTable.displayAllFoodInPlate();
    // diningTable.takePlate(plate);
    int choice;
    string foodName;
    double waterAmount;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            diningTable.sitInTable(person);
            break;
        case 2:
            diningTable.takePlate(plate);
            break;
        case 3:
            diningTable.takeFoodContainer(foodContainer);
            break;
        case 4:
            diningTable.takeGlass(glass);
            break;
        case 5:
            cout << "Enter food name: ";
            cin.ignore();
            getline(cin,foodName);
            diningTable.addFoodToPlate(foodName);
            break;
        case 6:
            cout << "Enter amount of water to drink: ";
            cin.ignore();
            cin >> waterAmount;
            diningTable.drinkWater(waterAmount);
            break;
        case 7:
            diningTable.displayAllFoodInPlate();
            break;
        case 8:
            cout << "Enter food name to eat: ";
            cin.ignore();
            getline(cin,foodName);
            diningTable.eatFoodsFromPlate(foodName);
            break;
        case 9:
            diningTable.displaAllFoodsInContainer();
            break;
        case 10:
            cout << "Enter amount of water to fill: ";
            cin.ignore();
            cin >> waterAmount;
            diningTable.fillGlass(waterAmount);
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);


}



void prepareFood(){
    vector<Food*> riceContainer;
    vector<Food*> sambarContainer;
    vector<Food*> saladContainer;
    vector<Food*> lemonRiceContainer;

    for(int i=0;i<50;i++){
        riceContainer.push_back(prepareRice());
        sambarContainer.push_back(prepareSambar());
        saladContainer.push_back(prepareSalad());
        lemonRiceContainer.push_back(prepareLemonRice());
    }
    foodContainer->addFood("Rice",riceContainer);
    foodContainer->addFood("Sambar",sambarContainer);
    foodContainer->addFood("Salad",saladContainer);
    foodContainer->addFood("Lemon Rice",lemonRiceContainer);

    // foodContainer.addFood(prepareSambar(),56);
    // foodContainer.addFood(prepareSalad(),54);
    // foodContainer.addFood(prepareLemonRice(),80);
}
Food* prepareRice(){
    Ingredients* riceIngredient = new Ingredients("rice",250);
    Ingredients* saltIngredient = new Ingredients("salt",25);
    Food* rice= new Food("Rice",25);
    rice->addIngredient(riceIngredient);
    rice->addIngredient(saltIngredient);
    return rice;
}
Food* prepareSambar(){
    Ingredients* oil = new Ingredients("Oil",250);
    Ingredients* vegetables = new Ingredients("Vegetables",50);
    Ingredients* sambarPowder = new Ingredients("SambarPowder",55);
    Ingredients* chilliPowder = new Ingredients("chilliPowder",40);
    Food* sambar = new Food("Sambar",50);
    sambar->addIngredient(oil);
    sambar->addIngredient(vegetables);
    sambar->addIngredient(sambarPowder);
    sambar->addIngredient(chilliPowder);
    return sambar;
}
Food* prepareSalad(){
    Ingredients* onion= new Ingredients("Onion",2);
    Ingredients* tomoto= new Ingredients("Tomoto",4);
    Ingredients* cucumber= new Ingredients("Cucumber",4);
    Food* salad = new Food("Salad",45);
    salad->addIngredient(onion);
    salad->addIngredient(tomoto);
    salad->addIngredient(cucumber);
    return salad;
}
Food* prepareLemonRice(){
    Ingredients* rice = new Ingredients("Rice",250);
    Ingredients* lemon = new Ingredients("Lemon",3);
    Food* lemonRice =new Food("Lemonn Rice ",450);
    lemonRice->addIngredient(rice);
    lemonRice->addIngredient(lemon);
    return lemonRice;
}
Person* createPersonObject(string name){
    Person* person =  new Person(name);
    person->setHand(createHandObject());
    person->setMouth(createMouthObject());
    return person;
}
vector<Tooth*> createToothObjects(){
    vector<Tooth*> teeth;
    teeth.push_back(new Tooth("White", "Incisor", 1));
    teeth.push_back(new Tooth("White", "Canine", 2));
    teeth.push_back(new Tooth("White", "Premolar", 3));
    teeth.push_back(new Tooth("White", "Molar", 2));
    return teeth;
}
Tongue* createTongueObject(){
    return new Tongue(1);}
Mouth* createMouthObject(){
    Mouth* mouth = new Mouth();
    mouth->setTooths(createToothObjects());
    mouth->setTongue(createTongueObject());
    return mouth;
}
Hand* createHandObject(){
    return new Hand();
}
void displayMenu() {
    cout << "1. Sit in table" << endl;
    cout << "2. Take plate" << endl;
    cout << "3. Take food container" << endl;
    cout << "4. Take glass" << endl;
    cout << "5. Add food to plate" << endl;
    cout << "6. Drink water" << endl;
    cout << "7. Display all food in plate" << endl;
    cout << "8. Eat food from plate" << endl;
    cout << "9. Display all foods in container" << endl;
    cout << "10. Fill Glass"<< endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}
