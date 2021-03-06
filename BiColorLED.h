/*  Simple Bicolor LED library for Arduino, v1.4
    Copyright (C) 2014 Wolfgang Faust

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
    Email: wolf@wolfgang.site40.net
*/
#ifndef BiColorLED_H
#define BiColorLED_H 1.4

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class BiColorLED{
	public:
		BiColorLED(uint8_t ledPin1, uint8_t ledPin2);
		void drive();
		void setColor(uint8_t toColor);
		void setColor(uint8_t toColor1, uint8_t toColor2);
		void setColor2(uint8_t toColor) __attribute__ ((deprecated));
		uint8_t getColor();
		uint8_t getColor2();
		void setBlinkSpeed(unsigned long toSpeed);
		void setBlinkSpeed(unsigned long toSpeed1, unsigned long toSpeed2);
		unsigned long getBlinkSpeed();
		unsigned long getBlinkSpeed2();
	private:
		uint8_t color1, color2;
		uint8_t pin1, pin2;
		bool yellowRed, blinkOne;
		unsigned long lastBlink, blinkSpeed1, blinkSpeed2;
};
  
#endif
