//
// Created by sean on 2022-05-06.
//
#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

namespace graviT{ namespace graphics{
    class Window {
    private:
        const char *m_Name;
        int m_Width, m_Height;
        GLFWwindow* m_Window;
        bool m_Closed;
    public:
        Window(const char *name, int width, int height);
        ~Window();
        void update() const;
        bool closed() const;
    private:
        bool init();
    };
} }

