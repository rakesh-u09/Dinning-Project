#include "Person.h"

Person::Person(string name) {
    m_name = name;
}

Person::~Person()
{
    delete m_hand;
    delete m_mouth;
}

bool Person::setHand(Hand* hand)
{
    if(hand){
        m_hand = hand;
        return true;
    }
    else{
        return false;
    }

}

void Person::setMouth(Mouth* mouth)
{
    m_mouth = mouth;
}

Hand* Person::getHand()
{
    return m_hand;
}

Mouth* Person::getMouth()
{
    return m_mouth;
}

void Person::graspFood()
{
    m_hand->graspFood();
}

void Person::grabFood(const string &food) const
{
    m_hand->grabFood(food);

}

void Person::displayFingers() const
{
    m_hand->displayFingers();
}

void Person::displayTooths() const
{
    m_mouth->displayTooths();

}

void Person::chewFood(const string &food) const
{
    m_mouth->chewFood(food);
}

void Person::drinkWater(const string &liquid)
{
    m_mouth->drinkWater(liquid);
}

void Person::releaseFood()
{
    m_hand->releaseFood();
}

void Person::tasteFood(const string &food) const
{
    m_mouth->tasteFood(food);
}

string Person::getName() const
{
    return m_name;
}


