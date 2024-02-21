#ifndef TONGUE_H
#define TONGUE_H
#include "string"
typedef int length;
#include "iostream"
using namespace std;

class Tongue
{
public:
    Tongue();
    Tongue(length);
    void tasteFood(const string& food) const;

private:
    int m_length;

};

#endif // TONGUE_H
