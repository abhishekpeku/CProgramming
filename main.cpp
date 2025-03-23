#include "SeaCreature.h"

int main() {
    Swim fish("Goldfish", 2);
    fish.move();

    Crawl crab("Hermit Crab", 3);
    crab.move();

    BlowBubble bubbleAction;
    bubbleAction.act();

    Pearl pearl;
    pearl.collect();

    return 0;
}
