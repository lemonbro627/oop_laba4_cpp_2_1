#pragma once
#include "_3DShape.h"
class Пирамида :
	public _3DShape
{
public:
	Пирамида();
	Пирамида(float Длина, float Ширина, float Высота);
	float Объём();
	float Площадь();
	const char* Тип();
	void operator*=(float k);
};

