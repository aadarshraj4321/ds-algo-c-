#include<stdio.h>



int main() {

	int att, avg_score;
	char project[20];
	scanf("%d %d %s", &att, &avg_score, &project);
	
	((att > 90) && (avg_score > 450) && (project == 'no')) ? printf("A"): printf("");

	((att > 80 || att < 90) && (avg_score > 300 || avg_score < 500) && (project == "yes"))? printf("B"):printf("");

	((att > 80 || att < 90) && (avg_score > 350 || avg_score < 450) && (project == "no")) ? printf("B"):printf("");

	((att > 70 || att < 79) && (avg_score > 200 || avg_score < 290) && (project == "yes")) ? printf("B"):printf("");

	((att < 80) && (avg_score < 350) && (project == "no")) ? printf("C"):printf("");

	((att < 70) && (avg_score < 200) && (project == "yes")) ? printf("C"):printf("");

	return 0;
}