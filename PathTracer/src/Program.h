#pragma once

#include <GL/glew.h>
#include <Shader.h>

// standard C++ libraries
#include <vector>

namespace GLSLPathTracer
{
    class Program
    {
    private:
        GLuint _object;
    public:
        Program(const std::vector<Shader> shaders);
        void use();
        void stopUsing();
        GLuint object();
    };
}
