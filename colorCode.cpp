#include "colorCode.h"
#include <iostream>

namespace TeliComWireColorCode
{
    const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair::ColorPair(MajorColor major, MinorColor minor) :
        majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() { return majorColor; }
    MinorColor ColorPair::getMinor() { return minorColor; }

    std::string ColorPair::ToString() {
        return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void printNumberToPair(int pairNumber)
    {
        TeliComWireColorCode::ColorPair colorPair =
            TeliComWireColorCode::GetColorFromPairNumber(pairNumber);
        std::cout << "Color pair: " << colorPair.ToString() << std::endl;
    }
    void printPairToNumber(MajorColor major, MinorColor minor)
    {
        int pairNumber = TeliComWireColorCode::GetPairNumberFromColor(major, minor);
        std::cout << "pair number: " << pairNumber << std::endl;
    }
}
