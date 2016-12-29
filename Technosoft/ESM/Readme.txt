EasyMotion Studio / EasySetUp  (c) Technosoft 2005
--------------------------------------------------

EasyMotion Studio and EasySetUp are the new software platforms for the setup and motion programming of the Technosoft products. Using these applications you can fully benefit from all the new features of the Technosoft intelligent drives and motors added in firmware revision H. 

With EasySetUp you can quickly setup a drive/motor for your application, using only 2 dialogues. EasySeyUp is the recommended tool when motion programming and control is done via an external device like an industrial PC or PLC using for example the Technosoft motion libraries. The output of EasySetUp is a set of setup data, which can be downloaded into the drive/motor EEPROM or saved on your PC. At power-on, the setup data saved in a drive/motor EEPROM is used for initializations. With EasySetUp it is also possible to retrieve the complete setup information from a drive/motor previously programmed. EasySetUp includes a firmware programmer with which you update your drive/motor firmware to revision H. 

With EasyMotion Studio you can fully benefit from a key advantage of the Technosoft drives/motors – their capability to execute complex motions without requiring an external motion controller, thanks to their built-in motion controller. EasyMotion Studio includes EasySetUp for the drive/motor setup and a Motion Wizard for the motion programming. The Motion Wizard provides a simple, graphical way to create motion programs written in Technosoft Motion Language (TML). It automatically generates all the TML instructions, hence you don’t need to learn or write any TML code. EasyMotion Studio is the recommended tool for motion programming using TML. With TML, you can really simplify complex applications, by distributing the intelligence between the master and the drives/motors. Thus, instead of trying to command from the master each step of an axis movement, you can program the drives/motors using TML to execute complex tasks and inform the master when these are done. 

Both EasySetUp and EasyMotion Studio include an update via Internet tool through which you can immediately check if your software version is up to date or download and install the latest updates. 

----------
IMPORTANT! 
----------
For correct operation, EasySetUp and EasyMotion Studio, require drives/motors programmed with firmware version H.  You can check and update the firmware on your drive/motor using the firmware programmer installed together with EasySetUp and EasyMotion Studio. 

-------------------------
Firmware update procedure
-------------------------

1. Connect your drive/motor to the PC via an RS-232 link and then power on the drive
2. Open firmware programmer installed together with EasySetUp or EasyMotion Studio and press the Check communication button
3. If communication is OK, in the Result group you’ll get the current firmware version of your drive/motor
4. Go to Select firmware and choose from the list the firmware having the same 3 digits and the highest revision letter. For example, if your drive firmware is F000F, choose F000H, if your drive firmware is F005D, choose F005H, etc
5. Press the Start programming button and wait until the firmware update ends.

---------------------------------
EasyMotion Studio / EasySetUp FAQ
---------------------------------
1) What is the difference between IPM Motion Studio, EasyMotion Studio and EasySetUp? Which one shall I use for the development of a new application?

EasyMotion Studio and EasySetUp are the new software platforms for the setup and motion programming of the Technosoft OEM products. Using these platforms you can fully benefit from all the new features of the Technosoft intelligent drives and motors added in firmware revision H. Therefore are recommended for new developments.
With EasySetUp you can setup a drive/motor for your application. It is the recommended tool when motion programming and control is done from another device like an industrial PC or PLC, using for example the Technosoft motion libraries.  
With EasyMotion Studio you can do both the drive/motor setup and the motion programming using the built-in motion controller. The motion application is described using the high-level Technosoft Motion Language (TML) .   
IPM Motion Studio is the previous IDE for drives/motors setup and TML programming. It does not include support for the new features of the Technosoft intelligent drives and motors added in firmware revision H. Technosoft will keep the same level of support for the customers working with IPM Motion Studio, but no further developments are foreseen for this product.    

2) Does EasyMotion Studio and EasySetUp cover all the Technosoft products?

