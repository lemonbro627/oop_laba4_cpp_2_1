#pragma once
#include "_3DShape.h"
class Цилиндр :
	public _3DShape
{
public:
	Цилиндр();
	Цилиндр(float Ширина, float Высота, float drop);
	float Объём();
	float Площадь();
	const char* Тип();
	void operator*=(float k);
};

