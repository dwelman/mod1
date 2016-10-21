#pragma once
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include "glext.h"
#include <iostream>
#include <stdio.h>
#include <Vector3.class.h>
#include <Point.class.h>

using namespace std;

static float	angle = 30.0f;

static float	cam_angle = 0.0f;

void	handleKeypress(unsigned char key, int x, int y);

void	handleResize(int w, int h);

void	drawScene();

void	update(int value);