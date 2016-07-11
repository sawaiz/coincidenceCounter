# Coincidence Counter
The coincidence counter was developed as a means to collect data from cosmic ray detectors in a more cost efficient and straightforward way. The counter must collect, amplify, digitize, and record the coincidence of the analog signals from the detectors. The module attaches to the top of a Raspberry Pi and data is collected from the GPIO pins.

![][exploded]

## Electronics
The incoming signal (51 ohm termination) is first amplified by a factor of 10, with a [LT1809CS6](http://cds.linear.com/docs/en/datasheet/180910fa.pdf), a high bandwidth (320Mhz) operational amplifier in a non inverting configuration. This signal is fed into a ultrafast comparator [LT1719CS](http://cds.linear.com/docs/en/datasheet/1719fa.pdf) that has its threshold set through a potentiometer. Nanosecond level (10ns-100ns) signals are able to be digitized and sent out for analysis. The output is then put thorough the six possible *ANDs* of four signals which leads to interrupt pins on the Raspberry Pi.

![][dynodeFrontPi]

## Physical
The board is made with the [Pi HAT](https://github.com/raspberrypi/hats) specification, and leaves sufficient room for SMA cables to be attached. It does not contain a self configuration EEPROM. Its outputs are directly connected to the following pins.

| Output | GPIO | Inputs    |
| ------ | ----:| --------- |
| 1      | 22   | CH1 & CH2 |
| 2      | 27   | CH3 & CH1 |
| 3      | 17   | CH1 & CH4 |
| 4      |  5   | CH4 & CH3 |
| 5      |  6   | CH2 & CH3 |
| 6      | 26   | CH2 & CH4 |

The board also has many test points, allowing checking of the signal, and setting of the potentiometers is a easier manner.

![][dynodeSidePi]

## Usage
The repository [coincidenceControl](nope, deosnt exist yet) has instructions for installing and gathering data from this hardware.

[exploded]: cad/renderings/exploded.gif "Exploded animation of PCB"
[dynodeSidePi]: cad/renderings/dynodeSidePi.jpg "Side view showing clearance from other connectors"
[dynodeFrontPi]: cad/renderings/dynodeFrontPi.jpg "Board showing potentiometers and test points."
