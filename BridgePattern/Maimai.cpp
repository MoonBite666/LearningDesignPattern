#include "Note.h"
#include "Pattern.h"

int main() {
    auto pattren1 = new PatternBreak();
    auto tap = new NoteTap(pattren1);
    tap->printSelf();

    auto pattern2 = new PatternPink();
    auto slide = new NoteSlide(pattern2);
    slide->setDuration(4);
    slide->printSelf();


    return 0;
}




#if 0
#include "Shape.h"

int main() {
    auto pattern1 = new PatternPink();
    auto shape1 = new ShapeTap();
    auto note1 = new Note(pattern1,shape1);

    note1->printSelf();
    return 0;
}
#endif