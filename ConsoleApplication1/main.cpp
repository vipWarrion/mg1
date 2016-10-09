#include "winner.h"
#include "loser.h"
int win_w = 800, win_h = 600;
int speed = 20;
int fr = 72;
int frame_id = fr * speed;
bool start = false;

void reshape(int w, int h)
{
	win_w = w;
	win_h = h;
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, 0, h);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void display()
{
	winner winner;
	loser loser;
	glClearColor(0.8, 0.8, 0.8, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glColor3f(0.4, 0.4, 0.4);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	// —глаживание линий
	glEnable(GL_LINE_SMOOTH);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

	glPushMatrix();	
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 150);
	glVertex2i(win_w, 150);
	glVertex2i(win_w, 0);
	glEnd();

	glPopMatrix();
	winner.draw(0.8 * win_w, frame_id / speed);
	loser.draw(0.2 * win_w, frame_id / speed);	

	glDisable(GL_BLEND);
	glDisable(GL_LINE_SMOOTH);
	glDisable(GL_POLYGON_SMOOTH);
	glDisable(GL_POINT_SMOOTH);



	glutSwapBuffers();
	if (start == true)
		if (++frame_id == 168 * speed)
			frame_id = 0;
}

void key(unsigned char key, int x, int y)
{
	switch (key)
	{

	case '1':
		frame_id -= speed;
		break;

	case '2':
		frame_id += speed;
		break;

	case '3':
		frame_id = fr * speed;
		break;

	case '4':
		frame_id = 0;
		break;

	case ' ':
		start = !start;
		break;
	}
}

int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); /*¬ключаем двойную буферизацию и четырехкомпонентный цвет*/

	glutInitWindowSize(win_w, win_h);
	glutCreateWindow("OpenGL lesson 1");

	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutKeyboardFunc(key);

	glutMainLoop();

	return 0;
}