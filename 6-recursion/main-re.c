//
// Created by hfwei on 2022/11/1.
//
// You can even call `main` in the `main` function.
// WARNING: Do not write code like this!!!
//

#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc == 1) {
		return 0;
	}

	printf("%s", argv[argc - 1]);

	main(argc - 1, argv);

	return 0;
}