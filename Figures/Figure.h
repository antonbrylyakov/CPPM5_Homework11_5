﻿#pragma once
#include <iostream>

#ifdef _WIN32
#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif
#else
#define FIGURES_API
#endif

class FIGURES_API Figure
{
public:
	Figure();

	std::string& getName();

	unsigned int getSideCount();

	void printString();

protected:
	std::string _name;
	unsigned int _sideCount = 0;

	virtual void printSideInfo();

	virtual void printAngleInfo();
};