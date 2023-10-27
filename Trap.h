#ifndef TRAP_H
#define TRAP_H 

#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
   private:
      bool status = true;
   public:
   Trap(int x, int y) : Cell(x, y, '') {}

    void apply(Cell& entity) override {
        status = false;
    }
};

#endif