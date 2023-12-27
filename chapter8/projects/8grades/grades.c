#include <stdio.h>
#define LENGTH 5

int main(void) {
  int array2D[LENGTH][LENGTH];
  int studentSumArr[LENGTH] = {0};
  int quizSumArr[LENGTH] = {0};
  int lowScoreArr[LENGTH] = {100, 100, 100, 100, 100};
  int highScoreArr[LENGTH] = {0};


  for (int i = 0; i < LENGTH; i++) {
    printf("Enter quiz %d: ", i + 1);
    for (int j = 0; j < LENGTH; j++) {
      scanf("%d", &array2D[i][j]);
      quizSumArr[i] += array2D[i][j];
      // if quiz has lower score, set quiz array for that row to the low score
      if (array2D[i][j] < lowScoreArr[i]) {
        lowScoreArr[i] = array2D[i][j];
      }

      // repeat the inverse for high score
      if (array2D[i][j] > highScoreArr[i]) {
        highScoreArr[i] = array2D[i][j];
      }

      studentSumArr[j] += array2D[i][j];
    }
  }

  printf("Quiz high score, low score, and average score: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("\nQuiz %d: ", i);
    printf("%d ", highScoreArr[i]);
    printf("%d ", lowScoreArr[i]);
    printf("%.2f ", (double)quizSumArr[i] / LENGTH);
  }

  printf("\nStudent total score and average score: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("\nStudent %d: ", i);
    printf("%d ", studentSumArr[i]);
    printf("%.2f ", (double)studentSumArr[i] / LENGTH);
  }

  return 0;
}
