#pragma once
#include "_3DShape.h"
class Конус :
	public _3DShape
{
public:
	Конус();
	Конус(float Ширина, float Высота, float drop);
	float Объём();
	float Площадь();
	const char* Тип();
	void operator*=(float k);
};

