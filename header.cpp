#ifndef SEACREATURE_H
#define SEACREATURE_H

#include <iostream>
#include <vector>

// Base class for all sea creatures
class SeaCreature {
protected:
    std::string name;
    int age;

public:
    SeaCreature(std::string creatureName, int creatureAge);
    virtual void move() = 0; // Pure virtual function
    virtual void act() = 0;  // Pure virtual function
    virtual ~SeaCreature() {}
};

// Derived classes for different types of locomotion
class Swim : public SeaCreature {
public:
    Swim(std::string creatureName, int creatureAge);
    void move() override;
};

class Crawl : public SeaCreature {
public:
    Crawl(std::string creatureName, int creatureAge);
    void move() override;
};

// Actions a sea creature can perform
class Actions {
public:
    virtual void act() = 0; // Pure virtual function
    virtual ~Actions() {}
};

class BlowBubble : public Actions {
public:
    void act() override;
};

class PuffUp : public Actions {
public:
    void act() override;
};

// Resources collected by sea creatures
class Resource {
public:
    virtual void collect() = 0;
    virtual ~Resource() {}
};

class Pearl : public Resource {
public:
    void collect() override;
};

class Shell : public Resource {
public:
    void collect() override;
};

#endif // SEACREATURE_H
