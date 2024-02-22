#include "glass.h"

Glass::Glass(double volume,string content)
{
    m_volume = volume;
    m_content = content;
}

void Glass::fill(double amountOfLiquid)
{
    m_volume = amountOfLiquid;
    cout<<"Filling the glass "<<endl;
}

bool Glass::discharge(double amount)
{
    if(m_volume>= amount){
        m_volume -= amount;
        cout << "Drinking " << amount << " ounces from the glass." << endl;
        return true;
    }
    else {
        cout << "Not enough liquid in the glass." << endl;
        return false;
    }
}

string Glass::getContent()
{
    return m_content;
}

double Glass::getVolume()
{
    return m_volume;
}
