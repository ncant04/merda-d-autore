	.file	"sizeof.cpp"
# GNU C++14 (Debian 10.2.1-6) version 10.2.1 20210110 (x86_64-linux-gnu)
#	compiled by GNU C version 10.2.1 20210110, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.0, isl version isl-0.23-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -imultiarch x86_64-linux-gnu -D_GNU_SOURCE sizeof.cpp
# -mtune=generic -march=x86-64 -fverbose-asm -fasynchronous-unwind-tables
# options enabled:  -fPIC -fPIE -faggressive-loop-optimizations
# -fallocation-dce -fasynchronous-unwind-tables -fauto-inc-dec
# -fdelete-null-pointer-checks -fdwarf2-cfi-asm -fearly-inlining
# -feliminate-unused-debug-symbols -feliminate-unused-debug-types
# -fexceptions -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm
# -fgnu-unique -fident -finline-atomics -fipa-stack-alignment
# -fira-hoist-pressure -fira-share-save-slots -fira-share-spill-slots
# -fivopts -fkeep-static-consts -fleading-underscore -flifetime-dse
# -fmath-errno -fmerge-debug-strings -fpeephole -fplt
# -fprefetch-loop-arrays -freg-struct-return
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
# -fshow-column -fshrink-wrap-separate -fsigned-zeros
# -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
# -fverbose-asm -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
# -malign-stringops -mavx256-split-unaligned-load
# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mfxsr
# -mglibc -mieee-fp -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone
# -msse -msse2 -mstv -mtls-direct-seg-refs -mvzeroupper

	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"Dimensioni in byte"
.LC1:
	.string	"float:\t"
.LC2:
	.string	"double:\t"
.LC3:
	.string	"short:\t"
.LC4:
	.string	"int:\t"
.LC5:
	.string	"long:\t"
.LC6:
	.string	"long double:\t"
.LC7:
	.string	"unsigned char:\t"
.LC8:
	.string	"unsigned short:\t"
.LC9:
	.string	"unsigned int:\t"
.LC10:
	.string	"unsigned long:\t"
.LC11:
	.string	"signed char:\t"
.LC12:
	.string	"costante carattere:\t"
.LC13:
	.string	"costante intera:\t"
.LC14:
	.string	"costante reale:\t"
.LC15:
	.string	"variabile intera:\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1572:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
