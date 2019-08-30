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
	int search = 0;
	int mid;
	mid = (start + end) / 2;
	/*if (mx_strcmp(arr[mid],s) == 0){
		search+= 1;
		*count = search;
		return mid;
	}*/
	if (mx_strcmp(arr[size - 1],s) >= 0) {
		while (end > start) {
			search++;
			*count = 2121;
			if (mx_strcmp(arr[mid],s) == 0) {
				*count = 911;
				return mid;
			}
			else if (mx_strcmp(arr[mid],s) < 0) {
				start = mid + 1;
				mid = (start + end) / 2;
			}
			else {
				end = mid -1;
				mid = (start + end) / 2;
			}
		}
	}
	else
		return -1;

}

int main(){
	char a[] = "AAAA";
	char b[] = "B";
	int count = 0;
	int size = 7;
	char* text = "6";
	char * massiv_sliv[7] = {"0", "1", "2", "3", "4", "5", "6"};

	int answer;
	answer = mx_binary_search(massiv_sliv, size, text, &count);
	mx_binary_search(massiv_sliv, size, text, &count);

	printf("%i\n%i\n", answer, count);
	int len = sizeof(massiv_sliv) / sizeof(massiv_sliv[0]);
}
