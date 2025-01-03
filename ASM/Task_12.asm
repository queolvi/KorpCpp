foo(rational const&, rational const&):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-24], rdi
        mov     QWORD PTR [rbp-32], rsi
        mov     rax, QWORD PTR [rbp-24]
        mov     rdx, QWORD PTR [rax]
        mov     rax, QWORD PTR [rbp-32]
        mov     rax, QWORD PTR [rax+8]
        mov     rcx, rdx
        imul    rcx, rax
        mov     rax, QWORD PTR [rbp-32]
        mov     rdx, QWORD PTR [rax]
        mov     rax, QWORD PTR [rbp-24]
        mov     rax, QWORD PTR [rax+8]
        imul    rax, rdx
        add     rax, rcx
        mov     QWORD PTR [rbp-16], rax
        mov     rax, QWORD PTR [rbp-32]
        mov     rdx, QWORD PTR [rax+8]
        mov     rax, QWORD PTR [rbp-24]
        mov     rax, QWORD PTR [rax+8]
        imul    rax, rdx
        mov     QWORD PTR [rbp-8], rax
        mov     rax, QWORD PTR [rbp-16]
        mov     rdx, QWORD PTR [rbp-8]
        pop     rbp
        ret