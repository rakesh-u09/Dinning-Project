#ifndef FINGERS_H
#define FINGERS_H
#include "string"
using namespace std;
typedef string name;
typedef double fingerLength;
class Fingers
{
public:
    Fingers(std::string fingerName, double len);
    bool isGraspingFood() const;
    void graspFood();
    void releaseFood();
    name getName() const;
    fingerLength getLength() const;


private:
    string m_name;
    double m_length;
    bool m_isGrasping;
};

#endif // FINGERS_H
