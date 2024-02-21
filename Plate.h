#ifndef PLATE_H
#define PLATE_H
#include "vector"
#include "food.h"
#include "Size.h"

// typedef Size size;

class Plate
{
public:
    Plate(Size);
    void addFood(const Food&);
    void displaAllFoods() const;
    bool isEmpty() const;

private:
    Size m_size;
    vector<Food> m_foodItems;

};

#endif // PLATE_H
