#ifndef PERSON_H
#define PERSON_H
#include "string"
#include "Mouth.h"
#include "hand.h"
#include "Plate.h"
#include "Size.h"

typedef string personName;
class Person
{
public:
    Person(personName);
    ~Person();
    void setHand(Hand*);
    void setMouth(Mouth*);
    Hand* getHand();
    Mouth* getMouth();
    void graspFood();
    void grabFood(const string& food) const;
    void displayFingers() const;
    void displayTooths() const;
    void chewFood(const string& food) const;
    void drinkWater(const string& liquid);
    void releaseFood();
    string getName() const;

private:
    string m_name;
    Hand* m_hand;
    Mouth* m_mouth;
    // Plate* m_plate;
};

#endif // PERSON_H
