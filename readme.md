#Coincidence Counter
The design takes a analog signal in through a SMA jack, amplifies, and digitizes it and allows multiple boards to stack and 'and' an unlimited number of channels. It allows configurations of single amplification, double amplification, inverting, and digitization of an incoming signal. The following subsections are involved in one board.

- Digitize based on threshold
- Amplify (10x)
- Invert (-10x)
- AND with previous channel

These boards are designed to be stacking, meaning that the signal cascades down the stack of boards. The top board provides power (via a micro USB connection) and the true signal required by the first board to create a *one fold* coincidence output. A board at the bottom allows the output of the signal. 
