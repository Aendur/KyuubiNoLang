int main(int argc /*, char** argv*/) {
	// handle cmd line arguments
	if (argc < 2) {
		fprintf(stderr, "Missing input file.\n");
		return 0;
	} else {
		if ((yyin = fopen(argv[1], "r")) == NULL) {
			fprintf(stderr, "Failed to open file %s.\n", argv[1]);
			return 0;
		}
	}

	/*
	// run the scanner
	scan();
	// close input file
	fclose(yyin);*/
	return 0;
}