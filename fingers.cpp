#include "fingers.h"

// Fingers::Fingers() {}

Fingers::Fingers(std::string fingerName, double len)
    : m_name(std::move(fingerName)), m_length(len), m_isGrasping(false) {
}

bool Fingers::isGraspingFood() const
{
    return m_isGrasping;
}

void Fingers::graspFood()
{
    m_isGrasping = true;
}

void Fingers::releaseFood()
{
    m_isGrasping = false;
}

name Fingers::getName() const
{
    return m_name;
}

fingerLength Fingers::getLength() const
{
    return m_length;
}
