#pragma once

//нужен параллелепипед, цилиндр, конус, пирамида
//общие длина, ширина(ширина/2 = радиус), высота

class _3DShape
{
protected:
	float длина = 0, ширина = 0, высота = 0;
public:
	_3DShape(float Длина, float Ширина, float Высота);
	_3DShape();
	void ЗадатьДлину(float x);
	void ЗадатьШирину(float x);
	void ЗадатьВысоту(float x);
	float ВернутьДлину();
	float ВернутьШирину();
	float ВернутьВысоту();
	virtual float Объём() = 0;
	virtual float Площадь() = 0;
	virtual const char* Тип() = 0;
	virtual void operator*=(float k) = 0;
	float operator/(_3DShape& Shape1);
	bool operator>(_3DShape& Shape1);
	bool operator<(_3DShape& Shape1);
	bool operator==(_3DShape& Shape1);
};