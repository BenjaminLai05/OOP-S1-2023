#ifndef EFFECT_H
#define EFFECT_H

#include <tuple>

class Effect {
   private: 
   
   public:
   virtual void apply(Cell& cell) = 0;

};

#endif