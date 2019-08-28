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
	int mid = size / 2;
	int left = mid - 1;
	int right = mid;
	int search = 0;

	if (mx_strcmp(arr[size - 1], s) < 0)
		return -1;

	else if (mx_strcmp(arr[size - 1], s) == 0) {
		return size - 1;
	}
	else {
		search+= 1;
		if (mx_strcmp(arr[left], s) == 0) {
			//search = 1;
			//left = 4;
			*count = search;
			return left;
		}
		else if (mx_strcmp(arr[left], s) > 0) {
			left = left / 2;
			// left == 2;
			search+= 1;
			//search = 2;
			if (mx_strcmp(arr[left], s) == 0) {
				*count = search;
				return left;
			}
			else if (mx_strcmp(arr[left], s) > 0) {
				left = left / 2;
				// left == 1;
				search+= 1;
				//search = 3;
				if (mx_strcmp(arr[left], s) == 0) {
					*count = search;
					return left;
				}
				else if (mx_strcmp(arr[left], s) > 0) {
					left = left / 2;
					//left = 0;
					search+= 1;
					//search = 4;
					if (mx_strcmp(arr[left], s) == 0) {
						*count = search;
						return left;
					}
				}
			}
		}
		else {
			mid = mid + mid / 2;
			//printf("%i\n", mid);
			//printf("%s\n", arr[mid]);
			search+= 1;

			if (mx_strcmp(arr[mid],s) == 0) {
				*count = search;
				return mid;
			}
//			else if (mx_strcmp(arr[mid], s) > 0) {
//				search+= 1;
//				mid = 
//			}
			else 
				return 911;
		}
	}
}

int main(){
	char a[] = "AAAA";
	char b[] = "B";
	int count = 0;
	int size = 10;
	char* text = "7";
	char * massiv_sliv[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

	printf("%i\n", mx_binary_search(massiv_sliv, size, text, &count));
	printf("%i\n", count);
}
