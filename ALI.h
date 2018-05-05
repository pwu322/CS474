#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <fstream>
using namespace std;

class ALI{

    public:
   // ALI(){ PC = 0; Ra = 0; Rb = 0; ZeroBit = 0; OverflowBit = 0;}
    int PC;
    int Ra, Rb;
    int ZeroBit, OverflowBit;
    string MyMemory[256];
   ALI& execute(int i);
    private:
};