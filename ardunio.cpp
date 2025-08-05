// Defining Pins
#define TX_DATA 3

const char *message = "Hello World!";

void setup(){
    pinMode(TX_DATA, OUTPUT);

    for (int byte_index = 0; byte_index < strlen(message); byte_index++){
        char tx_byte = message[byte_index];

        // Bit Masking
        for (int bit_index = 0; bit_index < 8; bit_index++){
            bool tx_bit = tx_byte & (0x80 >> bit_index);
        }
    }
}
