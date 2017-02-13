#ifndef TRIANGLEWINDOW_H
#define TRIANGLEWINDOW_H

#include "openglwindow.h"
#include <QtGui/QOpenGLShaderProgram>

//Geometry:
// An array of 3 vectors which represents 3 vertices
static const GLfloat g_vertex_buffer_data[] = {
   -1.0f, -1.0f, 0.0f,
   1.0f, -1.0f, 0.0f,
   0.0f,  1.0f, 0.0f,
};

class TriangleWindow : public OpenGLWindow
{
public:
    TriangleWindow();
    ~TriangleWindow();

    void initialize();
    void render();

private:

    GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);

    // This will identify our vertex buffer
    GLuint vertexbuffer;

    //The shader program
    GLuint programID;
};

#endif // TRIANGLEWINDOW_H
