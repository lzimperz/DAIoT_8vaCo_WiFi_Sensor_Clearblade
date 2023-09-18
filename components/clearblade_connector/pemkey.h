/*
 * pemkey.h
 *
 *  Created on: Jul 16, 2020
 *      Author: leopoldo
 */

#ifndef MAIN_PEMKEY_H_
#define MAIN_PEMKEY_H_

/*
 * Clave PRIVADA del dispositivo registrado en Google Cloud Platform - IotCore
 * https://cloud.google.com/iot/docs/how-tos/credentials/keys
 *
 * Crear claves publica y privada para cada dispositivo desde la consola de GCP con la herramienta OPENSSL
 * 
 * openssl req -x509 -nodes -newkey rsa:2048 -keyout rsa_lz_private.pem -out rsa_lz_cert.pem -subj "/CN=unused" -days 36500 
 *  
 * rsa_private.pem: The private key that must be securely stored on the device and used to sign the authentication JWT.
 * rsa_public.pem: The public key that must be stored in Cloud IoT Core and used to verify the signature of the authentication JWT.
 */

const char GCP_PEM_KEY[] =

"-----BEGIN PRIVATE KEY-----\n"
"MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQC2+p7To9IKugEL\n"
"n5cvp7bBpg1yyvHYP5GMlPmDEnXPdXzMEPFrHzR5QBZfQ6T19nip6olz5LGfAIQY\n"
"mO0floCLMHOlB0ILo1Pn9jfUxMRcUbtJL8a/5Tg0gnjJw8jamiYKi3vzD4EiDxl5\n"
"thX6gcnjlLYeLRB6tSxvsjEjjbM+lhgpuuWWUxW6Bk25hvKQRXcfPP+REwnYFQlH\n"
"6BYZlkjjRWLl1Qt/u+sKTAXVPtBw9PTfe+Hp8JRu84wGwk05+0eU5z8oQCi/DUJg\n"
"8Hil5K7Ed9kHw3jO3lYnmuG+8hGy81kNGvmH40sLHA9/20Rt7AUi1YNgwqwpXywz\n"
"RZ535rt9AgMBAAECggEAMI46/XB4eW44fswfw36e6a5V3UNrf/YGeqbBu313k9Da\n"
"iBBq8AE83HwcM7VwnfCEvppFVWK3m7j4VMqoCfzXKZh257EQXqQ9zM0yrZx1ewYZ\n"
"S+eItz1td8mzod75esDzHVM8VhikLNSS7xBZrrsoRuMcnM9akyVmoFFJ5uRgT1fz\n"
"6FzhyYjA2OZwPrU+aHhtBUMVko165PQJ6UGEBLtixWuxLuhnWyP5cRgoOuWgB/+B\n"
"8xR/CK6QIIIggTUdPlZOWE2pYsjr3RxaDmgJ4e/3XK5QOLBb481RJcmmPxGpJwJd\n"
"YkM7dijSC9jywo4Nl5B6TMcglMIdcFGkkgHvQLf1YQKBgQDpjD1d5pSY3X8sIe0B\n"
"0i4s1DB7jcjQ09Rl/v1k6cSMYqTp5K5SAiMBKERnghLgFpLPjroqNIVjNqE8YPOi\n"
"17Kg8c3CVSkEvvPbxFfd4B1pXxeBykv7BlNE1t/BHiRTu7jjq+SrIBUw65/ogCXg\n"
"uzwfL15bpG1Oo+g2JQt7R3zfVQKBgQDIkdmHiH3vDTQbWUD78ujifZE4osDzIhdo\n"
"i/JQLTj6EL7+XHeUPYenI+ioL8lI5qUQmGxPGpjT78qEPP1s2LrIIaZG1ryK6MOy\n"
"cHagP7VhrcZ8cCtk0MEMLSt40kPebcNSWduPWHKc1DwvEqgBrnJXEoxgZUhGrxAc\n"
"wqGSp/BbiQKBgEssl+gsuzIFQdULyoUmiTRmzIBIoBYPyTNXg2rDED/71Idw02eU\n"
"Rn4t3u7OYJL+0Ry8HVJOe4z23alYr7N/6ICDtK5TyRM8/7OCnKHPbMgpEqD1Y8WW\n"
"QKFM5NL9h8XoC9hE0SL//bI0ddFZxldzDSQglCe9Ym3ItosPG4X/+cLNAoGBAK/4\n"
"Xqzt0OeaYvwXq88hSLfmSTIygS0P3Q/JsPgtJQ8pABk00WlLLqgy9h4Rhv0h9vJ/\n"
"eI9Sm4FeogSxaftEj2OlOjhukI8jNwdoanugSagAieOFmlziVm0zeC+R8x/El5i5\n"
"48t5Y107S+5U5PhMsF66lFTCp830LCO/k3iTRWtZAoGAEhIXbwe2rahwQBrkjiDT\n"
"shuijsa41onY7cgWdx1PMqAb8BX+/4HHF1ZeRjhiCjsckpKSDVCadGzG++rk8pDf\n"
"c+f+qovkhN+ECzuihGUy0xALQD+QYsuMST8urwFolUkvvFnRFxxLuNVEkemmPSNH\n"
"NvFiky7tlEn9CfDEOZsRvg0=\n"
"-----END PRIVATE KEY-----\n";

#endif /* MAIN_PEMKEY_H_ */
