#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printAr(int numAr[],int numArSize);
int checkNum(int numAr[],int numArSize);
int searchNum(int numAr[],int numArSize);

int random1to100();
int target = 0;

int main() {
    int N,i,j,rnum,numok;
    int A[100];
    scanf("%d",&N);
    if (N > 100) 
        N = 100;
    srand(time(NULL));
    for (i=0;i<N;i++) {
        rnum = checkNum(A,i);
        j = i-1;
        while (j >= 0 && A[j] > rnum)  {
        	A[j + 1] = A[j];
        	j--;
			}
        }
        A[j + 1] = rnum;
    }
    for (i=0;i<N;i++)
        printf("%d ",A[i]);
      
    return 0;
}

int random1to100() {
    int random_num = (rand() % 100) + 1;
    printf("%d", random_num);
    return random_num;
}

void printAr(int numAr[],int numArsize){
	int i;
	for (i = 0; i< numArsize; i++){
		printf("%d", numAr[i]);
	}
	printf("\n")
}
int checkNum(int numAr[],int numArSize){
	int rnum , found;
	while(1){
		rnum = random1to100();
		target = rnum;
		found = searchNum(numAr,numArsize);
		if (found == -1){
			return rnum;
		}
	}
}
int searchNum(int numAr[],int numArSize){
	int left = 0,right = numArsize - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(numAr[mid] == target) return mid;
		########## not finish #############

	}
}

