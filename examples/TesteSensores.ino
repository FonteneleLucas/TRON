#include <Tron.h>
/**
 * EXEMPLO DE TESTE SENSORES BIBLIOTECA TRON *
 */

//Define a instância do objeto
Tron tron;

int sensores[] = {1, 2, 3, 4, 5};

void setup() {
  tron.sensores(5, sensores);
  tron.inicializaSensores();
}

void loop() {
  tron.exibirSensores();//Exibe todos os sensores
  
  Serial.print(tron.lerSensor(0)); //Retorna o valor do sensor individualmente pelo index
  Serial.print("\t");
  Serial.println(tron.lerSensor(0));
}
