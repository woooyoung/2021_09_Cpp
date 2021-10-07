#define _CRT_SECURE_NO_WARNINGS

#include "TetrisHelper.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

#define GRID_WIDTH 7		//칸(행)
#define GRID_HEIGHT 10		//줄(열)
#define USERBLOCK_SIZE 3

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

class Display {
public:
	//void draw() { // x,y 위치에 어떻게 출력 할지?
	//	for (int i = 0; i < GRID_HEIGHT; i++) {
	//		for (int k = 0; k < GRID_WIDTH; k++) {
	//			if (displayData[i][k] == 0) {
	//				drawPosition(k, i, false);
	//			}
	//			else {
	//				drawPosition(k, i, true);
	//			}
	//		}
	//	}
	//}
	void draw() { 
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				drawPosition(k, i, displayData[i][k] == 1);
			}
		}
	}
};

class GameEngine {
public:
	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = { 0, };
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };

	int blockX = 0;		// 현재 유저블록의 위치를 기억하는 변수
	int blockY = 0;

	void init() {
		//최초에 게임엔진을 초기화하는 함수
	}
	void next(float dt, char keyboardInput) {
		//키보드의 input 값을 받아와서 다음 할 일을 결정
		//while 무한루프에서 매번 불려짐
	}
};