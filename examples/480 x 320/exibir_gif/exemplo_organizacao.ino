/*
 An example showing rainbow colours on a 3.0 or 3.2" TFT LCD screen
 and to show basic examples of font use.

 This sketch uses the GLCD, 2, 4, 6 fonts only.

 Make sure all the required fonts are loaded by editing the
 User_Setup.h file in the TFT_eSPI library folder.


  #########################################################################
  ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
  ######           TO SELECT THE FONTS AND PINS YOU USE              ######
  #########################################################################
 */

 #include <SPI.h>

 #include <TFT_eSPI.h> // Hardware-specific library
 
 TFT_eSPI tft = TFT_eSPI();       // Invoke custom library
 
 unsigned long targetTime = 0;
 byte red = 31;
 byte green = 0;
 byte blue = 0;
 byte state = 0;
 unsigned int colour = red << 11; // Colour order is RGB 5+6+5 bits each
 
 void setup(void) {
   tft.init();
   tft.setRotation(2);
   tft.fillScreen(TFT_BLACK);
 
   targetTime = millis() + 1000;
 }
 
 void loop() {
 
   if (targetTime < millis()) {
     targetTime = millis() + 10000;
 
     rainbow_fill(); // Fill the screen with rainbow colours
 
     // The standard AdaFruit font still works as before
     tft.setTextColor(TFT_BLACK); // Background is not defined so it is transparent
     tft.setCursor (100, 5);
     tft.setTextFont(1);        // Select font 1 which is the Adafruit GLCD font
     tft.print("Original Adafruit font!");
 
     // The new larger fonts do not need to use the .setCursor call, coords are embedded
     tft.setTextColor(TFT_BLACK); // Do not plot the background colour
     // Overlay the black text on top of the rainbow plot (the advantage of not drawing the background colour!)
     tft.drawCentreString("Font size 2", 160, 14, 2); // Draw text centre at position 120, 14 using font 2
     tft.drawCentreString("Font size 4", 160, 30, 4); // Draw text centre at position 120, 30 using font 4
     tft.drawCentreString("12.34", 160, 54, 6);       // Draw text centre at position 120, 54 using font 6
     tft.drawCentreString("12.34 is in font 6", 160, 92, 2); // Draw text centre at position 120, 92 using font 2
     // Note the x, y position is the top left corner of the first character printed!
 
     // draw a floating point number
     float pi = 3.14159; // Value to print
     int precision = 3;  // Number of digits after decimal point
     int xpos = 130;     // x position
     int ypos = 110;     // y position
     int font = 2;       // font number 2
     xpos += tft.drawFloat(pi, precision, xpos, ypos, font); // Draw rounded number and return new xpos delta for next print position
     tft.drawString(" is pi", xpos, ypos, font);             // Continue printing from new x position
 
     tft.setTextSize(1);           // We are using a text size multiplier of 1
 
     tft.setTextColor(TFT_BLACK);  // Set text colour to black, no background (so transparent)
     tft.setCursor(76, 150, 4);    // Set cursor to x = 76, y = 150 and use font 4
     tft.println("Transparent...");  // As we use println, the cursor moves to the next line
 
     tft.setCursor(70, 175);    // Set cursor to x = 70, y = 175
     tft.setTextColor(TFT_WHITE, TFT_BLACK);  // Set text colour to white and background to black
     tft.println("White on black");
 
     tft.setTextFont(4);        // Select font 4 without moving cursor
     tft.setCursor(00, 210);    // Set cursor to x = 90, y = 210 without changing the font
     tft.setTextColor(TFT_WHITE);
     
     // By using the print class we can use all the formatting features like printing HEX
     tft.print(57005, HEX);    // Cursor does no move to next line
     tft.println(48879, HEX);  // print and move cursor to next line
 
     tft.setTextColor(TFT_GREEN, TFT_BLACK); // This time we will use green text on a black background
     tft.setTextFont(2); // Select font 2
     //Text will wrap to the next line if needed, by luck it breaks the lines at a space..
     tft.println(" Ode to a Small Lump of Green Putty I Found in My Armpit One Midsummer Morning ");
 
     tft.drawCentreString("34.56", 160, 300, 7);       // Draw text centre at position 120, 54 using font 6
     tft.drawCentreString("34.56 is in font 7", 160, 350, 2); // Draw text centre at position 120, 92 using font 2
 
     tft.drawCentreString("78.90", 160, 370, 8);       // Draw text centre at position 120, 54 using font 6
     tft.drawCentreString("78.90 is in font 8", 160, 450, 2); // Draw text centre at position 120, 92 using font 2
   }
 }
 
 // Fill screen with a rainbow pattern
 void rainbow_fill()
 {
   // The colours and state are not initialised so the start colour changes each time the function is called
   
   for (int i = 479; i > 0; i--) {
     // Draw a vertical line 1 pixel wide in the selected colour
     tft.drawFastHLine(0, i, tft.width(), colour); // in this example tft.width() returns the pixel width of the display
     // This is a "state machine" that ramps up/down the colour brightnesses in sequence
     switch (state) {
       case 0:
         green ++;
         if (green == 64) {
           green = 63;
           state = 1;
         }
         break;
       case 1:
         red--;
         if (red == 255) {
           red = 0;
           state = 2;
         }
         break;
       case 2:
         blue ++;
         if (blue == 32) {
           blue = 31;
           state = 3;
         }
         break;
       case 3:
         green --;
         if (green == 255) {
           green = 0;
           state = 4;
         }
         break;
       case 4:
         red ++;
         if (red == 32) {
           red = 31;
           state = 5;
         }
         break;
       case 5:
         blue --;
         if (blue == 255) {
           blue = 0;
           state = 0;
         }
         break;
     }
     colour = red << 11 | green << 5 | blue;
   }
 }
 
 
 
 