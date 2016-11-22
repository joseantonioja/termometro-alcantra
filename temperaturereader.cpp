//Comandos necesarios para leer el arduino
//sudo chmod a+rw /dev/tty/ACM0
//sudo usermode -a -G dialout <user>
#include "temperaturereader.h"
#include <stdio.h>
#include <iostream>
#include <QList>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QByteArray>
#include <QString>
TemperatureReader::TemperatureReader(QObject* parent)
    : QThread(parent)
{
    std::cout << "Nuevo hilo"<<std::endl;
}

void TemperatureReader::run(){
    /*QSerialPort arduino("/dev/ttyACM0");
    arduino.setBaudRate(QSerialPort::Baud9600);
    arduino.setDataBits(QSerialPort::Data8);
    arduino.setParity(QSerialPort::NoParity);
    arduino.setStopBits(QSerialPort::OneStop);
    arduino.setFlowControl(QSerialPort::NoFlowControl);
    arduino.open(QIODevice::ReadOnly);
    QString characters;
    if(arduino.isOpen() && arduino.isReadable()){
        characters = "";
        std::cout << "Si se pudo"<<std::endl;
        while(true){
            arduino.waitForReadyRead(1000);
            QByteArray direct = arduino.readLine(4);
            if(QString(direct).contains("\n")){
                if(QString(direct) != "\n"){
                    characters += QString(direct);
                    characters.remove(QRegExp("[\\n\\t\\r]"));
                    characters = characters.right(4);
                    emit new_read(characters.toInt());
                    characters = "";
                }
            }
            else{
                characters +=  QString(direct);
            }
        }
    }
    else{
        emit new_read(-1);
    }*/
    //Ejemplo de su uso
    for(int i=0; i<=1023; i+=50){
        emit new_read(i);
        sleep(1);
    }

}

