#ifndef HAND_H
#define HAND_H
#include "fingers.h"
#include "vector"
#include "string"
#include "iostream"
using namespace std;

class Hand
{
public:
    Hand();
    void displayFingers() const;
    void graspFood();
    void releaseFood();
    void addFingers(Fingers*);
    void grabFood(const string& food) const;
private:
    vector<Fingers*> m_fingers;
};

#endif // HAND_H
