/*
 * mqtt_basico.h
 *
 *  Created on: Mar 21, 2020
 *      Author: leopoldo
 */

#ifndef CLEARBLADE_CONNECT_H_
#define CLEARBLADE_CONNECT_H_

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "stdlib.h"
#include "stdio.h"
#include "mqtt_client.h"

/* FreeRTOS event group - Clearblade client state   */
/* EventGroupHandle_t mqtt_client_event_group;      */
#define NETWORK_AVAILABLE           BIT0
#define TIME_SYNCHRONIZED           BIT1
#define CONNECTED_TO_MQTT_BROKER    BIT3

typedef struct
{
    char* brokerUri;
    char* projectId;
    char* region;
    char* registry;
    char* deviceId;
    char* clientId;
} clearblade_data_t;

/************************************************************************/
/* La siguiente estructura simula un objeto en C                        */
/*                                                                      */
/* Las propiedades estan implementadas comp punteros a variables del .c */
/* Los metodos son punteros a funciones definidas dentro del .c         */
/************************************************************************/
typedef struct
{
    // MQTT Client Props
    EventGroupHandle_t* mqtt_event_group;
    esp_mqtt_client_handle_t* client_handle;
    clearblade_data_t* clearblade_data;
    
    // MQTT Client Functions
    void (*set_clearblade_data)(char* brokerUri, char* projectId, char* region, char* registry, char* deviceId);
    void (*start)(void);
    void (*set_network_available_flag)(bool is_network_available);



    char* (*get_sta_ssid)(void);
    char* (*get_sta_ip)(void);
    void (*set_got_ip_callback)(void* callback);
    void (*set_ap_ip)(char* ip);
} mqtt_client_t;


/************************************************************************/
/* La declaración de esta variable se realiza dentro del .c             */
/*                                                                      */
/* Agregar este "extern" en el archivo de cabecera, permite que         */
/* cualquier .c que lo incluya con #include, tenga acceso al "objeto".  */
/************************************************************************/
extern const mqtt_client_t mqtt_client;

#endif /* CLEARBLADE_CONNECT_H_ */