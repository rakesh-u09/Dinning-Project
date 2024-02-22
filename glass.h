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
    Glass(volume,content);
    void fill(amount);
    bool discharge(amount);
    string getContent();
    volume getVolume();
private:
    string m_content;
    double m_volume;

};

#endif // GLASS_H
