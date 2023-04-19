#include <stdio.h>
#include <math.h>

int main() {
	printf("Input height(cm) and weight(g):");
	float height, weight;
	scanf("%f", &height);
	scanf("%f", &weight);
	
	float log_calc = log (weight) / log(10);
	
	float bsa = 0.0003207 * pow(height, 0.3) * pow(weight, (0.7285- 0.0188 *  log_calc));
	printf("\nBSA: %.2f\n", bsa);
	return 0;
}
