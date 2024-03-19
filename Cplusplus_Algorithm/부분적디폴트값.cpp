//#include <iostream>
////이런식으로 함수선언하면 안 됨
////int YourFunc(int num1=1, int num2 = 5, int num3);
////이런식으로 오른쪽 매개변수의 디폴트 값을 비우는 형태로는 디폴트 값을 지정할 수 없다.
////반드시 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야한다.
//
////이건 ok
//int YourFunc(int num1, int num2 = 5, int num3 = 7);
//
//int YourFunc(int num1, int num2, int num3) {
//	return num1 + num2 + num3;
//}
//
//int main() {
//	std::cout << YourFunc(10)<<std::endl;//YourFunc(10,5,7)
//	std::cout << YourFunc(10,20)<<std::endl;//YourFunc(10,20,7)
//
//	return 0;
//}
