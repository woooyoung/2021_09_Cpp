﻿//#pragma once

#ifndef __ANIMAL_H__  
#define __ANIMAL_H__

class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name);

	void printInfo();
};

#endif