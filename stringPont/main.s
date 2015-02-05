	.file	"main.c"
	.section	.rodata
.LC0:
	.string	"Debian"
.LC1:
	.string	"Ubuntu"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$.LC0, -24(%rbp)
	movl	$1953392973, -16(%rbp)
	movb	$0, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movl	$.LC1, %edi
	call	puts
	movl	$.LC1, %edi
	call	puts
	movl	$.LC1, %edi
	call	puts
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.9.2-0ubuntu1~14.04) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
