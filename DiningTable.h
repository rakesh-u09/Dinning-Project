#ifndef DININGTABLE_H
#define DININGTABLE_H
#include "FoodContainer.h"
#include "Person.h"
#include "glass.h"
#include "Plate.h"
#include "thread"
typedef double amountOfWater;
class DiningTable
{
public:
    DiningTable();
    ~DiningTable();
    bool takePlate(Plate*);
    bool sitOnTable(Person*);
    bool takeGlass(Glass*);
    bool takeFoodContainer(FoodContainer*);
    bool addFoodToPlate(const string&);
    bool drinkWater(amountOfWater);
    bool displayAllFoodInPlate() const;
    bool eatFoodsFromPlate(const string& foodName);
    bool displaAllFoodsInContainer() const;
    bool fillGlass(amountOfWater);

private:
    Person* m_person;
    FoodContainer* m_foodContainer;
    Glass* m_glass;
    Plate* m_plate;
};

#endif // DININGTABLE_H
