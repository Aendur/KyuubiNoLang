int add (int x, int y) { return x + y; }
int add (int x, int y, int z) { return x + y + z; }
int add (int x, int y, int z, int w) { return x + y + z + w; }

//float add(float x) {
//	x = 3.0;
//}

void add(float x, float y) {
	x + y;
}

int main (void) {
	int a = add(1, 2);
	int b = add(1, 2 ,3);
	int c = add(1, 2 ,3, 4);
	return add(add(a,b),add(a,b,c), 5,6);
}

