#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#define COLUMN 15
#define ROW 15
#define MAX_TURN COLUMN*ROW
#define BLACK 1
#define WHITE 2

void gotoxy(int x, int y);
void Color(int back, int text);
