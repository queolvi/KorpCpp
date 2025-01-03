#include <iostream>

long long foo(long long rdi); // Параметр rdi будет передан в функцию

int main() {
    for (long long i = -200; i < 200; ++i) {
        std::cout << i << " == " << foo(i) << "\n";  
    }
    return 0;
}

long long foo(long long rdi) {
    long long rbp_24 = rdi; // Сохраняем входное значение
    long long rbp_4 = 0;    // Инициализируем счетчик

    while (rbp_24 != 0) { // Аналог jmp .L2
        long long rcx = rbp_24; 
        long long rdx = 7378697629483820647; 
        long long rax = rcx;

        rax *= rdx; // Умножение
        rdx = rax >> 2; // sar rdx, 2
        rax = rcx >> 63; // sar rax, 63
        rdx -= rax; // sub rdx, rax

        rax = rdx; // Двухшаговое сдвижение
        rax <<= 2; // sal rax, 2
        rax += rdx; // add rax, rdx
        rax += rax; // add rax, rax
        rcx -= rax; // sub rcx, rax

        // Обновление счетчика
        rbp_4 += rcx; // Аналог mov eax, DWORD PTR [rbp-4]
        
        rbp_24 = (rcx * rdx) >> 2; // Обновление rbp_24
        rbp_24 -= (rbp_24 >> 63); // sar rcx, 63 и обновление
    }

    return rbp_4; // Возвращаем результат
}
