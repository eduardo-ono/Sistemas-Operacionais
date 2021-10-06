	.file	"contador.c"
	.intel_syntax noprefix
 # GNU C17 (tdm64-1) version 10.3.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 10.3.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.23-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix C:/TDM-GCC-64/bin/../lib/gcc/x86_64-w64-mingw32/10.3.0/
 # -D_REENTRANT contador.c -masm=intel -mtune=generic -march=x86-64
 # -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -fallocation-dce
 # -fasynchronous-unwind-tables -fauto-inc-dec -fdelete-null-pointer-checks
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-symbols
 # -feliminate-unused-debug-types -ffp-int-builtin-inexact -ffunction-cse
 # -fgcse-lm -fgnu-unique -fident -finline-atomics -fipa-stack-alignment
 # -fira-hoist-pressure -fira-share-save-slots -fira-share-spill-slots
 # -fivopts -fkeep-inline-dllexport -fkeep-static-consts
 # -fleading-underscore -flifetime-dse -fmath-errno -fmerge-debug-strings
 # -fpeephole -fpic -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fshrink-wrap-separate
 # -fsigned-zeros -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -funwind-tables -fverbose-asm -fzero-initialized-in-bss
 # -m128bit-long-double -m64 -m80387 -maccumulate-outgoing-args
 # -malign-double -malign-stringops -mavx256-split-unaligned-load
 # -mavx256-split-unaligned-store -mfancy-math-387 -mfentry -mfp-ret-in-387
 # -mfxsr -mieee-fp -mlong-double-80 -mmmx -mms-bitfields -mno-sse4
 # -mpush-args -mred-zone -msse -msse2 -mstack-arg-probe -mstackrealign
 # -mvzeroupper

	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 32	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # contador.c:5: {
	call	__main	 #
 # contador.c:7:     return 0;
	mov	eax, 0	 # _1,
 # contador.c:8: }
	add	rsp, 32	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.ident	"GCC: (tdm64-1) 10.3.0"
