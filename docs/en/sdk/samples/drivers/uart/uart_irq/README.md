# Universal asynchronous transceiver UART

## Overview

**uart** The general asynchronous transceiver UART driver example project shows the configuration and use method of UART to realize the receiving and sending of serial port data.
- In the example code, the UART serial port resources are initialized and configured, the serial port clock and the receiving and sending FIFO depth are set, and the interrupt is configured to realize the sending and receiving of serial port receipts.

## Port Settings

- Serial port baud rate is set to ``115200bps``, with ``one stop bit`` and ``no parity bit``

## Note

- The input string length should not exceed UART_SOC_FIFO_SIZE defined in the program every time

## Running the example

When the project runs correctly, manually input the string through the serial port, such as 1234567887654321, and the serial port terminal will receive the following information:
```console
uart driver example
fifo mode
uart will send back received characters, echo every 16 bytes
1234567887654321
```