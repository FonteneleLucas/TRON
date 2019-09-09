#include <Tron.h>
/**
 * EXEMPLO DE TESTE MOTORES BIBLIOTECA TRON *
 */

//Define a instância do objeto
Tron tron;

int velocidade = 120;

void setup() {
  tron.motores(4, 5, 7, 6); // EF, ET, DF, DT
  tron.inicializaMotores();
}

void loop() {
  tron.teste(); //Função de teste: frente, trás, esquerda, direita

  tron.frente(velocidade); //Parâmetro de velocidade opcional (100 default)
  delay(2000);
  
  tron.tras(velocidade);
  delay(2000);
  
  tron.curvaEsq(velocidade);
  delay(1000);
  tron.curvaDir(velocidade);
  
  delay(1000);
  tron.parar();

  tron.curvaLeveDir(velocidade, 20); //Velocidade, ajuste de curva; (default-> Velocidade:100, ajuste: 20)
  delay(1000);
  tron.curvaLeveEsq(velocidade, 20); //Pode ser chamado por default: tron.curvaLeveEsq();
  delay(1000);

  

}
