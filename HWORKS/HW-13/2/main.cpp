//GPT AAA

#include <iostream>

unsigned moveright(int* arr, int key, unsigned last, bool (*cmp)(int a, int b));
void insertion_sort(int* arr, unsigned sz, bool (*cmp)(int a, int b));
bool less(int a, int b);
int countTriangles(int* arr, int n);

int main() {
    unsigned size = 0; 
    std::cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    } 

    std::cout << "Result: " << countTriangles(arr, size);

    delete[] arr;
    return 0;
}

bool less(int a, int b) {
    return a < b;
}

void insertion_sort(int* arr, unsigned sz, bool (*cmp)(int a, int b)) {
    for (unsigned i = 1; i < sz; i++) {
        int key = arr[i];
        unsigned pos = moveright(arr, key, i, cmp);
        arr[pos] = key;
    }
}

unsigned moveright(int* arr, int key, unsigned last, bool (*cmp)(int a, int b)) {
    unsigned pos = last;
    while (pos > 0 && cmp(arr[pos - 1], key)) { 
        arr[pos] = arr[pos - 1];
        pos--;
    }
    return pos;
}

int countTriangles(int* arr, int n) {
    if(n < 3) return 0;

    insertion_sort(arr, n, &less); // сортируем массив

    int count = 0; // заводим счётчик
    for(int i = 0; i < n - 2; ++i) { 
        std::cout << "First passage \t \n";
        for(int j = i + 1; j < n - 1; ++j) {
            std::cout << "Second passage \t \n";
            for(int k = j + 1; k < n; ++k) {
                std::cout << "Third passage \t \n";
                
                #ifdef CRITICAL_SEC_C_TRIANGLES_AB
                if(arr[i] + arr[j] <  arr[k]) {
                    std::cout << "Break is worked";
                    break;
                } else {
                        count++;
                }
                #endif

                #ifdef CRITICAL_SEC_C_TRIANGLES_AA
                if(arr[i] + arr[j] > arr[k]) {
                    count++;
                } else {
                    std::cout << "Break is worked !!";
                    break;
                }
                #endif


                // нет необходимости проверять остальные комбинации для текущих i и j,
                // потому что массив отсортирован.
            }
        }
    }

    return count;
}


#ifdef MY_W_INS_LESS

#include <iostream>

unsigned moveright(int* arr, int key, unsigned last, bool (*cmp)(int a, int b));
void insertion_sort(int* arr, unsigned sz, bool (*cmp)(int a, int b));
bool less(int a, int b);
bool greater(int a, int b);
bool choice_of_dir;
int countTriangles(int* arr, int n);


int main() {
    unsigned size = 0; std::cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    } 

std::cout << "Result: " << countTriangles(arr, size);



    delete[] arr;
    return 0;
}

bool less(int a, int b) {
    return a < b;
}

bool greater(int a, int b) {
    return a > b;
}

void insertion_sort(int* arr, unsigned sz, bool (*cmp)(int a, int b)) {
    for (unsigned i = 1; i < sz; i++) {
        int key = arr[i];
        unsigned pos = moveright(arr, key, i, cmp);
        arr[pos] = key;
    }
}

unsigned moveright(int* arr, int key, unsigned last, bool (*cmp)(int a, int b)) {
    unsigned pos = last;
    while (pos > 0 && cmp(arr[pos - 1], key)) { 
        arr[pos] = arr[pos - 1];
        pos--;
    }
    return pos;
}

int countTriangles(int* arr, int n) {
    if(n < 3) return 0;

    insertion_sort(arr, n, &less); // сортируем массив с помощью foo ins_sort && less()

    int count = 0; // заводим счётчик
    for(int i = 0; i < n - 2; ++i) { 
        for(int j = i + 1; j < n; ++j) {
            for(int k = j + 1; k < n; ++k) {
                if(arr[i] + arr[j] > arr[k]) {
                    count++;
                } else if(arr[i] + arr[j] <= arr[k]) {
                    break;
                }
            }
        }
    }

    return count;
}
#endif


#ifdef GPT_A
#include <iostream>
#include <algorithm>

int countTriangles(int* arr, int n);


int main() {
    unsigned size = 0; std::cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    } 

    std::cout << "Result: " << countTriangles(arr, size);




    delete[] arr;
    return 0;
}

int countTriangles(int* arr, int n) {
    if(n < 3) return 0;

    std::sort( arr, arr + n);

    int count = 0; // заводим счётчик
    for(int i = 0; i < n - 2; ++i) { 
        for(int j = i + 1; j < n; ++j) {
            for(int k = j + 1; k < n; ++k) {
                if(arr[i] + arr[j] > arr[k]) {
                    count++;
                } else {
                    break;
                }
            }
        }
    }

    return count;
}

#endif

#ifdef GPT_B

#include <iostream>
#include <algorithm> // Для std::sort

using namespace std;

int countTriangles(int* arr, int n) {
    if (n < 3) return 0;

    // Сортируем массив по возрастанию с помощью std::sort
    sort(arr, arr + n);

    int count = 0;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] > arr[k]) {
                    count++;
                } else {
                    // Оптимизация: если arr[i] + arr[j] <= arr[k], то дальше проверять не нужно
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    unsigned size = 0;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Result: " << countTriangles(arr, size) << endl;
    delete[] arr;
    return 0;
}
#endif

#ifdef GPT_C

#include <iostream>
#include <algorithm> // Для std::sort

using namespace std;

int countTriangles(int* arr, int n) {
    if (n < 3) return 0; // Невозможно образовать треугольник из 2 или менее палочек

    // Сортировка массива. Это критично для оптимизации!
    sort(arr, arr + n);

    int count = 0;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] > arr[k]) {
                    count++;
                } else {
                   // Оптимизация: если arr[i] + arr[j] <= arr[k], то нет смысла проверять дальше
                   break;  
                }
                std::cout << count << std::endl;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int triangleCount = countTriangles(arr, n);
    cout << "res: " << triangleCount << endl;

   int arr2[] = {1, 1, 1, 2, 2, 2};
    n = sizeof(arr2) / sizeof(arr2[0]);
    triangleCount = countTriangles(arr2, n);
    cout << "res: " << triangleCount << endl;

    return 0;
}

#endif