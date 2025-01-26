//Enum with typedef.
#include <stdio.h>

typedef enum 
{
    CONNECTED,
    DISCONNECTED,
    ERROR
} ConnectionState;

void checkConnection(ConnectionState state) 
{
    switch (state) 
    {
        case CONNECTED:
            printf("Device is connected\n");
            break;
        case DISCONNECTED:
            printf("Device is disconnected\n");
            break;
        case ERROR:
            printf("Connection error\n");
            break;
    }
}

int main() 
{
    ConnectionState state = CONNECTED;
    checkConnection(state);
    return 0;
}

