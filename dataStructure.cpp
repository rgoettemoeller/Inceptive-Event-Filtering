#include "dataStructure.h"
#include "inputCameraData_generated.h"

using namespace std;
using namespace Camera::Data;

void fillTimeArray(values *ValuesElement, unsigned long long timeValue, short p)
{
    for(int i = 0; i < sizeof(ValuesElement->t); i++)
    {
        if(ValuesElement->t[i] == 0)
        {
            ValuesElement->t[i] = timeValue;
            ValuesElement->p = ((ValuesElement->p) << 1) | p;
            break;
        }
    }
}

void convertOriginalData(const flatbuffers::Vector<const Camera::Data::dataPoint*>* importDataVector, dataPoint *exportedData)
{
            for(int i = 0; i < importDataVector->size(); i++){
        exportedData[i] = dataPoint(importDataVector->Get(i)->x(), importDataVector->Get(i)->y(), importDataVector->Get(i)->time(), importDataVector->Get(i)->polarity());
    }
}