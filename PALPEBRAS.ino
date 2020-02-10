void fecha_palpebras() {
  angulo_1 = 2;
  angulo_2 = 300;
  converte_1();
}

void abrir_palpebras() {
  angulo_1 = 220;
  angulo_2 = 2;
  converte_1();
}

void pisca_LD() {
  angulo_1 = 2;
  angulo_2 = 2;
  
  converte_1();
  delay(100);
  
  angulo_1 = 220;
  angulo_2 = 2;
  converte_1();
}

void pisca_LE() {
  angulo_1 = 220;
  angulo_2 = 300;
  
  converte_1();
  delay(100);
  
  angulo_1 = 220;
  angulo_2 = 2;
  converte_1();
}
