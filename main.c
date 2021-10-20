#include <stdlib.h>
#include <stdio.h>
#include "fing.h"

int main()
{
    char choice = '0';
    char myAddress[50] = "";
    while (choice != '6')
    {
        printf("\nTools :\n");
        printf("1 : Ping\n2 : Wifi Scanner\n3 : Devices on network Scanner\n4 : Traceroute packets\n5 : DNS Lookup\n6 : Exit\n");
        printf("\n===============================");
        printf("\nWhich tool do you want to use ? ");
        choice = getchar();
        emptyBuffer();

        switch (choice)
        {
            case '1':
                printf("What is your target : ");
                scanf("%s", &myAddress);
                thePing(myAddress);
                emptyBuffer();
                break;
                
            case '2':
                theNetworks();
                emptyBuffer();
                break;
                
            case '3':
                theDevices();
                emptyBuffer();
                break;
                
            case '4':
                printf("What is your target : ");
                scanf("%s", &myAddress);
                theRoute(myAddress);
                emptyBuffer();
                break;
        
            case '5':
                printf("What is your IP target : ");
                scanf("%s", &myAddress);
                theDNS(myAddress);
                emptyBuffer();
                break;
                
            case '6':
                printf("\n======== PROGRAM ENDED ========\n");
                break;

            default:
                printf("\nERROR : your choice is not valid ! ");
        }
    }
    return 0;
}
