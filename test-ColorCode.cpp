#include <gtest/gtest.h>
#include <iostream>
#include <assert.h>
#include "ColorCode.h"

void testNumberToPair(int pairNumber,
    TeliComWireColorCode::MajorColor expectedMajor,
    TeliComWireColorCode::MinorColor expectedMinor)
{
    TeliComWireColorCode::ColorPair colorPair =
        TeliComWireColorCode::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TeliComWireColorCode::MajorColor major,
    TeliComWireColorCode::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TeliComWireColorCode::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

TEST(ColorPair, NumberToPair_WhiteBrown) {
    testNumberToPair(4, TeliComWireColorCode::WHITE, TeliComWireColorCode::BROWN);
}

TEST(ColorPair, NumberToPair_WhiteSlate) {
    testNumberToPair(5, TeliComWireColorCode::WHITE, TeliComWireColorCode::SLATE);
}

TEST(ColorPair, PairToNumber_BlackOrange) {
    testPairToNumber(TeliComWireColorCode::BLACK, TeliComWireColorCode::ORANGE, 12);
}

TEST(ColorPair, PairToNumber_VioletSlate) {
    testPairToNumber(TeliComWireColorCode::VIOLET, TeliComWireColorCode::SLATE, 25);
}