# sizeof.cpp:9: 	cout << "Dimensioni in byte" << '\n';
	leaq	.LC0(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _1,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:11: 	cout << "float:\t" << sizeof(float) << '\n';
	leaq	.LC1(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:11: 	cout << "float:\t" << sizeof(float) << '\n';
	movl	$4, %esi	#,
	movq	%rax, %rdi	# _2,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:11: 	cout << "float:\t" << sizeof(float) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _3,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:12: 	cout << "double:\t" << sizeof(double) << '\n';
	leaq	.LC2(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:12: 	cout << "double:\t" << sizeof(double) << '\n';
	movl	$8, %esi	#,
	movq	%rax, %rdi	# _4,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:12: 	cout << "double:\t" << sizeof(double) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _5,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:13: 	cout << "short:\t" << sizeof(short) << '\n';
	leaq	.LC3(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:13: 	cout << "short:\t" << sizeof(short) << '\n';
	movl	$2, %esi	#,
	movq	%rax, %rdi	# _6,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:13: 	cout << "short:\t" << sizeof(short) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _7,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:14: 	cout << "int:\t" << sizeof(int) << '\n';
	leaq	.LC4(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:14: 	cout << "int:\t" << sizeof(int) << '\n';
	movl	$4, %esi	#,
	movq	%rax, %rdi	# _8,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:14: 	cout << "int:\t" << sizeof(int) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _9,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:15: 	cout << "long:\t" << sizeof(long) << '\n';
	leaq	.LC5(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:15: 	cout << "long:\t" << sizeof(long) << '\n';
	movl	$8, %esi	#,
	movq	%rax, %rdi	# _10,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:15: 	cout << "long:\t" << sizeof(long) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _11,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:16: 	cout << "long double:\t" << sizeof(long double) << '\n';
	leaq	.LC6(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:16: 	cout << "long double:\t" << sizeof(long double) << '\n';
	movl	$16, %esi	#,
	movq	%rax, %rdi	# _12,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:16: 	cout << "long double:\t" << sizeof(long double) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _13,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:17: 	cout << "unsigned char:\t" << sizeof(unsigned char) << '\n';
	leaq	.LC7(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:17: 	cout << "unsigned char:\t" << sizeof(unsigned char) << '\n';
	movl	$1, %esi	#,
	movq	%rax, %rdi	# _14,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:17: 	cout << "unsigned char:\t" << sizeof(unsigned char) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _15,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:18: 	cout << "unsigned short:\t" << sizeof(unsigned short) << '\n';
	leaq	.LC8(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:18: 	cout << "unsigned short:\t" << sizeof(unsigned short) << '\n';
	movl	$2, %esi	#,
	movq	%rax, %rdi	# _16,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:18: 	cout << "unsigned short:\t" << sizeof(unsigned short) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _17,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:19: 	cout << "unsigned int:\t" << sizeof(unsigned int) << '\n';
	leaq	.LC9(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:19: 	cout << "unsigned int:\t" << sizeof(unsigned int) << '\n';
	movl	$4, %esi	#,
	movq	%rax, %rdi	# _18,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:19: 	cout << "unsigned int:\t" << sizeof(unsigned int) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _19,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:20: 	cout << "unsigned long:\t" << sizeof(unsigned long) << '\n';
	leaq	.LC10(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:20: 	cout << "unsigned long:\t" << sizeof(unsigned long) << '\n';
	movl	$8, %esi	#,
	movq	%rax, %rdi	# _20,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:20: 	cout << "unsigned long:\t" << sizeof(unsigned long) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _21,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:21: 	cout << "signed char:\t" << sizeof(signed char) << '\n';
	leaq	.LC11(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:21: 	cout << "signed char:\t" << sizeof(signed char) << '\n';
	movl	$1, %esi	#,
	movq	%rax, %rdi	# _22,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:21: 	cout << "signed char:\t" << sizeof(signed char) << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _23,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:22: 	cout << "costante carattere:\t" << sizeof 'c' << '\n';
	leaq	.LC12(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:22: 	cout << "costante carattere:\t" << sizeof 'c' << '\n';
	movl	$1, %esi	#,
	movq	%rax, %rdi	# _24,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:22: 	cout << "costante carattere:\t" << sizeof 'c' << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _25,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:23: 	cout << "costante intera:\t" << sizeof 3 << '\n';
	leaq	.LC13(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:23: 	cout << "costante intera:\t" << sizeof 3 << '\n';
	movl	$4, %esi	#,
	movq	%rax, %rdi	# _26,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:23: 	cout << "costante intera:\t" << sizeof 3 << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _27,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:24: 	cout << "costante reale:\t" << sizeof 3.5 << '\n';
	leaq	.LC14(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:24: 	cout << "costante reale:\t" << sizeof 3.5 << '\n';
	movl	$8, %esi	#,
	movq	%rax, %rdi	# _28,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:24: 	cout << "costante reale:\t" << sizeof 3.5 << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _29,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:26: 	int i = 0;
	movl	$0, -4(%rbp)	#, i
# sizeof.cpp:27: 	cout << "variabile intera:\t" << sizeof i << '\n';
	leaq	.LC15(%rip), %rsi	#,
	leaq	_ZSt4cout(%rip), %rdi	#,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# sizeof.cpp:27: 	cout << "variabile intera:\t" << sizeof i << '\n';
	movl	$4, %esi	#,
	movq	%rax, %rdi	# _30,
	call	_ZNSolsEm@PLT	#
# sizeof.cpp:27: 	cout << "variabile intera:\t" << sizeof i << '\n';
	movl	$10, %esi	#,
	movq	%rax, %rdi	# _31,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT	#
# sizeof.cpp:34: 	return 0;
	movl	$0, %eax	#, _112
# sizeof.cpp:35: }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1572:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2070:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	%edi, -4(%rbp)	# __initialize_p, __initialize_p
	movl	%esi, -8(%rbp)	# __priority, __priority
# sizeof.cpp:35: }
	cmpl	$1, -4(%rbp)	#, __initialize_p
	jne	.L5	#,
# sizeof.cpp:35: }
	cmpl	$65535, -8(%rbp)	#, __priority
	jne	.L5	#,
# /usr/include/c++/10/iostream:74:   static ios_base::Init __ioinit;
	leaq	_ZStL8__ioinit(%rip), %rdi	#,
	call	_ZNSt8ios_base4InitC1Ev@PLT	#
	leaq	__dso_handle(%rip), %rdx	#,
	leaq	_ZStL8__ioinit(%rip), %rsi	#,
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax	#, tmp82
	movq	%rax, %rdi	# tmp82,
	call	__cxa_atexit@PLT	#
.L5:
# sizeof.cpp:35: }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE2070:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2071:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
# sizeof.cpp:35: }
	movl	$65535, %esi	#,
	movl	$1, %edi	#,
	call	_Z41__static_initialization_and_destruction_0ii	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE2071:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
