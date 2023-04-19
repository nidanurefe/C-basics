#include <stdio.h>
#include <stdlib.h>


int main() {
	int nums1[5]= {1,4,9,16};
	int nums2[5];
	int i;
	for (i=0; i<sizeof(nums1)/sizeof(int)-1; i++) {
		nums2[i] = nums1[i];
		printf("%d ", nums2[i]);
	}

	
	return 0;
}
