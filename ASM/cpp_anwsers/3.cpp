#include <cstdint>
#include <iostream>
long long foo(long long rdi);

int main() {

	for(long long i = -100; i <= 100; ++i) {
		std::cout << i << " == " << foo(i) << "\n";
	}


	return 0;
}


long long foo(long long rdi) { // входной параметр rdi
    long long rbp = rdi; // mov rbp, rsp
    long long localVar = rdi; // mov QWORD PTR [rbp-23], rdi
    int result = 0; // объявляем результат, по умолчанию 0

    long long rax = localVar; // mov rax, QWORD PTR [rbp-24]
    rax += 9; // add rax, 9
    
    if (rax > 18) { // cmp rax, 18; ja .L2
        result = 1; // mov DWORD PTR [rbp-4], 1
    } else {
        return 0; // mov eax, 0; jmp .L3
    }
    
    long long rdx; // переменная для вычислений
    while (localVar != 0) { // cmp QWORD PTR [rbp-24], 0; jne .L5
        rdx = localVar; // mov rcx, QWORD PTR [rbp-24]
        rdx *= 7378697629483820647LL; // imul rdx, 7378697629483820647
        rdx >>= 2; // sar rdx, 2
        
        long long temp = localVar; // mov rax, rcx
        temp >>= 63; // sar rax, 63
        rdx -= temp; // sub rdx, rax
        
        rax = rdx; // mov rax, rdx
        rax <<= 2; // sal rax, 2
        rax += rdx; // add rax, rdx
        rax += rax; // add rax, rax
        localVar -= rax; // sub rcx, rax
        
        rdx = localVar; // mov rdx, rcx
        result *= rdx; // imul eax, edx
        
        localVar *= 7378697629483820647LL; // mov rcx, QWORD PTR [rbp-24]; imul rdx
        localVar >>= 2; // sar rax, 2
        
        temp = localVar; // sar rcx, 63
        localVar -= temp; // sub rax, rdx
    }
    
    return result; // mov eax, DWORD PTR [rbp-4]; return результат
}

