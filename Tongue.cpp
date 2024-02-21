#include "Tongue.h"

Tongue::Tongue() {}

Tongue::Tongue(int length)
{
    m_length = length;
}

void Tongue::tasteFood(const string &food) const
{
    cout << "Tasting " << food << " with the tongue." << endl;
}
