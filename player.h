const byte majors[] = {0, 2, 4, 5, 7, 9, 11};

// Notes
// C  C# D  D# E  F  F# G  G# A  A#  B
//    Db    Gb       Gb    Ab    Bb
// 0  1  2  3  4  5  6  7  8  9  10  11
void buzz(byte tonic, byte note, char octave, float duration, byte staccato) {
  if (note == 0) {
    delay(duration);
    return;
  }
  int f = 440 * pow(2, (majors[note - 1] + tonic - 9) / 12.0 + octave);
  tone(PLAYER_OUTPUT, f, duration / staccato - DELAY_BETWEEN_BEATS);
  delay(duration);
}

/** Plays a piece of music
 *  n: A char* for notes
 *  o: A char* for octaves
 *  d: A byte* for durations
 *  tonic: The tonic of the music
 */
void play(byte tonic, int bpm, char* n, char* o, byte* d) {
  float fullDuration = 60000.0 / bpm;
  int signs = 0;
  byte sharp = 0;
  byte staccato = 1;
  for (int i = 0; i < strlen(n); i++) {
    if (n[i] == '#') {
      sharp = 1;
      signs++;
    } else if (n[i] == 'b') {
      sharp = -1;
      signs++;
    } else if (n[i] == 'V') {
      staccato = 2;
      signs++;
    } else if (n[i] == 'v') {
      staccato = 4;
      signs++;
    } else {
      buzz(tonic + sharp,
        n[i] - 48,
        o[i - signs],
        fullDuration * durations[d[i - signs]],
        staccato);
      sharp = 0;
      staccato = 1;
    }
  }
}
