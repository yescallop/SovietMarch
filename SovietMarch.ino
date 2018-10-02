#define PLAYER_OUTPUT A0
#define DELAY_BETWEEN_BEATS 0

#include "score.h"
#include "player.h"

void setup() {
  pinMode(PLAYER_OUTPUT, OUTPUT);
}

void loop() {
  play(5, 126, n1, o1, d1);
  play(8, 126, n2, o2, d2);
  play(8, 126, n3, o3, d3);
  play(8, 126, n2, o2, d2);
  play(8, 126, n4, o4, d4);
}
