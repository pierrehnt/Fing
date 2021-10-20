//
//  fing.c
//  Interview
//
//  Created by Pierre Hannart on 10/20/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fing.h"

void thePing(char* address)
{
    char ad[50], command[50];
    strcpy(ad, address);
    strcpy(command, "ping -c 5 ");
    strcat(command, ad);
    system(command);
}

void theNetworks()
{
    printf("\nHere are the networks nearby you :\n");
    system("airport -s");
}

void theDevices()
{
    printf("\nHere are the devices connected to the same network as you :\n");
    system("arp -a");
}

void theRoute(char* address)
{
    char ad[50], command[50];
    strcpy(ad, address);
    strcpy(command, "traceroute ");
    strcat(command, ad);
    system(command);
}

void theDNS(char* address)
{
    char ad[50], command[50];
    strcpy(ad, address);
    strcpy(command, "curl https://ipinfo.io/");
    strcat(command, ad);
    system(command);
    printf("\n");
}

void emptyBuffer()
{
    char c;
    do
    {
        c = getchar();
    }
    while (c != '\n' && c != EOF);
}
