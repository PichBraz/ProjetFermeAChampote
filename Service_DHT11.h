
#ifndef __DHT11
#define __DHT11

#include <Arduino.h>
#include "DHT.h"//bib du DHT, merci l'open source
#include <iostream>
#include <stdio.h>



extern DHT dht;  // Declare the variable


using namespace std;

class DHT11{
  private:

  public:
  virtual float GetData();
  DHT11();

};

#endif