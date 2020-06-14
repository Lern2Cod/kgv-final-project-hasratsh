#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>

static GLfloat spin = 0.0;
float angle = 0;

using namespace std;

GLint stencilBits;
static int sumbux = -70;
static int sumbuy = 80;
static int sumbuz = -98;

float r = 0;

void kursi(){
	glRotated(-90, 0.0, 1.0, 0.0);
	glPushMatrix();
	glScaled(1.5, 0.5, 5);
	glTranslatef(1, -17, 0);
	glColor3f(0.8, 0.2, 0.2);
	glutSolidCube(5.0);
    glPopMatrix();

	glRotated(-90, 0.0, 1.0, 0.0);
	glPushMatrix();
	glScaled(5, 1.5, 0.5);
	glTranslatef(0, -4, -11);
	glColor3f(0.8, 0.2, 0.2);
	glutSolidCube(5.0);
    glPopMatrix();

	glRotated(-90, 0.0, 1.0, 0.0);
	glPushMatrix();
	glScaled(2, 1, 0.5);
	glTranslatef(-0.8, -7, 25);
	glColor3f(0.8, 0.2, 0.2);
	glutSolidCube(5.0);
    glPopMatrix();

    glPushMatrix();
	glScaled(2, 1, 0.5);
	glTranslatef(-0.8, -7, -25);
	glColor3f(0.8, 0.2, 0.2);
	glutSolidCube(5.0);
    glPopMatrix();

	glPushMatrix();
	glScaled(1, 0.1, 4);
	glTranslatef(-1, -70, 0);
	glColor3f(0.8, 0.2, 0.2);
	glutSolidCube(5.0);
    glPopMatrix();
}

void meja(void){
    glPushMatrix();
    glTranslatef(0.0,-5.0,0.0);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(6.0,0.4,8.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.5,-6,3.5);
    glScalef(1.0,2.0,1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.5,-6,3.5);
    glScalef(1.0,2.0,1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.5,-6,-3.5);
    glScalef(1.0,2.0,1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.5,-6,-3.5);
    glScalef(1.0,2.0,1.0);
    glutSolidCube(1.0);
    glPopMatrix();
}

void rumah(void) {
	//dinding belakang
	glPushMatrix();
	glScaled(0.035, 0.5, 1.6);
	glTranslatef(-76, 2.5, 0.37);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glColor3f(1, 0.8, 0.7);
	glutSolidCube(5.0);
	glPopMatrix();
	
	//Dinding samping
	glPushMatrix();
	glScaled(1.1, 0.5, 0.039);
	glTranslatef(0, 2.5, 115.5);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glColor3f(1, 0.8, 0.7);
	glutSolidCube(5.0);
	glPopMatrix();

	//Lantai
	glPushMatrix();
	glScaled(1.1, 0.03, 1.6);
	glTranslatef(0, 0, 0.37);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glColor3f(0.8, 0.8, 0.8);
	glutSolidCube(5.0);
	glPopMatrix();
	

	//pintu
	glPushMatrix();
	glRotated(-90, 0.0, 2.0, 0);
	glScaled(0.2, 0.35, 0.05);
	glTranslatef(-12, 2.5, 53);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glColor3f(0.2, 0.3, 0.5);
	glutSolidCube(5.0);
	glPopMatrix();
	
	//les
	glPushMatrix();
	glRotated(-90, 0.0, 2.0, 0);
	glScaled(0.05, 0.5, 0.05);
	glTranslatef(-24, 2.5, 53);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glColor3f(1, 0.7, 0.4);
	glutSolidCube(5.0);
	glPopMatrix();
}

void lemari(){
	glPushMatrix();
	glScaled(3, 2.5, 0.8);
	glTranslatef(3, 7, 76);
	glColor3f(0.3, 0.6, 0.1);
	glutSolidCube(5.0);
	glPushMatrix();
	glTranslatef(-5.055, 0, 0);
	glColor3f(0.3, 0.6, 0.1);
	glutSolidCube(5.0);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glScaled(0.2, 0.75, 1);
	glTranslatef(0, 20, 61);
	glColor3f(0, 0, 0);
	glutSolidCube(5.0);
	glPopMatrix();

	glPushMatrix();
	glScaled(0.2, 0.75, 1);
	glTranslatef(15, 20, 61);
	glColor3f(0, 0, 0);
	glutSolidCube(5.0);
	glPopMatrix();
}

void tv(){
	glPushMatrix();
	glScaled(4, 2, 0.3);
	glTranslatef(0, 8, 20);
	glColor3ub(0, 180, 255);
	glutSolidCube(5.0);
	glPopMatrix();
	glPopMatrix();
}
void bingkaitv(){
	glPushMatrix();
	glScaled(4.5, 2.4, 0.3);
	glTranslatef(0, 6.7, 20);
	glColor3f(0, 0, 0);
	glutSolidCube(5.0);
	glPopMatrix();
	glPopMatrix();
}

void display(void) {
	glClearStencil(0);
	glClearDepth(1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT); 
	glLoadIdentity();
	gluLookAt(sumbux, sumbuy, sumbuz, 0, 0, 5, 0, 1,0);

	glPushMatrix();
	glTranslatef(0,0,0);
	glScalef(15, 15, 15);
	rumah(); 
	glPopMatrix();
		
	glPushMatrix();
	glTranslatef(0,-10,3);
	lemari();
	glPopMatrix();
		
	glPushMatrix();
	glTranslatef(1, 5, 60);
	bingkaitv();
	glPopMatrix();
		
	glPushMatrix();
	glTranslatef(1,5,60);
	tv();
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glTranslatef(-22.5, 15, 1);
	glScalef(1.5, 2, 3);
	meja();
	glPopMatrix();

	glPushMatrix();
	glRotatef(180, 0, 1, 0);
	glTranslatef(-1, 13, -10);
	glScalef(1.3, 1.2, 1);
	kursi();
	glPushMatrix();
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glRotatef(-90, 0, 1, 0);
	glTranslatef(22, 13, 18);
	glScalef(0.5, 1.2, 1);
	kursi();

	glPushMatrix();
	glRotatef(-90, 0, 1, 0);
	glTranslatef(-70, 0, 12);
	kursi();
	glPopMatrix();
			
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 0, 38);
	kursi();
	glPopMatrix();
	glPopMatrix();
		
	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
	glFlush();
	r++;
	angle++;

}

void init(void) {
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glDepthFunc(GL_LESS);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glEnable(GL_CULL_FACE);
}

static void navigasi(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_HOME:
		sumbuy++;
		break;
	case GLUT_KEY_END:
		sumbuy--;
		break;
	case GLUT_KEY_UP:
		sumbuz--;
		break;
	case GLUT_KEY_DOWN:
		sumbuz++;
		break;
	case GLUT_KEY_RIGHT:
		sumbux++;
		break;
	case GLUT_KEY_LEFT:
		sumbux--;
		break;
	}
}

void keyboard(unsigned char key, int x, int y) {
	if (key == '1') {
		sumbuz++;
	}
	if (key == '2') {
		sumbuz--;
	}
	if (key == '3') {
		sumbuy--;
	}
	if (key == '4') {
		sumbuy++;
	}
}

void reshape(int w, int h) 
{	
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75, (GLfloat) w / (GLfloat) h, 0.1, 1000.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_STENCIL | GLUT_DEPTH);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("UAS");
	init();
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(navigasi);
	glutKeyboardFunc(keyboard);
	glColorMaterial(GL_FRONT, GL_DIFFUSE);
	glutMainLoop();
	return 0;
}
