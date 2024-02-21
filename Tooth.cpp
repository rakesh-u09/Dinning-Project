#include "Tooth.h"

Tooth::Tooth() {}

Tooth::Tooth(string color,string name,int length)
{
    m_color = color;
    m_name = name;
    m_length = length;
}

void Tooth::displayTooths() const
{
    cout << "Tooth: " << m_name << ", Color: " << m_color << ", Length: " << m_length << endl;
}
