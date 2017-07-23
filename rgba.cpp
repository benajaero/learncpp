#include <iostream>
#include "rgba.h"

RGBA::RGBA() : m_red(0), m_blue(0), m_green(0), m_alpha(255)
        {}
RGBA::RGBA(int red, int blue, int green, int alpha)
            : m_red(red), m_blue(blue), m_green(green), m_alpha(alpha)
        {}
void RGBA::print() {
            std::cout << "Red: " << m_red << ", Blue: " << m_blue << ", Green: " << m_green << ", Alpha: " << m_alpha;
        }


