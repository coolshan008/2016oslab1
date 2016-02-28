#include "include/x86.h"
#include "include/stdarg.h"
#include "include/stdio.h"

/*
 * You may refer to lib/printfmt.c
 * to implement the printk() and vprintk().
 * You can also implement a simplier version
 * by yourself.
 */

/*static void
putch(int ch, int *cnt){
	;
	*
	 * Call the output function(such as putchar(ch)) to display character 'ch'.
	 *

}
*/

int	vprintk(const char *fmt,va_list ap){ 
	hlt();
	/*
	 * uncomment the hlt()
	 * after your completement.
	 * refer to manual.
	 */
	return -1;
}



int	printk(const char *fmt, ...){
	hlt();
	/*
	 * uncomment the hlt()
	 * after your completement.
	 * refer to manual.
	 *
	 * Hint:Use va_list to get the parameters and call vprintk().
	 *		You may also build the actual string here and call a
	 *		function which would print a string.
	 */
	return -1;
}
