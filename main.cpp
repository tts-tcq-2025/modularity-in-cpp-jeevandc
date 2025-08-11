#include "ColorCode.h"
#include "printManual.h"

int main() {
    TeliComWireColorCode::printNumberToPair(4);
    TeliComWireColorCode::printNumberToPair(5);

    TeliComWireColorCode::printPairToNumber(TeliComWireColorCode::BLACK, TeliComWireColorCode::ORANGE);
    TeliComWireColorCode::printPairToNumber(TeliComWireColorCode::VIOLET, TeliComWireColorCode::SLATE);
    
    TeliComWireColorCode::printColorCodeManual();
    
    return 0;
}
