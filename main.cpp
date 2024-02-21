#include <iostream>
#include "glass.h"
#include "FoodContainer.h"
#include "Person.h"
#include "ingredients.h"
#include "glass.h"
#include "Tooth.h"
#include "Tongue.h"

using namespace std;
typedef string name;

FoodContainer foodContainer;
void prepareFood();
Food* prepareRice();
Food* prepareSambar();
Food* prepareSalad();
Food* prepareLemonRice();
Person createPersonObject(name);
Tongue createTongueObject();
Mouth createMouthObject();
Hand createHandObject();

vector<Tooth> createToothObjects();


int main()
{   
    prepareFood();
    Person person = createPersonObject("Rakesh");

    person.displayFingers();
    person.displayTooths();

    foodContainer.displayFoods();


    // foodContainer.displayFoods();
    // Glass waterGlass(45,"water");
    // waterGlass.discharge(25);
    // waterGlass.getVolume();
}
void prepareFood(){
    foodContainer.addFood(*prepareRice(),50);
    foodContainer.addFood(*prepareSambar(),56);
    foodContainer.addFood(*prepareSalad(),54);
    foodContainer.addFood(*prepareLemonRice(),80);
}
Food* prepareRice(){
    Ingredients riceIngredient("rice",250);
    Ingredients saltIngredient("salt",25);
    Food* rice= new Food("Rice",25);
    rice->addIngredient(riceIngredient);
    rice->addIngredient(saltIngredient);
    return rice;
}
Food* prepareSambar(){
    Ingredients oil("Oil",250);
    Ingredients vegetables("Vegetables",50);
    Ingredients sambarPowder("SambarPowder",55);
    Ingredients chilliPowder("chilliPowder",40);
    Food* sambar = new Food("Sambar",50);
    sambar->addIngredient(oil);
    sambar->addIngredient(vegetables);
    sambar->addIngredient(sambarPowder);
    sambar->addIngredient(chilliPowder);
    return sambar;
}
Food* prepareSalad(){
    Ingredients onion("Onion",2);
    Ingredients tomoto("Tomoto",4);
    Ingredients cucumber("Cucumber",4);
    Food* salad = new Food("Salad",45);
    salad->addIngredient(onion);
    salad->addIngredient(tomoto);
    salad->addIngredient(cucumber);
    return salad;
}

Food* prepareLemonRice(){
    Ingredients rice("Rice",250);
    Ingredients lemon("Lemon",3);
    Food* lemonRice =new Food("Lemonn Rice ",450);
    lemonRice->addIngredient(rice);
    lemonRice->addIngredient(lemon);
    return lemonRice;
}
Person createPersonObject(string name){
    Person person(name);
    person.setHand(createHandObject());
    person.setMouth(createMouthObject());
    return person;
}
vector<Tooth> createToothObjects(){
    vector<Tooth> teeth;
    teeth.push_back(Tooth("White", "Incisor", 1));
    teeth.push_back(Tooth("White", "Canine", 2));
    teeth.push_back(Tooth("White", "Premolar", 3));
    teeth.push_back(Tooth("White", "Molar", 2));
    return teeth;
}
Tongue createTongueObject(){
    Tongue tongue;
    return tongue;
}

Mouth createMouthObject(){
    Mouth mouth;
    mouth.setTooths(createToothObjects());
    mouth.setTongue(createTongueObject());
    return mouth;
}

Hand createHandObject(){
    Hand hand;
    return hand;
}
