#ifndef DATASTRUCTURE_H_
#define DATASTRUCTURE_H_

#include <stdint.h>
#include "inputCameraData_generated.h"

using namespace std;
using namespace Camera::Data;


struct values{
    unsigned long long t[10];
    short p;
    uint8_t trailingNum[10];
};

extern void fillTimeArray(values *ValuesElement, unsigned long long timeValue, short p);

extern void convertOriginalData(const flatbuffers::Vector<const Camera::Data::dataPoint*>* importDataVector, dataPoint *exportedData);

#endif