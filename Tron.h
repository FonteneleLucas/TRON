/*
 * TRON *
 */

/* 
 * File:   Tron.h
 * Author: Lucas Fontenele
 *
 * Created on September 7, 2019, 4:19 PM
 */

#ifndef TRON_H
#define TRON_H

#if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

class Tron {
public:
    Tron();
    void motores(int EF, int ET, int DF, int DT);
    void inicializaMotores();
    void inicializaSensores();
    void teste();
    void frente(int _velocidade = 100);
    void tras(int _velocidade = 100);
    void parar();
    void curvaEsq(int _velocidade = 100);
    void curvaDir(int _velocidade = 100);
    void curvaLeveEsq(int _velocidade = 100, int ajuste = 20);
    void curvaLeveDir(int velocidade = 100, int ajuste = 20);
    void andar(int left, int right);
    
    //SENSORES
    void sensores(int numero, int arraySensors[]);
    void exibirSensores();
    int lerSensor(int sensor);

private:
    int pinMotors[4];
    int sensors[];
    int numSensors;



    /* - - - - - TESTES - - - - -*/


};

#endif /* TRON_H */

