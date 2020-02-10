//A biblioteca VarSpeedServo permite controlar a velocidade de movimentação do servo motor, o que não é possível com a biblioteca Servo original embutida na IDE do Arduino.
#include <VarSpeedServo.h>

// Etapa para na qual se cria um objeto para cada micro servo motor.
VarSpeedServo servo_1, servo_2, servo_3, servo_4, servo_5, servo_6, servo_7, servo_8, servo_9, servo_10, servo_11, servo_12, servo_13, servo_14;

// Armazena o valor a ser enviado para o seu respectivo micro servo.
int angulo_1, angulo_2, angulo_3, angulo_4, angulo_5, angulo_6, angulo_7, angulo_8, angulo_9, angulo_10, angulo_11, angulo_12, angulo_13, angulo_14;

// Esta função "setup" roda uma vez quando a placa e ligada ou resetada

void setup() {

  // Anexa os servomotores ao endereço físico(o pino, velocidade inicial, velocidade final).
  Serial.begin(9600);
  servo_1.attach(2, 1, 180);
  servo_2.attach(3, 1, 180);
  servo_3.attach(4, 1, 180);
  servo_4.attach(5, 1, 180);
  servo_5.attach(6, 1, 180);
  servo_6.attach(7, 1, 180);
  servo_7.attach(8, 1, 180);
  servo_8.attach(9, 1, 180);
  servo_9.attach(10, 1, 180);
  servo_10.attach(11, 1, 180);
  servo_11.attach(12, 1, 180);
  servo_12.attach(13, 1, 180);
  servo_13.attach(44, 1, 180);
  servo_14.attach(46, 1, 180);

  pinMode(23, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(31, OUTPUT);

  pinMode(33, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(43, OUTPUT);

  pinMode(35, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(53, OUTPUT);

  iniciar();

  Serial.println(" INICIADO ");

}

void loop() {

  if (Serial.available() > 0) {
    switch (Serial.read()) {                                              //RECEBE OS CARACTERES VINDOS PELA SERIAL E FAZ O TRATAMENTO
      case 'A': {                                                         //CASO RECEBA A LETRA "A"

          Serial.println(" TODOS OS MOVIMENTOS ");

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);
          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          break;                                                            //FINALIZA A EXECUÇÃO DO SWITCH
        }

      case 'B': {                                                           //CASO RECEBA A LETRA "B"

          Serial.print(" OI ");
          iniciar();



          break;                                                            //FINALIZA A EXECUÇÃO DO SWITCH
        }

      case 'C': {                                                           //CASO RECEBA A LETRA "C"

          Serial.print(" BOM DIA ");
          delay(5000);

          digitalWrite(51, HIGH);
          digitalWrite(49, HIGH);

          olho_LE();
          sub_sobra_lad_nor();
          delay(2000);

          fecha_palpebras();
          delay(500);
          abrir_palpebras();;

          labio_La_d_MAX(); // AQUI FOI
          labio_La_esq_MIN();

          olho_LD();
          delay(1000);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);


          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);


          Serial.print(" 1 ");

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(500);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(500);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(500);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();

          digitalWrite(53, HIGH);


          sub_sobra_lad_di();
          sub_sobra_lad_es();
          delay(500);
          sobraselha_triste();

          digitalWrite(23, HIGH);
          digitalWrite(47, HIGH);

          labio_La_d_MIN(); // AQUI 2
          labio_La_esq_MAX();

          olho_LE();
          olho_CIMA();
          delay(2000);

          fecha_palpebras();
          delay(500);
          abrir_palpebras();

          Serial.print(" 2 ");
          olho_LD();
          olho_BAIXO();
          delay(2000);

          fecha_palpebras();
          delay(500);
          abrir_palpebras();

          olho_NOR();
          olho_MED();
          delay(1000);

          digitalWrite(41, LOW);
          digitalWrite(53, LOW);
          digitalWrite(51, LOW);
          digitalWrite(49, LOW);

          sobraselha_normal();
          sub_sobra_lad_nor();
          sub_sobra_lad_di();
          sub_sobra_lad_es();
          delay(500);
          sobraselha_raiva();

          digitalWrite(23, HIGH);
          digitalWrite(47, HIGH);

          sobraselha_normal();
          delay(500);
          sub_sobra_lad_nor();
          labio_La_d_NOR();
          labio_La_esq_NOR(); //AQUI 3


          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          pisca_LD();
          delay(1000);

          olho_LE();
          delay(2000);

          olho_LD();
          delay(2000);

          Serial.print(" 3 ");
          olho_LE();
          olho_CIMA();
          delay(2000);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(500);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();

          sub_sobra_lad_nor();
          digitalWrite(23, LOW);
          digitalWrite(47, LOW);

          digitalWrite(51, HIGH);
          digitalWrite(49, HIGH);
          digitalWrite(53, HIGH);
          digitalWrite(41, HIGH);
          sobraselha_normal();

          olho_LD();
          olho_BAIXO();
          delay(1000);

          olho_NOR();
          olho_MED();
          delay(1000);

          pisca_LE();
          delay(1000);
          sub_sobra_lad_nor();
          sobraselha_normal();
          sub_sobra_lad_di();
          rotacao_dir_hora();
          delay(500);
          rotacao_dir_antihora();
          delay(500);

          olho_MED();
          delay(1000);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(500);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();

          labio_La_d_MAX(); // AQUI FOI
          labio_La_esq_MIN();

          olho_CIMA();
          delay(1000);

          fecha_palpebras();
          delay(500);
          abrir_palpebras();

          sub_sobra_lad_nor();
          sobraselha_normal();

          olho_MED();
          delay(1000);

          fecha_palpebras();
          delay(500);
          abrir_palpebras();

          olho_BAIXO();
          delay(1000);

          Serial.print(" 4 ");

          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          labio_La_d_MIN(); // AQUI 2
          labio_La_esq_MAX();

          olho_MED();
          delay(1000);

          olho_NOR();
          delay(1000);

          digitalWrite(23, HIGH);
          digitalWrite(47, HIGH);

          olho_LE();
          delay(2000);

          sub_sobra_lad_nor();
          sobraselha_normal();
          sub_sobra_lad_es();
          rotacao_esq_hora();
          delay(500);
          rotacao_esq_antihora();
          delay(500);

          labio_La_d_NOR();
          labio_La_esq_NOR();

          olho_LD();
          delay(2000);

          olho_NOR();
          delay(1000);

          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          olho_LE();
          delay(1000);

          sub_sobra_lad_nor();
          sobraselha_normal();

          Serial.print(" 5 ");
          olho_LD();
          delay(1000);

          olho_NOR();
          delay(1000);

          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          olho_LE();
          delay(2000);

          olho_NOR();
          delay(1000);

          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          olho_LD();
          delay(2000);

          olho_NOR();
          delay(1000);

          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          olho_LE();
          delay(2000);

          olho_LD();
          delay(2000);

          olho_NOR();
          delay(1000);

          fecha_palpebras();
          delay(1000);
          abrir_palpebras();

          Serial.print(" 6 ");

          sub_sobra_lad_nor();
          sobraselha_normal();
          sub_sobra_lad_di();
          sub_sobra_lad_es();
          sobraselha_raiva();

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          Serial.print(" 7 ");

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(600);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(600);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(500);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();
          delay(500);

          labio_La_esq_MIN();
          labio_La_d_MIN();
          baixa_maxilar();
          delay(500);
          labio_La_d_NOR();
          labio_La_esq_NOR();
          normal_maxilar();

          olho_LE();
          delay(1000);

          olho_LD();
          delay(1000);

          olho_NOR();
          delay(1000);

          Serial.print(" 8 ");

          fecha_palpebras();
          delay(500);
          abrir_palpebras();

          sub_sobra_lad_nor();
          sobraselha_normal();
          delay(1000);

          olho_LE();
          delay(1000);

          olho_LD();
          delay(1000);

          olho_NOR();
          delay(1000);

          fecha_palpebras();
          delay(500);
          abrir_palpebras();

          sub_sobra_lad_nor();
          sobraselha_normal();
          sub_sobra_lad_di();
          sub_sobra_lad_es();
          sobraselha_triste();

          olho_LE();
          delay(1000);

          olho_LD();
          delay(1000);

          olho_NOR();
          delay(1000);

          olho_LE();
          delay(2000);

          olho_LD();
          delay(2000);

          olho_LE();
          olho_CIMA();
          delay(2000);

          Serial.print(" 9 ");

          olho_LD();
          olho_BAIXO();
          delay(2000);

          olho_NOR();
          olho_MED();
          delay(1000);

          sub_sobra_lad_nor();
          sobraselha_normal();
          delay(1000);

          break;                                                             //FINALIZA A EXECUÇÃO DO SWITCH
        }

      case 'D': {                                                           //CASO RECEBA A LETRA "B"

          Serial.print(" MAXILAR ");
          delay(3000);

          sub_sobra_lad_nor();
          delay(3000);
          
          sub_sobra_lad_di();
          delay(3000);

          rotacao_dir_hora();
          delay(3000);
          
          rotacao_dir_antihora();
          delay(3000);
          
          sub_sobra_lad_es();
          delay(3000);

          rotacao_esq_hora();
          delay(3000);
          
          rotacao_esq_antihora();
          delay(3000);

          rotacao_dir_NOR();
          delay(3000);

          sub_sobra_lad_nor();
          delay(3000);
          
          
          
          
          break;                                                            //FINALIZA A EXECUÇÃO DO SWITCH
        }

    }
  }
}
