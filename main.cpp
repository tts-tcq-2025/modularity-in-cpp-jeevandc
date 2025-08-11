#include "ColorCode.h"
#include "printManual.h"

int main() {

    TeliComWireColorCode::printColorCodeManual();
    
    TeliComWireColorCode::printNumberToPair(4);
    TeliComWireColorCode::printNumberToPair(5);
    TeliComWireColorCode::printPairToNumber(TeliComWireColorCode::BLACK, TeliComWireColorCode::ORANGE);
    TeliComWireColorCode::printPairToNumber(TeliComWireColorCode::VIOLET, TeliComWireColorCode::SLATE);
    
    return 0;
}
