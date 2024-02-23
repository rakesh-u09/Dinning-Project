#include "Mouth.h"

Mouth::Mouth() {
}

Mouth::~Mouth()
{
    delete m_tongue;

    for (Tooth* tooth : m_tooths) {
        delete tooth;
    }
    m_tooths.clear();


}

void Mouth::chewFood(const string &food) const
{
    cout << endl<< endl<<"Mouth is chewing "<< food <<"."<<endl<< endl;
}

void Mouth::drinkWater(const string &liquid) const
{
    cout<< endl <<"Mouth is drinking "<<liquid <<" from the glass."<< endl <<endl;
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

void Mouth::tasteFood(const string &food) const
{
    m_tongue->tasteFood(food);
}

