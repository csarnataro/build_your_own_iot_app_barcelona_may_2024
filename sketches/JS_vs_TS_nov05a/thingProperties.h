// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onJsPercentageChange();
void onTsPercentageChange();
void onButtonPushCounterJSChange();
void onButtonPushCounterTSChange();

float jsPercentage;
float tsPercentage;
int buttonPushCounterJS;
int buttonPushCounterTS;

void initProperties(){

  ArduinoCloud.addProperty(jsPercentage, READWRITE, ON_CHANGE, onJsPercentageChange);
  ArduinoCloud.addProperty(tsPercentage, READWRITE, ON_CHANGE, onTsPercentageChange);
  ArduinoCloud.addProperty(buttonPushCounterJS, READWRITE, ON_CHANGE, onButtonPushCounterJSChange);
  ArduinoCloud.addProperty(buttonPushCounterTS, READWRITE, ON_CHANGE, onButtonPushCounterTSChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);