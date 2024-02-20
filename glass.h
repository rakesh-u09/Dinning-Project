#ifndef GLASS_H
#define GLASS_H
#include "string"
#include "iostream"
using namespace std;
typedef string content;
typedef double volume,amount;
class Glass
{
public:
    Glass(volume);
    void fill(const string& liquid);
    void discharge(amount);
    volume getVolume();
private:
    string m_content;
    double m_volume;

};

#endif // GLASS_H
