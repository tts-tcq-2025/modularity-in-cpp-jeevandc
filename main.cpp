#include "ColorCode.h"

int main() {
    TeliComWireColorCode::printNumberToPair(4);
    TeliComWireColorCode::printNumberToPair(5);

    TeliComWireColorCode::printPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE);
    TeliComWireColorCode::printPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE);

    return 0;
}
