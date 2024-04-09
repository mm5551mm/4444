#include <iostream>
using namespace std;

int MaxElem(int A[], int N) {
    if (N == 1) {
        return A[0];
    }
    int max_rest = MaxElem(A + 1, N - 1);
    return (A[0] > max_rest) ? A[0] : max_rest;
}

int main() {
    int NA, NB, NC;
    
    cout << "Введите размер массива A,b,c: ";
    cin >> NA>>NB>>NC;

     if (NA <= 0 || NA > 10 || NB <= 0 || NB > 10 || NC <= 0 || NC > 10) {
        cout << "Ошибка Размер массива должен быть от 1 до 10." << endl;
        return 1;
    }

    int A[10], B[10], C[10];

     cout << "Введите элементы массива A: ";
    for (int i = 0; i < NA; ++i){
        cin >> A[i];
    }

     cout << "Введите элементы массива B: ";
    for (int i = 0; i < NB; ++i) {
        cin >> B[i];
    }

     cout << "Введите элементы массива C: ";
    for (int i = 0; i < NC; ++i){
        std::cin >> C[i];
    }

     int max_A = MaxElem(A, NA);
    int max_B = MaxElem(B, NB);
    int max_C = MaxElem(C, NC);

     cout << "Максимальный элемент  A: " << max_A << endl;
    cout << "Максимальный элемент  B: " << max_B << endl;
    cout << "Максимальный элемент   C: " << max_C << endl;
 
    return 0;
}
