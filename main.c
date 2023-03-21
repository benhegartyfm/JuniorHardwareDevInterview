#include <stdio.h>
#include <stdint.h>

uint8_t received_packet[] = { 0x00, 0x01, 0x02, 0x04, 0x03 };
uint8_t expected_packet[] = { 0x00, 0x01, 0x02, 0x03, 0x04 };

// Extension activity: checksum function decliration.
uint8_t calc_checksum(uint8_t* data, uint8_t data_length) {
    // ...
    
    return 0;
}

int main(void)
{
    // Log received packet
    printf("Received packet: ");
    for (uint8_t i = 0; i < sizeof(received_packet); i++) {
        printf("%02x ", received_packet[i]);
    }
    printf("\n");

    // Log expected packet
    // ...

    // Log received packet again, highlighting incorrect bytes
    // ...

    // Extension/discussion: Implement a simple checksum function 
    // Compare the packets using the checksums
    // ...

    return 0;
}