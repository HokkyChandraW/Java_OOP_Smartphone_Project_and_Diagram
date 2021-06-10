#include <GL/glut.h>

/* Initialize OpenGL Graphics */
void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClearDepth(1.0f);                   // Set background depth to farthest
    glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH); //smooth transition between colours
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

/* Handler for window-repaint event. Called back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
    glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix
    
    // Render a color-cube consisting of 6 quads with different colors
    glLoadIdentity();                 // Reset the model-view matrix
    glTranslatef(1.5f, 0.0f, -7.0f);  // Move right and into the screen
    
    glBegin(GL_QUADS);                // Begin drawing the blue coloured cube
        // Top face (y = 1.0f)
        // Define vertices in counter-clockwise (CCW) order
        glColor3f(0.0f, 0.0f, 1.0f);     // blue
        glVertex3f(1.0f, 1.0f, -1.0f);
        glVertex3f(-1.0f, 1.0f, -1.0f);
        glVertex3f(-1.0f, 1.0f,  1.0f);
        glVertex3f(1.0f, 1.0f,  1.0f);
    
        // Bottom face (y = -1.0f)
        glColor3f(0.0f, 0.0f, 1.0f);     //blue
        glVertex3f(1.0f, -1.0f,  1.0f);
        glVertex3f(-1.0f, -1.0f,  1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);
    
        // Front face  (z = 1.0f)
        glColor3f(0.0f, 0.0f, 1.0f);     //blue
        glVertex3f(1.0f,  1.0f, 1.0f);
        glVertex3f(-1.0f,  1.0f, 1.0f);
        glVertex3f(-1.0f, -1.0f, 1.0f);
        glVertex3f(1.0f, -1.0f, 1.0f);
    
        // Back face (z = -1.0f)
        glColor3f(0.0f, 0.0f, 1.0f);     //blue
        glVertex3f(1.0f, -1.0f, -1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);
        glVertex3f(-1.0f,  1.0f, -1.0f);
        glVertex3f(1.0f,  1.0f, -1.0f);
    
        // Left face (x = -1.0f) //blue
        glColor3f(0.0f, 0.0f, 1.0f);     
        glVertex3f(-1.0f,  1.0f,  1.0f); //blue
        glVertex3f(-1.0f,  1.0f, -1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);
        glVertex3f(-1.0f, -1.0f,  1.0f);
    
        // Right face (x = 1.0f) //blue
        glColor3f(0.0f, 0.0f, 1.0f);     
        glVertex3f(1.0f,  1.0f, -1.0f); //blue
        glVertex3f(1.0f,  1.0f,  1.0f);
        glVertex3f(1.0f, -1.0f,  1.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);
    glEnd();  // End of drawing blue cube. 
    
    // Render a pyramid consists of 4 triangles
    glLoadIdentity();                  // Reset the model-view matrix
    glTranslatef(-1.5f, 0.0f, -6.0f);  // Move left and into the screen

    // glTranslatef(-0.5f, 0.5f, 0.0f);
    // glRotatef(180.0f, 0.0f, 0.0f, 1.0f);
    // glScalef(0.5f, 0.5f, 0.0f);
    // glScalef(1.5f, 1.5f, 0.0f);
    
    glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
        // Front
        glColor3f(1.0f, 0.0f, 0.0f);     // Red
        glVertex3f(0.0f, 1.0f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);     // Green
        glVertex3f(-1.0f, -1.0f, 1.0f);
        glColor3f(0.0f, 0.0f, 1.0f);     // Blue
        glVertex3f(1.0f, -1.0f, 1.0f);
    
        // Right
        glColor3f(1.0f, 0.0f, 0.0f);     // Red
        glVertex3f(0.0f, 1.0f, 0.0f);
        glColor3f(0.0f, 0.0f, 1.0f);     // Blue
        glVertex3f(1.0f, -1.0f, 1.0f);
        glColor3f(0.0f, 1.0f, 0.0f);     // Green
        glVertex3f(1.0f, -1.0f, -1.0f);
    
        // Back
        glColor3f(1.0f, 0.0f, 0.0f);     // Red
        glVertex3f(0.0f, 1.0f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);     // Green
        glVertex3f(1.0f, -1.0f, -1.0f);
        glColor3f(0.0f, 0.0f, 1.0f);     // Blue
        glVertex3f(-1.0f, -1.0f, -1.0f);
    
        // Left
        glColor3f(1.0f,0.0f,0.0f);       // Red
        glVertex3f(0.0f, 1.0f, 0.0f);
        glColor3f(0.0f,0.0f,1.0f);       // Blue
        glVertex3f(-1.0f,-1.0f,-1.0f);
        glColor3f(0.0f,1.0f,0.0f);       // Green
        glVertex3f(-1.0f,-1.0f, 1.0f);
    glEnd();   // Done drawing the pyramid
    
    glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
}
 
/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
    // Compute aspect ratio of the new window
    if (height == 0) height = 1;                // To prevent divide by 0
    GLfloat aspect = (GLfloat)width / (GLfloat)height;
    
    // Set the viewport to cover the new window
    glViewport(0, 0, width, height);
    
    glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
    glLoadIdentity();             // Reset

    // Enable perspective projection
    gluPerspective(45.0f, aspect, 0.1f, 100.0f);
    // if (width >= height) {
    //     // aspect >= 1, set the height from -1 to 1, with larger width
    //     glOrtho(-3.0 * aspect, 3.0 * aspect, -3.0, 3.0, 0.1, 100);
    // } else {
    //     // aspect < 1, set the width to -1 to 1, with larger height
    //     glOrtho(-3.0, 3.0, -3.0 / aspect, 3.0 / aspect, 0.1, 100);
    // }
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
    glutInitWindowSize(640, 480);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutCreateWindow("3D - Hokky Chandra Wiguna"); // Create window with the given title
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    glutReshapeFunc(reshape);       // Register callback handler for window re-size event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the infinite event-processing loop
    return 0;
}