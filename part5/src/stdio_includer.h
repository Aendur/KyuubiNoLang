#ifndef STDIO_INCLUDER
#define STDIO_INCLUDER

static const char standard_io_library[] = "// BEGIN STANDARD I/O LIBRARY \n\
int read (int arg) { \n\
	int val; \n\
	asm(\"	scani  $0\"); \n\
	return val; \n\
} \n\
char read (char arg) { \n\
	char val; \n\
	asm(\"	scanc  $0\"); \n\
	return val; \n\
} \n\
float read (float arg) { \n\
	float val; \n\
	asm(\"	scanf  $0\"); \n\
	return val; \n\
} \n\
void write (void) { \n\
	asm(\"	println\"); \n\
} \n\
void write (int arg) { \n\
	asm(\"	print #0\"); \n\
} \n\
void write (char arg) { \n\
	asm(\"	print #0\"); \n\
} \n\
void write (float arg) { \n\
	asm(\"	print #0\"); \n\
} \n\
// void write (char arg[]) { \n\
// 	asm(\"_WRITE_STR:\"); \n\
// 	asm(\"\\tmov      $0, 0            // $0 = i\"); \n\
// 	asm(\"_WRITE_STR_BEGIN:\"); \n\
// 	asm(\"\\tmov      $1, #0[$0]       // $1 = str[i]\"); \n\
// 	asm(\"\\tseq      $2, $1, '\\\\0'     // $2 = (str[i] == 0)\"); \n\
// 	asm(\"\\tbrnz _WRITE_STR_END, $2   // if ($2 != false) goto end\"); \n\
// 	asm(\"\\tprint    $1               // else print str[i]\"); \n\
// 	asm(\"\\tadd      $0, $0, 1        // ++i\"); \n\
// 	asm(\"\\tjump _WRITE_STR_BEGIN     // continue\"); \n\
// 	asm(\"_WRITE_STR_END:\"); \n\
// 	asm(\"\\tprintln                   // print newline\"); \n\
// 	asm(\"\\treturn                    // return\"); \n\
// } \n\
// END STANDARD I/O LIBRARY \n\
#reset \n";

#endif