#include<stdio.h>
int checkscore(char std[]){
    char key[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int score = 0;
    for(int i = 0;i < 10;i++){
        if(key[i] == std[i]){
            score++;
        }
    }
    return score;
}

int ansone(char std[][10]){
    char key[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int people = 0;
    for(int i = 0;i < 8;i++){
        if(key[0] == std[i][0]){
            people++;
        }
    }
    return people;
}

int main(){
    int i,j;
    char ans[][10] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };

    for(int i = 0;i < 8;i++){
        printf("std %d -> %d\n",(i),checkscore(ans[i]));
    }
    printf("std_ansNO.1 -> %d\n",(ansone(ans)));
}
