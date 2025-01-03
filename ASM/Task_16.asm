foo(TreeNode*, TreeNode*):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     QWORD PTR [rbp-8], rdi
        mov     QWORD PTR [rbp-16], rsi
        cmp     QWORD PTR [rbp-8], 0
        jne     .L2
        cmp     QWORD PTR [rbp-16], 0
        jne     .L2
        mov     eax, 1
        jmp     .L3
.L2:
        cmp     QWORD PTR [rbp-8], 0
        je      .L4
        cmp     QWORD PTR [rbp-16], 0
        jne     .L5
.L4:
        mov     eax, 0
        jmp     .L3
.L5:
        mov     rax, QWORD PTR [rbp-8]
        mov     edx, DWORD PTR [rax]
        mov     rax, QWORD PTR [rbp-16]
        mov     eax, DWORD PTR [rax]
        cmp     edx, eax
        jne     .L6
        mov     rax, QWORD PTR [rbp-16]
        mov     rdx, QWORD PTR [rax+16]
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+8]
        mov     rsi, rdx
        mov     rdi, rax
        call    foo(TreeNode*, TreeNode*)
        test    al, al
        je      .L6
        mov     rax, QWORD PTR [rbp-16]
        mov     rdx, QWORD PTR [rax+8]
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+16]
        mov     rsi, rdx
        mov     rdi, rax
        call    foo(TreeNode*, TreeNode*)
        test    al, al
        je      .L6
        mov     eax, 1
        jmp     .L8
.L6:
        mov     eax, 0
.L8:
        nop
.L3:
        leave
        ret
bar(TreeNode*):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     QWORD PTR [rbp-8], rdi
        cmp     QWORD PTR [rbp-8], 0
        jne     .L10
        mov     eax, 1
        jmp     .L11
.L10:
        mov     rax, QWORD PTR [rbp-8]
        mov     rdx, QWORD PTR [rax+16]
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+8]
        mov     rsi, rdx
        mov     rdi, rax
        call    foo(TreeNode*, TreeNode*)
        nop
.L11:
        leave
        ret