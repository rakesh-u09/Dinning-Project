#include "hand.h"

Hand::Hand() {
    m_fingers.push_back(new Fingers("Thumb", 3.5)); // Default length is 3.5 inches
    m_fingers.push_back(new Fingers("Index Finger", 3.0));
    m_fingers.push_back(new Fingers("Middle Finger", 3.0));
    m_fingers.push_back(new Fingers("Ring Finger", 2.75));
    m_fingers.push_back(new Fingers("Pinky", 2.5));
}

Hand::~Hand()
{
    for (Fingers* finger : m_fingers) {
        delete finger;
    }
    m_fingers.clear();
}
void Hand::displayFingers() const
{
    cout<<"Displaying the fingers.."<<endl;
    for(const auto& finger : m_fingers){
        cout<<finger->getName()<<":"<<finger->getLength()<<" inches."<<endl;
    }
}

void Hand::graspFood()
{
    cout<<"Fingers are grasping the food."<<endl;
    for(const auto& finger : m_fingers){
        finger->graspFood();
    }
}

void Hand::releaseFood()
{
    cout<<"Fingers are releasing the food."<<endl;
    for(const auto& finger : m_fingers){
        finger->releaseFood();
    }
}

void Hand::addFingers(Fingers* finger)
{
    if(!finger){
        cout<< endl <<"Fingers objects should not be null" << endl;
    }
    else{
        m_fingers.push_back(finger);
    }

}

void Hand::grabFood(const string &food) const
{
    cout<<"Hand is grabbing "<< food<<"."<<endl;
}
