//
// Created by hfwei on 2022/12/8.
//

#include <stdio.h>
#include <string.h>

typedef enum gender {
  MALE, FEMALE,
} Gender;

typedef struct score {
  int c_score;
  int java_score;
  int python_score;
} Score;

// tag
typedef struct musician {
  char *name;
  Gender gender;
  char *album;

  Score score;
} Musician;

void PrintMusician(const Musician m);

int main() {
  printf("sizeof Musician : %zu\n", sizeof(Musician));

  Musician luo = {
      .name = "luo dayou",
      .gender = MALE,
      .album = "ZhiHuZheYe",
      .score = { 10, 20, 30 }
      // .score.c_score = 10,
      // .score.java_score = 20,
      // .score.python_score = 30,
  };

  Musician cui = {
      .name = "cui jian",
      .gender = MALE,
      .album = "XinChangZhengLuShangDeYaoGun",
      .score.c_score = 20,
      .score.java_score = 30,
      .score.python_score = 40,
  };

  char album[] = "YiKeBuKenMeiSuDeXin";
  Musician zhang = {
      .name = "zhang chu",
      .gender = MALE,
      .album = album,
      .score.c_score = 20,
      .score.java_score = 30,
      .score.python_score = 40,
  };

  Musician guo = zhang;
  guo.name = "guo";
  strcpy(guo.album, "YiKeMeiSuDeXin");
  PrintMusician(guo);
  PrintMusician(zhang);

  return 0;
}

void PrintMusician(const Musician m) {
  printf("\n%s\t%d\t%s\t%d\t%d\t%d\n",
         m.name,
         m.gender,
         m.album,
         m.score.c_score,
         m.score.java_score,
         m.score.python_score);
}