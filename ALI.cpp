#include "ALI.h"
#include <iostream>


/*
ALI::ALI()
:PC(0),Ra(0),Rb(0),ZeroBit(0),OverflowBit(0)
{} */

ALI& ALI::execute(int i){

    this->PC = i+1;
    return* this;

}
