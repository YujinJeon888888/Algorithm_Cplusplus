//#include<iostream>
//template<typename T>// 제네릭 프로그래밍
//void swap(T* a, T* b) {//타입에 *를 붙이는 건, 포인터기능을 한다는 걸 의미.
//	T temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);//주소를 넘기는 이유: 참조에의한전달- > 메모리효율성
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << '\n';
//
//	double db1 = 1.111, db2 = 5.555;
//	swap(&db1, &db2);
//	std::cout << db1 << ' ' << db2 << "\n";
//	return 0;
//}
