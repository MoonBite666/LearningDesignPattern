#include "GWindow.h"
#include "GHLayout.h"
#include "GVLayout.h"
#include "GLable.h"

int main() {
    auto mainwindow = new GWindow(nullptr);
    mainwindow->setName("Software");
    auto layout1 = new GHLayout(mainwindow);
    auto lable1 = new GLable(layout1, "Hello ");
    auto lable2 = new GLable(layout1, "C++ Composite Pattern!");
    layout1->add(lable1);
    layout1->add(lable2);

    auto layout2 = new GVLayout(mainwindow);
    auto lable3 = new GLable(layout2, "MoonFeather");
    auto lable4 = new GLable(layout2, "2024.8.25");
    layout2->add(lable3);
    layout2->add(lable4);

    mainwindow->add(layout1);
    mainwindow->add(layout2);
    mainwindow->render();

    delete mainwindow;


    return 0;
}
