#include <iostream>

long long foo(long long rdi); // Объявление функции

int main() {
    for (long long i = -200; i < 200; ++i) {
        std::cout << i << " == " << foo(i) << "\n";
    }
    return 0;
}

long long foo(long long rdi) {
    long long rbp_24 = rdi; // Сохраняем входное значение
    long long rbp_4 = 0;    // Инициализируем переменную

    while (rbp_24 != 0) { // Аналог проверки из ассемблера
        long long rcx = rbp_24; // Копируем значение
        long long rdx = 7378697629483820647; // Константа
        long long rax;

        rax = rcx * rdx; // Умножение
        rdx = rax >> 2; // sar rax, 2
        rax = rcx >> 63; // sar rax, 63
        rdx -= rax; // sub rdx, rax

        rax = rdx; // Используем для дальнейших вычислений
        rax <<= 2; // sal rax, 2
        rax += rdx; // add rax, rdx
        rax += rax; // add rax, rax
        rcx -= rax; // sub rcx, rax

        rbp_4 += rcx; // Обновляем rbp_4

        // Снова выполняем операции с rbp_24
        rcx = rbp_24; // Копируем значение
        rax = rcx * rdx; // Умножение
        rax >>= 2; // sar rax, 2
        rcx >>= 63; // sar rcx, 63
        rdx = rcx; // Обновление rdx
        rbp_24 = rax - rdx; // Обновляем rbp_24
    }

    return rbp_4; // Возвращаем значение
}
