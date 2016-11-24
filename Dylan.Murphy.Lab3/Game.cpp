#include "Game.h"

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}

Game::~Game(){}

void Game::run()
{

	initialize();

	Event event;
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);

	while (isRunning){

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;
}

void Game::update()
{
	cout << "Update up" << endl;
}

void Game::draw()
{
	cout << "Draw up" << endl;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	{ 
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(1.0, 1.3, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(.8, 0.8, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.2, 0.8, -5.0);
	} 
	glEnd();

	glBegin(GL_POINTS);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(1.0, 1.5, -5.0);
	}
	glEnd();

	glBegin(GL_LINES);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, 0.7, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, 0.7, -5.0);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, 0.6, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, 0.6, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(0.8, 0.6, -5.0);

	}
	glEnd;

	glBegin(GL_LINE_LOOP);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, 0.5, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, 0.5, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.2, 0.3, -5.0);
	}

	glBegin(GL_TRIANGLE_STRIP);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, 0.1, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, -0.2, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(0.8, -0.2, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.2, 0.1, -5.0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, -0.3, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, -0.7, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(0.8, -0.7, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.2, -0.3, -5.0);
	}
	glEnd();

	glBegin(GL_QUADS);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, -0.8, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, -1.2, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.8, -1.2, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.2, -0.8, -5.0);
	}
	glEnd();

	glBegin(GL_QUAD_STRIP);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.8, -1.3, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(1.2, -1.7, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.8, -1.7, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(1.2, -1.3, -5.0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	{
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(-1.0, 2.0, -5.0);

		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(-1.6, 1.2, -5.0);

		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-1.4, 0.0, -5.0);

		glColor3f(0.0, 1.0, 1.0);
		glVertex3f(-0.6, 0.0, -5.0);

		glColor3f(1.0, 0.0, 1.0);
		glVertex3f(-0.4, 1.2, -5.0);
	}
	glEnd();

	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

