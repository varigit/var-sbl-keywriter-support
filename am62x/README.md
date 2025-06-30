# var-sbl-keywriter-support

The following files are provided to build the sbl-keywriter application (part of the OTP Keywriter package from Texas Instruments).

Please copy the files board.c and example.syscfg to the directory $MCU\_PLUS\_SDK\_INSTALL\_DIR/source/security/sbl\_keywriter/am62x-sk/r5fss0-0\_nortos/, replacing the existing files in that directory.

These files are the adaptions for the VAR-SOM board that are needed to burn the fuses and thereby secure a board.

Please see [AM62x Secure Boot Wiki](https://variwiki.com/index.html?title=AM62_Secure_Boot) for details.
Please also see the [OTP Keywriter Tutorial](https://dev.ti.com/tirex/explore/node?node=A__AagJ-8QGXM582KzTgxFZbA__AM62-ACADEMY__uiYMDcq__LATEST) provided by Texas Instruments.
