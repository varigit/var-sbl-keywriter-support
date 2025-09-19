# var-sbl-keywriter-support

The following files are provided to build the sbl-keywriter application (part of the OTP Keywriter package from Texas Instruments).

Please copy the files board.c and example.syscfg to the directory $MCU\_PLUS\_SDK\_INSTALL\_DIR/source/security/sbl\_keywriter/am62x-sk/r5fss0-0\_nortos/, replacing the existing files in that directory.

These files are the adaptions for the VAR-SOM board that are needed to burn the fuses and thereby secure a board.

Please also have a look at the AM62x Secure Boot article: Please go to the (Yocto Release page for the AM62x)[https://dev.variscite.com/var-som-am62/#2-software-releases], select your release version and then select *Secure Boot*.

Please also see the [OTP Keywriter Tutorial](https://dev.ti.com/tirex/explore/node?node=A__AagJ-8QGXM582KzTgxFZbA__AM62-ACADEMY__uiYMDcq__LATEST) provided by Texas Instruments.