Currently, EasyMotion Studio and EasySetUp cover the following families of products: 
·	IDM240 / IDM640 (models IDM240-5EI, IDM240-5LI, IDM640-8EI and IDM640-8LI)
·	IDS240 / IDS640 (all models)
·	ISCM4805 / ISCM8005 (all models)
·	IBL2403 (all models)
·	IPS110 (all models)
·	IM23x (all models)

For correct operation, these drives/motors must be programmed with firmware version H. In Q3’2005 EasyMotion Studio and EasySetUp will cover all the Technosoft products except the families: IPM640, IPM100 and IPS150 

3) What are the main advantages of using EasySetUp instead of IPM Motion Studio for applications where motion programming is done via the TMLLIB motion library?

a) EasySetUp is simpler allowing a faster setup of the drives/motors using only 2 dialogues
b) In EasySetUp, the setup information is stored in dedicated area of the drive/motor EEPROM from where it is automatically loaded at power on. In IPM Motion Studio the setup information is included in a TML program, which needs to be downloaded and then executed automatically at power on with drive/motor set in AUTORAN mode. 
c) In EasySetUp you can read the setup information stored in a drive/motor and based on it to have a complete restore of the context as it was when the setup data was saved in drive/motor. IPM Motion Studio does not support this option
d) EasySetUp generates automatically the initialization files to be included in an application using TMLLIB
e) EasySeyUp offers the possibility to include in the setup data, the axis ID, the serial baud rate and CANbus baud rate to start with at power on. 
f) When EasySetUp is launched it identifies automatically, the axis ID of drive/motor connected via RS-232 with the PC
g) Using Scan Network command, EasySetUp can detect all drives/motors from a CAN bus network, even when the PC is connected via RS-232 to one of them
h) EasySetUp keeping up-to-date is straightforward via the included update via Internet tool.

4) I want to control a Technosoft drive/motor via a PLC? What software shall I use?

Technosoft motion libraries for PLCs are based on PLCOpen standard for motion control. The standard compliance involves some functionality that has been added to the Technosoft drives/motors only in firmware revision H. As the new features of firmware revision H are accessible only from EasySetUp and EasyMotion Studio, you need to use one of them. Use EasySetUp if you intend to control the whole motion directly from your PLC. Use EasyMotion Studio you intend to distribute the tasks between your PLC and the drive/motor. In this case you need EasyMotion Studio to program in the drive TML functions or homing routines to be called from your PLC.  

5) What are the main advantages of using EasyMotion Studio instead of IPM Motion Studio for applications where motion programming is partially or integrally done using Technosoft Motion Language? 

a) EasyMotion Studio offers access to all the new features of firmware revision H like: speed and position control at 100µs, S-curve profiles, PVT and PT interpolation, electronic gearing plus a 2nd move, absolute or relative cam with I/O scaling, 32 homing modes, axes synchronization, task confirmation via messages, setup data stored in the EEPROM, programmable active levels for Enable and limit switch inputs, etc. These features are not supported by IPM Motion Studio
b) In EasyMotion Studio the setup part and the motion programming part are completely separated. EasyMotion Studio is basically a tool for motion programming which calls EasySetUp to perform the drives/motors setup. The output of EasyMotion Studio is a TML program for each motion axis. The output of EasySetUp (called from EasyMotion Studio) is the setup information to be stored in dedicated area of the drive/motor EEPROM from where it is automatically loaded at power on. Compared with IPM Motion Studio, EasyMotion Studio is simpler to use and understand, using an intuitive tree representation of a project structure
c) EasyMotion Studio help includes a lot of new or extended information like: a comprehensive description of the Technosoft Motion Language with numerous examples, the correspondence between the drive/motor internal units and the SI units, a detailed presentation of all the supported communication protocols, etc.
d) In EasyMotion Studio you have the possibility to use one or several homing procedures from a collection of over 32, with option to adapt them according with your application needs 
e) EasyMotion Studio provides direct conversion of motion applications including the setup data in the EEPROM programmer file format (a .sw file). The EEPROM Programmer is a production tool as it programs fast and easy the EEPROM memory of any Technosoft drive/motor with all the data needed to run a specific application. 
f) EasyMotion Studio keeping up-to-date is straightforward via the included update via Internet tool.
g) All the EasySetUp advantages versus IPM Motion Studio mentioned at question 3)

