#include <stdio.h>
#include <string.h>

int mx_strcmp(char* a,const char* b){
	for (int i = 0; a[i] ||  b[i]; i++){
	       if (a[i] - b[i] != 0)
		       return (a[i] - b[i]);
	}
	return 0;
}

int mx_binary_search(char **arr, int size, const char *s, int *count){
	int mid = size;
	int left_border = mid;
	int right_border = mid;

	if (mx_strcmp(arr[left_border - 1], s) < 0)
		return -1;
	else if (mx_strcmp(arr[left_border - 1],s) == 0) {
		count = count + 1;
		return (left_border -1);
	}
	else {
		mid = mid / 2;
		left_border = mid - 1;
		if (mx_strcmp(arr[left_border], s) < 0) {
			left_border = mid;
			right_border = size;
		}
	}
}

int main(){
	char a[] = "AAAA";
	char b[] = "B";
	int count = 0;
	int size = 6;
	char* text = "z";
	char * massiv_sliv[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
	printf("%i, count = %i\n", mx_binary_search(massiv_sliv, size, text, &count), count);
}
