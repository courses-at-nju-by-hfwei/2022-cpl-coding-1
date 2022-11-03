//
// Created by hfwei on 2022/11/3.
// Visualization of function call: https://pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20Min%28int%20a,%20int%20b%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20a%20%3D%2025%3B%0A%20%20int%20b%20%3D%2037%3B%0A%20%20%0A%20%20int%20min%20%3D%20Min%28a,%20b%29%3B%0A%20%20printf%28%22%25d%22,%20min%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0Aint%20Min%28int%20a,%20int%20b%29%20%7B%0A%20%20return%20a%20%3E%20b%20%3F%20b%20%3A%20a%3B%0A%7D&cumulative=false&heapPrimitives=nevernest&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
//

#include <stdio.h>

int Min(int a, int b);

int main() {
	int a = 25;
	int b = 37;

	int min = Min(a, b);
	printf("%d", min);

	return 0;
}

int Min(int a, int b) {
	return a > b ? b : a;
}