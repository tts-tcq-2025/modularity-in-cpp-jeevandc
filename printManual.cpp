#include <iostream>
#include "colorCode.h"
#include "printManual.h"

namespace TeliComWireColorCode 
{
    void printColorCodeManual() {
        std::cout << "Pair No.  | Major Color | Minor Color\n";
        std::cout << "--------------------------------------\n";
        int pairNumber = 1;
        for (int major = 0; major < TeliComWireColorCode::numberOfMajorColors; major++) {
            for (int minor = 0; minor < TeliComWireColorCode::numberOfMinorColors; minor++) {
                std::cout << pairNumber << "\t  | "
                    << TeliComWireColorCode::MajorColorNames[major] << "   | "
                    << TeliComWireColorCode::MinorColorNames[minor] << "\n";
                pairNumber++;
            }
        }
    }
}
