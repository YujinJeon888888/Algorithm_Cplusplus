//#include <iostream>
//
//void insertionSort(int A[], int n) {
//    for (int i = 1; i < n; ++i) {
//        int key = A[i];  // 현재 처리할 값을 key에 저장합니다.
//        // A[i]를 정렬된 부분 배열 A[0:i-1]에 삽입합니다.
//        int j = i - 1;
//        while (j >= 0 && A[j] > key) {
//            A[j + 1] = A[j];  // key보다 큰 값을 오른쪽으로 이동시킵니다.
//            j = j - 1;
//        }
//        A[j + 1] = key;  // key를 적절한 위치에 삽입합니다. (오른쪽으로 key보다 큰 수 다 땡긴 후 땡긴 수들의 제일 왼쪽: 지금 인덱스)
//    }
//}
//
//int main1() {
//    int A[] = { 5, 2, 4, 6, 1, 3 };  // 정렬할 배열
//    int n = sizeof(A) / sizeof(A[0]);  // 배열의 크기
//
//    insertionSort(A, n);  // 삽입 정렬 실행
//
//    // 정렬 결과 출력
//    std::cout << "Sorted array: ";
//    for (int i = 0; i < n; ++i) {
//        std::cout << A[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
