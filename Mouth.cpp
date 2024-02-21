#include "Mouth.h"

Mouth::Mouth() {
    for (int i = 0; i < 32; ++i) {
        m_tooths.push_back(Tooth("white","Molar",2));
    }
    m_tongue = Tongue(2);
}

void Mouth::chewFood(const string &food) const
{
    cout<<"Mouth is chewing "<< food <<"."<<endl;
}

void Mouth::drinkWater(const string &liquid) const
{
    cout<<"Mouth is drinking "<<liquid <<" from the glass."<<endl;
}

void Mouth::setTooths(const vector<Tooth> tooths)
{
    m_tooths = tooths;
}

void Mouth::setTongue(const Tongue tongue)
{
    m_tongue = tongue;
}

void Mouth::displayTooths() const
{   cout << "List of teeth:" << endl;
    for (const Tooth& tooth : m_tooths) {
        tooth.displayTooths();
    }

}

