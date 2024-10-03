#include <iostream>

using namespace std;

int main() {

    //1

    int M, N;
    cout << "Birinci massiv üçün ölçünü daxil edin (M): ";
    cin >> M;
    cout << "İkinci massiv üçün ölçünü daxil edin (N): ";
    cin >> N;

    int* A = new int[M]; // Dinamik massiv
    int* B = new int[N]; // Dinamik massiv
    int commonElements[100]; // Maksimal 100 ortaq element

    cout << "Birinci massivi daxil edin: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "İkinci massivi daxil edin: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int count = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                bool found = false;
                for (int k = 0; k < count; k++) {
                    if (commonElements[k] == A[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    commonElements[count++] = A[i];
                }
            }
        }
    }

    cout << "Ortaq ədədlər: ";
    for (int i = 0; i < count; i++) {
        cout << commonElements[i] << " ";
    }
    cout << endl;

    // Yaddaşı azad et
    delete[] A;
    delete[] B;

    return 0;




    //2

    int M, N;
    cout << "Birinci massiv üçün ölçünü daxil edin (M): ";
    cin >> M;
    cout << "İkinci massiv üçün ölçünü daxil edin (N): ";
    cin >> N;

    int* A = new int[M]; // Dinamik massiv
    int* B = new int[N]; // Dinamik massiv
    int uniqueElements[100]; // Maksimal 100 unikal element

    cout << "Birinci massivi daxil edin: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "İkinci massivi daxil edin: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int count = 0;
    for (int i = 0; i < M; i++) {
        bool found = false;
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            bool isUnique = true;
            for (int k = 0; k < count; k++) {
                if (uniqueElements[k] == A[i]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                uniqueElements[count++] = A[i];
            }
        }
    }

    cout << "Birinci massivdə olub, ikinci massivdə olmayan ədədlər: ";
    for (int i = 0; i < count; i++) {
        cout << uniqueElements[i] << " ";
    }
    cout << endl;

    // Yaddaşı azad et
    delete[] A;
    delete[] B;

    return 0;



    //3

    const int SIZE = 20;
    int arr[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 31 - 10; // -10 - 20 aralığında
    }

    int maxCount = 0, currentCount = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 0) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        }
        else {
            currentCount = 0; // Müsbət ardıcıllıq kəsilir
        }
    }

    cout << "Müsbət ədədlərin ən uzun ardıcıllığı: " << maxCount << endl;

    return 0;



    //4


    const int SIZE = 10;
    int arr[SIZE], positives[SIZE], negatives[SIZE];
    int posCount = 0, negCount = 0;

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 41 - 20; // -20 - 20 aralığında
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 0) {
            positives[posCount++] = arr[i];
        }
        else {
            negatives[negCount++] = arr[i];
        }
    }

    cout << "Yeni massiv: ";
    for (int i = 0; i < posCount; i++) {
        cout << positives[i] << " ";
    }
    for (int i = 0; i < negCount; i++) {
        cout << negatives[i] << " ";
    }
    cout << endl;

    return 0;


    //5

    const int SIZE = 10;
    int arr[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 41 - 20; // -20 - 20 aralığında
    }

    cout << "Əvvəlki massiv: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }

    cout << "Dəyişdirilmiş massiv: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
