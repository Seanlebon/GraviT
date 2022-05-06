//
// Created by sean on 2022-05-06.
//
#include "window.h"
namespace graviT{ namespace graphics{
    Window::Window(const char *name, int width, int height) {
        m_Height = height;
        m_Width = width;
        m_Name = name;
        if(!init()){
            glfwTerminate();
        };
    };
    bool Window::init() {
        if(!glfwInit()){
            std::cout << "Failed to initialize GLFW" << std::endl;
            return false;
        }

        m_Window = glfwCreateWindow(m_Width, m_Height, m_Name, NULL, NULL);
        if(!m_Window){
            glfwTerminate();
            std::cout << "failed to create GLFW window" << std::endl;
            return false;
        }
        glfwMakeContextCurrent(m_Window);
        return true;

    }
    bool Window::closed() const {
        return glfwWindowShouldClose(m_Window);
    }
    void Window::update() const {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }
    Window::~Window() {
        glfwTerminate();
    }
}}

