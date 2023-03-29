#include <stdio.h>

int main() {
  int total_team;
  printf("Jumlah tim : ");
  scanf("%d", &total_team);

  int team_score[total_team][3];
  int total_score[total_team];

  for(int i = 0; i < total_team; i++) {
    printf("Skor tim %d : ", i + 1);
    total_score[i] = 0;
    for(int j = 0; j < 3; j++) {
      scanf("%d", &team_score[i][j]);
      total_score[i] += team_score[i][j];
    }
  }

  // SELECTION SORT
  for(int i = 0; i < total_team; i++) {
    int min = i;
    for(int j = i; j < total_team; j++) {
      if(total_score[j] < total_score[min]) {
        min = j;
      }
    }
    int temp = total_score[i];
    total_score[i] = total_score[min];
    total_score[min] = temp;
  }

  for(int i = 0; i < total_team; i++) {
    printf("%d\n", total_score[i]);
  }
  return 0;
} 