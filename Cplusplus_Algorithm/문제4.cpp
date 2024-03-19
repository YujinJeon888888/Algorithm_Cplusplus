//#include <iostream>
///// <summary>
///// 판매원들의 급여계산 프로그램 작성
///// </summary>
///// <returns></returns>
//int main() {
//	//매달 50만원의 기본급여, 물품판매가격의 12%해당 금액 지급
//	int salary;
//
//	while (true)
//	{
//		std::cout << "\n판매 금액을 만원 단위로 입력(-1 to end): ";
//		std::cin >> salary;
//		if (salary == -1)
//			break;
//		std::cout << "이번 달 급여: " << salary * 0.12f + 50;//float곱할 때 float로 형변환됨. 50더해도 float형변환
//	}
//
//	return 0;
//}