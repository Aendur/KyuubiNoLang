 int min (int x, int y) { return x; }
 int min (int x, int y, int z) { return y; }
 int main (void) {
 	int a = min(1,2);
 	int b = min(1,2,3);
 	int c = min(1,2,3,4);
 	return (a+b+c);
 }