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
	int start = 0;
	int end = size - 1;
	int mid;
	mid = (start + end) / 2;

	if (strcmp(arr[size - 1],s) >= 0) {
		while (end >= start) {
			(*count)++;			
			if (strcmp(arr[mid],s) == 0)
				return mid;
			else if (strcmp(arr[mid],s) < 0)
				start = mid + 1;
			else if (strcmp(arr[mid],s) > 0)
				end = mid -1;
			mid = (start + end) / 2;
		}
	}

	if (&count > 0)
		*count = 0;
	return -1;

}

int main(){
	int count = 0;
	int size = 5;
	char* text = "e";
	char * massiv_sliv[5] = {"a", "b", "c", "d", "j"};

	int answer;
	answer = mx_binary_search(massiv_sliv, size, text, &count);

	printf("%i\n%i\n", answer, count);
	return 0;

}
