#ifndef TOOTH_H
#define TOOTH_H
#include "string"
#include "iostream"
using namespace std;
typedef string color,name;
typedef int length;

class Tooth
{
public:
    Tooth();
    Tooth(color,name,length);
    void displayTooths() const;

private:
    int m_length;
    string m_color;
    string m_name;

};

#endif // TOOTH_H
