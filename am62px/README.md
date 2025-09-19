# var-sbl-keywriter-support

The following files are provided to build the sbl-keywriter application (part of the OTP Keywriter package from Texas Instruments).

Please copy the files board.c and example.syscfg to the directory $MCU\_PLUS\_SDK\_INSTALL\_DIR/source/security/sbl\_keywriter/am62px/r5fss0-0\_nortos/, replacing the existing files in that directory.

These files are the adaptions for the VAR-SOM board that are needed to burn the fuses and thereby secure a board.

Please also have a look at the AM62Px Secure Boot article: Please go to the (Yocto Release page for the AM62Px)[https://dev.variscite.com/var-som-am62p/#2-software-releases], select your release version and then select *Secure Boot*.

Please also see the OTP Keywriter Tutorial which is provided at $MCU\_PLUS\_SDK\_INSTALL\_DIR/source/security/sbl\_keywriter/docs/\_build\_am62px/html/index.html
