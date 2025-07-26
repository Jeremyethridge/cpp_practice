                  AREA    |.text|,CODE,READONLY,ALIGH=2 
                  THUMB
                  EXPORT Main

Main
        BL      GPIOF_Init

GPIOF_Init
        LDR R1, =SYSCTL_RCGCGPIO_R 
        LDR R0, [R1]
        ORR R0,R0,#0x20 (0x20 is equal to 0010 0000 because 0x means it's a hexadecimal and 20 means 16x2(32 bits))