
class ALI{

    public:
    ALI(){ PC = 0; Ra = 0; Rb = 0; ZeroBit = 0; OverflowBit = 0;}
    uint8_t PC;
    uint32_t Ra, Rb;
    int ZeroBit, OverflowBit;
    std::string MyMemory[256];
    void foobar(char*);
    private:
};