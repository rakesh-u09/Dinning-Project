#ifndef PERSON_H
#define PERSON_H
#include "string"
#include "Mouth.h"
#include "hand.h"
typedef string personName;
class Person
{
public:
    Person(personName);
    void setHand(Hand);
    void setMouth(Mouth);
    Hand getHand();
    Mouth getMouth();
    void graspFood();
    void grabFood(const string& food) const;
    void displayFingers() const;
    void displayTooths() const;


private:
    string m_name;
    Hand m_hand;
    Mouth m_mouth;
};

#endif // PERSON_H
