#include "SeaCreature.h"

// Constructor Implementation
SeaCreature::SeaCreature(std::string creatureName, int creatureAge)
    : name(creatureName), age(creatureAge) {}

// Swim Implementation
Swim::Swim(std::string creatureName, int creatureAge)
    : SeaCreature(creatureName, creatureAge) {}

void Swim::move() {
    std::cout << name << " is swimming." << std::endl;
}

// Crawl Implementation
Crawl::Crawl(std::string creatureName, int creatureAge)
    : SeaCreature(creatureName, creatureAge) {}

void Crawl::move() {
    std::cout << name << " is crawling." << std::endl;
}

// Action Implementations
void BlowBubble::act() {
    std::cout << "Blowing bubbles!" << std::endl;
}

void PuffUp::act() {
    std::cout << "Puffing up!" << std::endl;
}

// Resource Implementations
void Pearl::collect() {
    std::cout << "Collecting a pearl." << std::endl;
}

void Shell::collect() {
    std::cout << "Collecting a shell." << std::endl;
}