6) What operations can I do using Technosoft Motion Language?  

One of the key advantages of the Technosoft drives/motors is their capability to execute complex motions without requiring an external motion controller. This is possible because Technosoft drives offer in a single compact package both a state of art digital drive and a powerful motion controller. 

Programming motion on a Technosoft drive/motor means to create and download a TML (Technosoft Motion Language) program into the drive/motor memory.  

The TML allows you to:
a) Set various motion modes (profiles, PVT, PT, electronic gearing or camming, etc.)
b) Change the motion modes and/or the motion parameters
c) Execute homing sequences
d) Control the program flow through:
e) Conditional jumps and calls of TML functions
f) TML interrupts generated on pre-defined or programmable conditions (protections triggered, transitions on limit switch or capture inputs, etc.) 
g) Waits for programmed events to occur 
h) Handle digital I/O and analogue input signals 
i) Execute arithmetic and logic operations
j) Perform data transfers between axes
k) Control motion of an axis from another one via motion commands sent between axes
l) Send commands to a group of axes (multicast). This includes the possibility to start simultaneously motion sequences on all the axes from the group
m) Synchronize all the axes from a network 

With TML, you can really distribute the intelligence between the master and the drives/motors in complex multi-axis applications. Thus, instead of trying to command each step of an axis movement, you can program the drives/motors using TML to execute complex tasks and inform the master when these are done. Thus for each axis the master task may be reduced at: calling TML functions (with possibility to abort their execution if needed) and waiting for a message, which confirms the execution. If needed, the drives/motors may also be programmed to send periodically information messages to the master so it can monitor a task progress.

7) Can I import my projects from IPM Motion Studio into EasyMotion Studio?

Not directly, because the 2 applications handle in a completely differently way the setup information. For this reason we recommend you to start using EasyMotion Studio for new projects and keep IPM Motion Studio for the projects already started with it.  

8) My application was successfully developed using IPM Motion Studio. Do I need to migrate it to EasyMotion Studio? 

No. As your application was developed with IPM Motion Studio it doesn’t use any of the new features, which require use of EasyMotion Studio / EasySetUp. However, for new projects, we recommend you to start using EasyMotion Studio / EasySetUp in order to benefit of the new features provided with them.  

9) Can I use EasySetUp or EasyMotion Studio with a drive/motor bought before the release of these new software tools?

Yes, but only after updating the drive/motor firmware to revision H. You can do this operation, using the Firmware programmer installed together with EasySetUp or EasyMotion Studio. With the same tool, the reverse operation is also possible i.e. to return back to the previous firmware version. 

10) I have updated my drive/motor firmware to revision H using EasySetUp firmware programmer. May I continue using IPM Motion Studio?

Yes. Firmware revision H respects the compatibility with the previous firmware revisions.

11) I have used for a while EasyMotion Studio / EasySetUp and then I returned to IPM Motion Studio. I noticed that my application developed with IPM Motion Studio, does not work anymore properly.  Why?

IPM Motion Studio generates the TML instructions for drives/motors setup based on the default values of some parameters. After using EasySetUp / EasyMotion Studio and downloading a setup table in the EEPROM, the default values of many TML parameters are overwritten. Hence IPM Motion Studio setup may be incorrect. 

In order to restore correct operation with IPM Motion Studio, you need to invalidate the setup table downloaded with EasySetUp / EasyMotion Studio. You can do this operation by writing value 1 in the last EEPROM memory location, which is for most of the drives/motors at address 5FFFh. Use menu command View | Memory (available in both IPM Motion Studio and EasyMotion Studio), select Address 5FFF and set to 1 the memory location value. 


