//Реализуйте быструю сортировку. Напишите функцию так, чтобы можно было легко изменять направление сортировки и критерий сравнения, используя указатель на функцию


#include <iostream>

unsigned moveright(int* arr, int key, unsigned last, bool (*cmp)(int a, int b));
void insertion_sort(int* arr, unsigned sz, bool (*cmp)(int a, int b));
bool less(int a, int b);
bool greater(int a, int b);
bool choice_of_dir;

int main() {
    unsigned sz = 0; std::cout << "Enter size of the array: "; std::cin >> sz;
    int* arr = new int[sz];
    std::cout << "Enter elements from yours array: \n"; 
    for(int i = 0; i < sz; ++i) {
    	std::cin >> arr[i];
    	}
    
    
    std::cout << "if you wanna to yours array wil be sorted with foo less(), press 1, if another way foo large() - press 0 \n";
    std::cin >> choice_of_dir; std::cout << "\n"; 

    if (choice_of_dir) {
        insertion_sort(arr, sz, &less);
    }  else if (!choice_of_dir) {
        insertion_sort(arr, sz, &greater);
    }

    std::cout << "Elements from yours array: ";
    
    for (unsigned i = 0; i < sz; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
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
