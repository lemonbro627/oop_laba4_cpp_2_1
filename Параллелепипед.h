#pragma once
#include "_3DShape.h"
class Параллелепипед :
	public _3DShape
{
public:
	Параллелепипед();
	Параллелепипед(float Длина, float Ширина, float Высота);
	float Объём();
	float Площадь();
	const char* Тип();
	void operator*=(float k);
};