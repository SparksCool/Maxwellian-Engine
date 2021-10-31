#pragma once
#include <GLFW/glfw3.h>
#ifndef CONTROLS_HPP
#define CONTROLS_HPP


void computeViewport(GLFWwindow* window);
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();

#endif