void converte() {

  angulo_1 = map(angulo_1, 0, 1023, 1, 180);
  angulo_2 = map(angulo_2, 0, 1023, 1, 180);
  angulo_3 = map(angulo_3, 0, 1023, 1, 180);
  angulo_4 = map(angulo_4, 0, 1023, 1, 180);
  angulo_5 = map(angulo_5, 0, 1023, 1, 180);
  angulo_6 = map(angulo_6, 0, 1023, 1, 180);
  angulo_7 = map(angulo_7, 0, 1023, 1, 180);
  angulo_8 = map(angulo_8, 0, 1023, 1, 180);
  angulo_9 = map(angulo_9, 0, 1023, 1, 180);
  angulo_10 = map(angulo_10, 0, 1023, 1, 180);
  angulo_11 = map(angulo_11, 0, 1023, 1, 180);
  angulo_12 = map(angulo_12, 0, 1023, 1, 180);
  angulo_13 = map(angulo_13, 0, 1023, 1, 180);
  angulo_14 = map(angulo_14, 0, 1023, 1, 180);

  //Posição e velocidade enviados para o servo motor.
  servo_1.slowmove(angulo_1, 60);
  servo_2.slowmove(angulo_2, 60);
  servo_3.slowmove(angulo_3, 60);
  servo_4.slowmove(angulo_4, 60);
  servo_5.slowmove(angulo_5, 60);
  servo_6.slowmove(angulo_6, 60);
  servo_7.slowmove(angulo_7, 60);
  servo_8.slowmove(angulo_8, 60);
  servo_9.slowmove(angulo_9, 60);
  servo_10.slowmove(angulo_10, 60);
  servo_11.slowmove(angulo_11, 60);
  servo_12.slowmove(angulo_12, 60);
  servo_13.slowmove(angulo_13, 60);
  servo_14.slowmove(angulo_14, 60);

}

void converte_1() {
  angulo_1 = map(angulo_1, 0, 1023, 1, 180);
  angulo_2 = map(angulo_2, 0, 1023, 1, 180);

  servo_1.slowmove(angulo_1, 100);
  servo_2.slowmove(angulo_2, 100);
}

void converte_2() {
  angulo_3 = map(angulo_3, 0, 1023, 0, 180);

  servo_3.slowmove(angulo_3, 10);
}

void converte_3() {
  angulo_4 = map(angulo_4, 0, 1023, 1, 180);

  servo_4.slowmove(angulo_4, 10);
}

void converte_4() {
  angulo_5 = map(angulo_5, 0, 1023, 0, 180);
  angulo_6 = map(angulo_6, 0, 1023, 0, 180);

  servo_5.slowmove(angulo_5, 20);
  servo_6.slowmove(angulo_6, 20);
}

void converte_5() {
  angulo_7 = map(angulo_7, 0, 1023, 0, 180);
  servo_7.slowmove(angulo_7, 20);

}

void converte_5_() {
  angulo_8 = map(angulo_8, 0, 1023, 0, 180);
  servo_8.slowmove(angulo_8, 20);
}

void converte_6() {
  angulo_11 = map(angulo_11, 0, 1023, 0, 180);

  servo_11.slowmove(angulo_11, 120);

}
void converte_7() {
  angulo_10 = map(angulo_10, 0, 1023, 0, 180);

  servo_10.slowmove(angulo_10, 60);
}

void converte_8() {
  angulo_12 = map(angulo_12, 0, 1023, 0, 180);

  servo_12.slowmove(angulo_12, 60);
}

void converte_4_1() {
  angulo_5 = map(angulo_5, 0, 1023, 0, 180);
  servo_5.slowmove(angulo_5, 20);
}
void converte_4_2() {
  angulo_6 = map(angulo_6, 0, 1023, 0, 180);
  servo_6.slowmove(angulo_6, 20);
}
