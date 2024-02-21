#include "glass.h"

Glass::Glass(double volume,string content)
{
    m_volume = volume;
    m_content = content;
}

void Glass::fill(const string &liquid)
{
    m_content = liquid;
    cout<<"Filling the glass with "<<liquid<<"."<<endl;
}

void Glass::discharge(double amount)
{
    if(m_volume>= amount){
        m_volume -= amount;
        cout << "Drinking " << amount << " ounces from the glass." << endl;
    }
    else {
        cout << "Not enough liquid in the glass." << endl;
    }
}

double Glass::getVolume()
{
    return m_volume;
}
