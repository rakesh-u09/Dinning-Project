#include "hand.h"

Hand::Hand() {}

void Hand::displayFingers() const
{
    cout<<"Displaying the fingers.."<<endl;
    for(const Fingers& finger :m_fingers){
        cout<<finger.getName()<<":"<<finger.getLength()<<" inches."<<endl;
    }
}

void Hand::graspFood()
{
    cout<<"Fingers are grasping the food."<<endl;
    for(Fingers& finger :m_fingers){
        finger.graspFood();
    }
}

void Hand::releaseFood()
{
    cout<<"Fingers are releasing the food."<<endl;
    for(Fingers& finger :m_fingers){
        finger.releaseFood();
    }
}

void Hand::addFingers(const Fingers &finger)
{
    m_fingers.push_back(finger);
}

void Hand::grabFood(const string &food) const
{
    cout<<"Hand is grabbing "<< food<<"."<<endl;
}
