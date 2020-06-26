#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262


// 旋律中的音符
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// 音符时值: 4 = 四分音符, 8 = 八分音符,等等:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  // 重复旋律的音符
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // 用一秒的时间来计算音符持续时间。
    // 按音符类型划分。
    //例如： 四分音符= 1000 / 4, 八分音符 = 1000/8, 等等。
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // 在音符之间设置最短时间来区分它们。
    // 音符持续时间+ 30% 似乎很有效。
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // 停止弹奏音符。
    noTone(8);
  }
}

void loop() {
  // 不再重复旋律
}