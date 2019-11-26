void read (int arg) {
	asm("_READ_INT:");
	asm("\tscani  $0");
	asm("\treturn $0");
}
void read (char arg) {
	asm("_READ_CHAR:");
	asm("\tscanc  $0");
	asm("\treturn $0");
}
void read (float arg) {
	asm("_READ_FLOAT:");
	asm("\tscanf  $0");
	asm("\treturn $0");
}
void write (int arg) {
	asm("_WRITE_INT:");
}
void write (char arg) {
	asm("_WRITE_CHAR:");
}
void write (float arg) {
	asm("_WRITE_FLOAT:");
	asm("\tprintln #0");
	asm("\treturn");
}
void write (char arg[]) {
	asm("_WRITE_STR:");
	asm("\tmov      $0, 0            // $0 = i");
	asm("_WRITE_STR_BEGIN:");
	asm("\tmov      $1, #0[$0]       // $1 = str[i]");
	asm("\tseq      $2, $1, '\\0'     // $2 = (str[i] == 0)");
	asm("\tbrnz _WRITE_STR_END, $2   // if ($2 != false) goto end");
	asm("\tprint    $1               // else print str[i]");
	asm("\tadd      $0, $0, 1        // ++i");
	asm("\tjump _WRITE_STR_BEGIN     // continue");
	asm("_WRITE_STR_END:");
	asm("\tprintln                   // print newline");
	asm("\treturn                    // return");
}
