#ifndef DATASTRUCTURE_H_
#define DATASTRUCTURE_H_

#include <stdint.h>


struct values{
    unsigned long long t[10];
    short p;
    uint8_t trailingNum[10];
};

extern void fillTimeArray(values *ValuesElement, unsigned long long timeValue, short p);

#endif