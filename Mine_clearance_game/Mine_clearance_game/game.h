#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 12
#define COLS 12


#define ROW 9
#define COL 9

//雷的数量
#define COUNT 10

//声明初始化数组
void InZation(char boardgame[ROWS][COLS], int row, int col, char get);

//声明打印棋盘
void print(char arr[ROWS][COLS],int row ,int col);


//声明布置雷
void SetMine(char arr[ROWS][COLS], int row, int col);


//声明排查雷
void GetMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);