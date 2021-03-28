#include "_3DShape.h"

_3DShape::_3DShape(float Длина, float Ширина, float Высота) {
	длина = Длина;
	ширина = Ширина;
	высота = Высота;
}
_3DShape::_3DShape() {
	длина = 0;
	ширина = 0;
	высота = 0;
}
void _3DShape::ЗадатьДлину(float x) {
	длина = x;
}
void _3DShape::ЗадатьШирину(float x) {
	ширина = x;
}
void _3DShape::ЗадатьВысоту(float x) {
	высота = x;
}
float _3DShape::ВернутьДлину() {
	return длина;
}
float _3DShape::ВернутьШирину() {
	return ширина;
}
float _3DShape::ВернутьВысоту() {
	return высота;
}
float _3DShape::operator/(_3DShape& Shape1) {
	return Объём() / Shape1.Объём();
}
bool _3DShape::operator>(_3DShape& Shape1) {
	return Объём() > Shape1.Объём();
}
bool _3DShape::operator<(_3DShape& Shape1) {
	return Объём() < Shape1.Объём();
}
bool _3DShape::operator==(_3DShape& Shape1) {
	return Объём() == Shape1.Объём();
}