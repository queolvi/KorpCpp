foo(long long):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-23], rdi
        mov     rax, QWORD PTR [rbp-24]
        add     rax, 9
        cmp     rax, 18
        ja      .L2
        mov     eax, 0
        jmp     .L3
.L2:
        mov     DWORD PTR [rbp-4], 1
        jmp     .L4
.L5:
        mov     rcx, QWORD PTR [rbp-24]
        movabs  rdx, 7378697629483820647
        mov     rax, rcx
        imul    rdx
        sar     rdx, 2
        mov     rax, rcx
        sar     rax, 63
        sub     rdx, rax
        mov     rax, rdx
        sal     rax, 2
        add     rax, rdx
        add     rax, rax
        sub     rcx, rax
        mov     rdx, rcx
        mov     eax, DWORD PTR [rbp-4]
        imul    eax, edx
        mov     DWORD PTR [rbp-4], eax
        mov     rcx, QWORD PTR [rbp-24]
        movabs  rdx, 7378697629483820647
        mov     rax, rcx
        imul    rdx
        mov     rax, rdx
        sar     rax, 2
        sar     rcx, 63
        mov     rdx, rcx
        sub     rax, rdx
        mov     QWORD PTR [rbp-24], rax
.L4:
        cmp     QWORD PTR [rbp-24], 0
        jne     .L5
        mov     eax, DWORD PTR [rbp-4]
.L3:
        pop     rbp
        ret
