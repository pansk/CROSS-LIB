#include "../../../conio_patch.h"


void INIT_GRAPHICS(void)
{			
		// asm { 
			// ldb #$14 
			// swi 
			// .byte 2 
		// }
		
		PUTCH(0x14);
		
		// PUTCH('a');
		
		// cputc('B');
		
		// cputc('C');
		
		// gotoxy(10,10);
		
		// cputc('D');
		
		// cputc('e');
		
		// cputc('f');
		
		// while(1){}
}	
