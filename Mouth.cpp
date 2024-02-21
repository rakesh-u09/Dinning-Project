#include "Mouth.h"

Mouth::Mouth() {
}

void Mouth::chewFood(const string &food) const
{
    cout<<"Mouth is chewing "<< food <<"."<<endl;
}

void Mouth::drinkWater(const string &liquid) const
{
    cout<<"Mouth is drinking "<<liquid <<" from the glass."<<endl;
}

void Mouth::setTooths(const vector<Tooth*>& teeth)
{
    m_tooths = teeth;
}

void Mouth::setTongue( Tongue* tongue)
{
    m_tongue = tongue;
}

void Mouth::displayTooths() const
{   cout << "List of teeth:" << endl;
    for (const auto& tooth : m_tooths) {
        tooth->displayTooths();
    }

}

