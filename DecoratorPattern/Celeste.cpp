#include "Madeline.h"
#include "Eevee.h"
#include "Badeline.h"
#include "Core.h"

int main() {
    Madeline madeline;
    madeline.dash();
    Eevee eevee;
    eevee.dash();
    eevee.dash();

    Badeline madeline1(madeline);
    madeline1.dash();
    madeline1.dash();
    Badeline eevee1(eevee);
    eevee1.dash();
    eevee1.dash();
    eevee1.groundCharge();

    Core madeline2(madeline);
    madeline2.dash();
    madeline2.dash();
    madeline2.groundCharge();
    madeline2.dash();

    return 0;
}
