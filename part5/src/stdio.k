int read (int arg) {
	int val;
	asm("	scani  $0");
	return val;
}
char read (char arg) {
	char val;
	asm("	scanc  $0");
	return val;
}
float read (float arg) {
	float val;
	asm("	scanf  $0");
	return val;
}
void write (void) {
	asm("	println");
}
void write (int arg) {
	asm("	print #0");
}
void write (char arg) {
	asm("	print #0");
}
void write (float arg) {
	asm("	print #0");
}

// void write (char arg[]) {
// 	asm("_WRITE_STR:");
// 	asm("\tmov      $0, 0            // $0 = i");
// 	asm("_WRITE_STR_BEGIN:");
// 	asm("\tmov      $1, #0[$0]       // $1 = str[i]");
// 	asm("\tseq      $2, $1, '\\0'     // $2 = (str[i] == 0)");
// 	asm("\tbrnz _WRITE_STR_END, $2   // if ($2 != false) goto end");
// 	asm("\tprint    $1               // else print str[i]");
// 	asm("\tadd      $0, $0, 1        // ++i");
// 	asm("\tjump _WRITE_STR_BEGIN     // continue");
// 	asm("_WRITE_STR_END:");
// 	asm("\tprintln                   // print newline");
// 	asm("\treturn                    // return");
// }
