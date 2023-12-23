#include <GL/freeglut.h>
#include <stdio.h>

void myDisplay()
{
    // Clear the viewport
    glClear( GL_COLOR_BUFFER_BIT 
        | GL_DEPTH_BUFFER_BIT );

    // OpenGL draw calls here
    

    // Swap buffers
    glutSwapBuffers(); // for double buffering (rendering next frame)
}

void myKeyboard(
    unsigned char key,
    int x, int y )
{
    // Handle keyboard input here (ASCII)
    switch ( key ) {
        case 'a':
            // do something
        case 27: // ESC
            glutLeaveMainLoop();
            break;
    }
    glutPostRedisplay();
}

void myKeyboard2(
    int key,
    int x, int y )
{
    // Handle keyboard input here (int)
}

void myMouse(
    int button, int state, 
    int x, int y )
{
    // Handle mouse buttons here
}

void myMouseMotion(
    int x, int y )
{
    // Handle mouse motion here
    // while a button is down
}

void myMousePassive(
    int x, int y )
{
    // Handle mouse motion here
    // while a button is not down
}

void myReshape( 
    int x, int y )
{
    // Do what you want
    // when window size changes
}

void myIdle()
{
    // Handle animations here

    // // Example Animation
    // glClearColor(red, 0, 0, 0);
    // red += 0.02;

    // Tell GLUT to redraw
    glutPostRedisplay();

    // Get time since last idle
    // glutGet(GLUT_ELAPSED_TIME);
}

int main(int argc, char** argv)
{
    // Initializations

    // Initialize GLUT
    glutInit(&argc, argv);

    // Create a window
    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(200, 100);
    glutInitDisplayMode(
        GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH ); // Note use of double buffer
    glutCreateWindow("Project 01");

    
    glutDisplayFunc(myDisplay); // Register display callback function
    glutKeyboardFunc(myKeyboard); // Register ASCII key callback function
    glutSpecialFunc(myKeyboard2); // Register INT key callback function
    glutMouseFunc(myMouse); // Register mouse button callback function
    glutMotionFunc(myMouseMotion); // Register mouse motion
    glutPassiveMotionFunc(myMousePassive); // Register "passive" mouse motion
    glutReshapeFunc(myReshape); // Register window reshape callback
    glutIdleFunc(myIdle); // Register idle callback function

    // OpenGL Initializations
    
    // Set the background color 
    glClearColor(0, 0, 0, 0);

    // Create buffers
    // Create textures
    // Compile Shaders

    // Other Initializations

    // Call Main Loop
    glutMainLoop();

    // Exit when main loop is done
    return 0;
}