#ifndef PLATE_H
#define PLATE_H
#include "vector"
#include "food.h"
#include "Size.h"

// typedef Size size;

class Plate
{
public:
    Plate();
    ~Plate();
    bool addFood(Food*);
    void displaAllFoods() const;
    Food* takeFood(const string&);
    bool isEmpty() const;

private:
    vector<Food*> m_foodItems;
};

#endif // PLATE_H
