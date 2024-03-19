//#include <iostream>
//int main() {
//	int value = 5;
//	int* const ptr = &value; // ptr 자체를 변경할 수 없음
//	*ptr = 10; // 포인터가 가리키는 값은 변경 가능
//	// ptr++; // 에러: 포인터 자체를 변경할 수 없음
//
//
//	const int _value = 5;
//	const int* _ptr = &_value; // ptr이 가리키는 값(value)은 변경할 수 없음
//	// *ptr = 10; // 에러: 포인터가 가리키는 값은 상수이므로 수정할 수 없음
//	_ptr++; // 포인터 자체는 변경 가능
//
//	return 0;
//}