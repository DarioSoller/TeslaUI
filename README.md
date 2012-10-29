TeslaUI
=======

This is the code repository for my diploma thesis called 'Tesla User Interfaces'.



AVR (ATtiny85) Installation & Programming Guide (this worked for me!):
- Using Win7 64bit get this Driver for the 'Sparkfun AVR Pocket Programmer': http://www.ladyada.net/make/usbtinyisp/usbtinyisp_libusb-win32_1.2.1.0.zip . 
Make sure you have the 'Sparkfun AVR Pocket Programmer' connected via USB to your PC and remember the usb port, as you should always connect the 'Sparkfun AVR Pocket Programmer' to the same port. That probably was the reason why I had to install it several times until my PC recognized the 'Sparkfun AVR Pocket Programmer'.
- Further install AVRDude/WinAVR. Here an overview about drivers and software:
http://www.ladyada.net/make/usbtinyisp/download.html
- Besides WinAVR you can directly programm AVRs out of the Eclipse IDE with the following plugin: http://avr-eclipse.sourceforge.net/wiki/index.php/Plugin_Download
- REALLY triple check the wiring of the ATtiny85 according to the data sheet or tutorials: http://www.atmel.com/devices/attiny85.aspx?tab=documents and i.e. http://hlt.media.mit.edu/?p=1695 or like this fritzing scheme https://github.com/aurelient/TUIsla/blob/master/ATtiny85Programming/USBtinyISP-ATtiny85.fzz
- Setting up an AVR project: In the Eclipse Project Explorer do 'New > Project > C-Project > AVR Cross Target Application > Empty Project (notice the AVR-GCC Toolchain) > Select  ATtiny85 as AVR Target Hardware Properties.'
- Make a new C-File and copy some 'Blink' test code or write some code on your own.
- Compile your C-Files. In Eclipse just go to 'Project > Build All'. With the Consol use following commands, you'll find here: TeslaUI >AVR Programming > Consol Commands.txt . Make sure to be in the right directory of the C-File, which you want to compile etc.
- Uploading/Flashing the HEX-File onto the ATtiny85 worked with the AVR Eclipse Plugin and adjusting following project preferences: Select your C-Project and then go on 'File > Properties > AVR > AVRDude > Programmer > Programmer configurations > new > Select USBtiny simple USB programmer' as the Programmer Hardware and select your new Programmer in the programmer configuration drop down menu. Right next to the 'Programmer' tab go on the 'Flash/ EEPROM' Tab and select 'from flash memory image file' for the 'Upload Flash Memory Image'. Now browse and select the according HEX-File. Make sure the right project is still selected and go on 'AVR > Upload Project to Target Device'. Should work, good luck!