#include<stdio.h>
#include "calculator.h"

void test_add();

int main() {

	test_add();
	return 0;
}


void test_add() {

 int result = add(5,7);
 if (result == 12) {
        printf("Add test case passed\n");
    } else {
        printf("Add test case failed\n");
    }
}

void test_subtract() {
  int result = subtract(3,1);
  if (result == 12) {
        printf("Subtract test case passed\n");
    } else {
        printf("Subtract test case failed\n");
    } 
}
