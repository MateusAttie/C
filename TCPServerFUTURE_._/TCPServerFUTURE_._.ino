/**
 * @example TCPServer.ino
 * @brief The TCPServer demo of library WeeESP8266. 
 * @author Wu Pengfei<pengfei.wu@itead.cc> 
 * @date 2015.02
 * 
 * @par Copyright:
 * Copyright (c) 2015 ITEAD Intelligent Systems Co., Ltd. \n\n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version. \n\n
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "ESP8266.h"
#include <SoftwareSerial.h>
#define SSID        "teste"
#define PASSWORD    "teste123"
SoftwareSerial Serial1(10,11);
ESP8266 wifi(Serial1);
// motor one
int in1 = 9;
int in2 = 8;
// motor two
int in3 = 7;
int in4 = 6;
void setup(void)
{
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    Serial.begin(9600);
    Serial.print("setup begin\r\n");
    pinMode(13, OUTPUT);
    Serial.print("FW Version:");
    Serial.println(wifi.getVersion().c_str());
      
    if (wifi.setOprToStationSoftAP()) {
        Serial.print("to station + softap ok\r\n");
    } else {
        Serial.print("to station + softap err\r\n");
    }
 
    if (wifi.joinAP(SSID, PASSWORD)) {
        Serial.print("Join AP success\r\n");
        Serial.print("IP: ");
        Serial.println(wifi.getLocalIP().c_str());    
    } else {
        Serial.print("Join AP failure\r\n");
    }
    
    if (wifi.enableMUX()) {
        Serial.print("multiple ok\r\n");
    } else {
        Serial.print("multiple err\r\n");
    }
    
    if (wifi.startTCPServer(8090)) {
        Serial.print("start tcp server ok\r\n");
    } else {
        Serial.print("start tcp server err\r\n");
    }
    
    if (wifi.setTCPServerTimeout(0)) { 
        Serial.print("set tcp server timout 0 seconds\r\n");
    } else {
        Serial.print("set tcp server timout err\r\n");
    }
    
    Serial.print("setup end\r\n");
}
 
void loop(void)
{
    uint8_t buffer[128] = {0};
    uint8_t mux_id;
    uint32_t len = wifi.recv(&mux_id, buffer, sizeof(buffer), 100);
    if (len > 0) {
        Serial.print("Status:[");
        Serial.print(wifi.getIPStatus().c_str());
        Serial.println("]");
        String a = "";
        Serial.print("Received from :");
        Serial.print(mux_id);
        Serial.print("[");
        for(uint32_t i = 0; i < len; i++) {
           Serial.print((char)buffer[i]);
           a+=(char)buffer[i];
        }
        Serial.print("]\r\n");
        if(a.indexOf("stop") >= 0){
          digitalWrite(13,LOW);
          digitalWrite(in1, LOW);
          digitalWrite(in2, LOW);  
          digitalWrite(in3, LOW);
          digitalWrite(in4, LOW);
          }
        else if(a.indexOf("front") >= 0){
          digitalWrite(13,HIGH);
          digitalWrite(in1, LOW);
          digitalWrite(in2, HIGH);  
          digitalWrite(in3, LOW);
          digitalWrite(in4, HIGH); 
          }
        else if(a.indexOf("left") >= 0){
          digitalWrite(13,HIGH);
          digitalWrite(in1, HIGH);
          digitalWrite(in2, LOW);  
          digitalWrite(in3, LOW);
          digitalWrite(in4, HIGH);
          }
        else if(a.indexOf("right") >= 0){
          digitalWrite(13,HIGH);
          digitalWrite(in1, LOW);
          digitalWrite(in2, HIGH);  
          digitalWrite(in3, HIGH);
          digitalWrite(in4, LOW);
          }
        else if(a.indexOf("back") >= 0){
          digitalWrite(13,HIGH);
          digitalWrite(in1, HIGH);
          digitalWrite(in2, LOW);  
          digitalWrite(in3, HIGH);
          digitalWrite(in4, LOW);
          }
        /*if (wifi.releaseTCP(mux_id)) {
            Serial.print("release tcp ");
            Serial.print(mux_id);
            Serial.println(" ok");
        } else {
            Serial.print("release tcp");
            Serial.print(mux_id);
            Serial.println(" err");
        }
        */
        Serial.print("Status:[");
        Serial.print(wifi.getIPStatus().c_str());
        Serial.println("]");
    }
}
        
