char main(void) {
	char c = 'c';
	float f = 1.0;
	int i = 2;
//	char s[] = "str";
//	int  v[] = {1, 2, 3};
//	float u[] = {1.0, 2.0, 3.0};

	c = i;
	c = f;
	i = c;
	i = f;
	f = c;
	f = i;

//	c = s;
//	s = c;

	return 0;
}


