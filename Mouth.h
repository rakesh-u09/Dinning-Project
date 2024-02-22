#ifndef MOUTH_H
#define MOUTH_H

#include "vector"
#include "Tooth.h"
#include "Tongue.h"


class Mouth
{
public:
    Mouth();
    ~Mouth();
    void chewFood(const string& food) const;
    void drinkWater(const string& liquid) const;
    void setTooths(const vector<Tooth*>&);
    void setTongue(Tongue*);
    void displayTooths() const;
private:
    Tongue* m_tongue;
    vector<Tooth*> m_tooths;

};

#endif // MOUTH_H
