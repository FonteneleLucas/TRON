/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tron.cpp
 * Author: lucas
 * 
 * Created on September 7, 2019, 4:19 PM
 */


#include "Tron.h"

Tron::Tron() {
}

/**
 * Inicializa motores: (int EF, int ET, int DF, int DT);
 * @param EF
 * @param ET
 * @param DF
 * @param DT
 */
void Tron::motores(int EF, int ET, int DF, int DT) {
    pinMotors[0] = EF;
    pinMotors[1] = ET;
    pinMotors[2] = DF;
    pinMotors[3] = DT;
}

/**
 * Deve ser chamado no SETUP
 */
void Tron::inicializaMotores() {
    for (int i = 0; i < sizeof (pinMotors); i++) {
        pinMode(pinMotors[i], OUTPUT);
    }
}

void Tron::teste() {
    frente(100);
    delay(2000);
    tras(100);
    delay(2000);
    curvaEsq(100);
    delay(1000);
    curvaDir(100);
    delay(1000);
    parar();
}

void Tron::frente(int _velocidade) {
    andar(_velocidade, _velocidade);
}

void Tron::tras(int _velocidade) {
    andar(_velocidade, _velocidade);
}

/**
 * 
 */
void Tron::parar() {
    andar(0, 0);
}

/**
 * Andar(esquerda, direita);
 * @param left
 * @param right
 */
void Tron::andar(int left, int right) {
    /*analogWrite(pinMotors[0], (left >= 0) ? left : 0);
    analogWrite(pinMotors[1], (left <= 0) ? -(left) : 0);
    analogWrite(pinMotors[2], (right >= 0) ? right : 0);
    analogWrite(pinMotors[3], (right <= 0) ? -(right) : 0);*/

}

/**
 * Curva acentuada Esquerda (inverte rotação das rodas) indicado para curvas de 90º
 * @param velocidade
 */
void Tron::curvaEsq(int velocidade) {
    andar(-velocidade, velocidade);
}

/**
 * Curva acentuada Direita (inverte rotação das rodas) indicado para curvas de 90º
 * @param velocidade
 */
void Tron::curvaDir(int velocidade) {
    andar(velocidade, -velocidade);
}

/**
 * Curva de ajuste Esquerda
 * @param velocidade
 * @param ajuste (taxa de ajuste das rodas)
 */
void Tron::curvaLeveEsq(int velocidade, int ajuste) {
    andar(velocidade - ajuste, velocidade + ajuste);
}

/**
 * Curva de ajuste Direita
 * @param velocidade
 * @param ajuste (taxa de ajuste das rodas)
 */
void Tron::curvaLeveDir(int velocidade, int ajuste) {
    andar(velocidade + ajuste, velocidade - ajuste);
}

//void Tron::showMotores() {
//    printf("EF = %d, ET = %d, DF = %d, DT = %d\n", pinMotors[0], pinMotors[1], pinMotors[2], pinMotors[3]);
//
//}

/**
 * Define a configuração dos sensores de linda 
 * @param numero
 * @param arraySensors (OS SENSORES DEVEM SER COLOCADOS NO ARRAY EM ORDEM, É INDICADO QUE SEJA NO PADRAO: ESQUERDA->DIREITA)
 */
void Tron::sensores(int numero, int arraySensors[]) {
    numSensors = numero;
    for (int i = 0; i < numero; i++) {
        sensors[i] = arraySensors[i];
    }
}

/**
 * Deve ser chamado no SETUP
 */
void Tron::inicializaSensores() {
    for (int i = 0; i < numSensors; i++) {
//        pinMode(sensors[i], INPUT);
    }
}

/**
 * Exibi o valor lido pelos sensores 
 */
void Tron::exibirSensores() {
    // printf("| ");
    for (int i = 0; i < numSensors; i++) {
        //        Serial.print(digitalRead(sensors[i]));
        // printf("S%d: %d | ", i, sensors[i]);
    }
}

/**
 * Retorna o valor lido pelo sensor com base no parâmetro passado
 * EXEMPLO: int sensores[] = {A1,A2,A3,A4,A5};
 * Para ler o sensor A1, deve-se passar (0) no parâmetro da função...
 * @param sensor (posição do sensor no array base) 
 * @return 
 */
int Tron::lerSensor(int sensor) {
//    return digitalRead(sensors[sensor])
    return 0;
}

