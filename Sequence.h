#include <iostream>
#include <stdio.h>
#include <cstring>
#ifndef SEQUENCE_H
#define SEQUENCE_H

class Sequence
{
public:
    Sequence(const char*);
    int length();
    int numberOf(char);
    std::string longestConsecutive();
    std::string longestRepeated();
    std::string getdna();
private:
    int maxid;
    std::string dna;
    std::string maxc;
    std::string maxr;
    const char* filename;
};
#endif
