//#include <iostream>
//
//void insertionSort(int A[], int n) {
//    for (int i = 1; i < n; ++i) {
//        int key = A[i];  // ���� ó���� ���� key�� �����մϴ�.
//        // A[i]�� ���ĵ� �κ� �迭 A[0:i-1]�� �����մϴ�.
//        int j = i - 1;
//        while (j >= 0 && A[j] > key) {
//            A[j + 1] = A[j];  // key���� ū ���� ���������� �̵���ŵ�ϴ�.
//            j = j - 1;
//        }
//        A[j + 1] = key;  // key�� ������ ��ġ�� �����մϴ�. (���������� key���� ū �� �� ���� �� ���� ������ ���� ����: ���� �ε���)
//    }
//}
//
//int main1() {
//    int A[] = { 5, 2, 4, 6, 1, 3 };  // ������ �迭
//    int n = sizeof(A) / sizeof(A[0]);  // �迭�� ũ��
//
//    insertionSort(A, n);  // ���� ���� ����
//
//    // ���� ��� ���
//    std::cout << "Sorted array: ";
//    for (int i = 0; i < n; ++i) {
//        std::cout << A[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
