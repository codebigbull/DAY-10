 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define ROW 3
#define COL 3

void Initboard(char get[2 * ROW + 1][2 * COL + 1], int row, int col, char set);

void Displayboard(char get[2 * ROW + 1][2 * COL + 1], int row, int col);

void putmine(char get[2 * ROW + 1][2 * COL + 1], int row, int col, char set);

void putcomp(char get[2 * ROW + 1][2 * COL + 1], int row, int col, char set);

int judge(char get[2 * ROW + 1][2 * COL + 1], int row, int col);


