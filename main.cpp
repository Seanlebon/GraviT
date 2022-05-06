//
// Created by sean on 2022-05-06.
//
#include <GLFW/glfw3.h>
#include <iostream>

#include "src/graphics/window.h"

int main(){
    using namespace graviT;
    using namespace graphics;

    Window window("graviT", 800, 600);

    while(!window.closed()){
        window.update();
    }
    system("PAUSE");
    return 0;
}