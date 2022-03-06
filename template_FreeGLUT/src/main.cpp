#include <GL/freeglut.h>

void init(){
    glClearColor(1,1,1,0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,200,0,150);


}
void lineSegment(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_LINES);
        glVertex2i(180,15);
        glVertex2i(10,145);
    glEnd();

    glFlush();
    
}

int main(int argc, char** argv){
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(50,100);
    glutInitWindowSize(400,300) ;

    glutCreateWindow("olaaaaaa");
    
    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();
    //getchar();
    return 0;
}