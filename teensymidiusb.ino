//teensy 4.1
#include <Bounce.h>

// the MIDI channel number to send messages
const int channel = 1;

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
Bounce button0 = Bounce(0, 5);
Bounce button1 = Bounce(1, 5);  // 5 = 5 ms debounce time
Bounce button2 = Bounce(2, 5);  // which is appropriate for good
Bounce button3 = Bounce(3, 5);  // quality mechanical pushbuttons
Bounce button4 = Bounce(4, 5);
Bounce button5 = Bounce(5, 5);  // if a button is too "sensitive"
Bounce button6 = Bounce(6, 5);  // to rapid touch, you can
Bounce button7 = Bounce(7, 5);  // increase this time.
Bounce button8 = Bounce(8, 5);
Bounce button9 = Bounce(9, 5);
Bounce button10 = Bounce(10, 5);
Bounce button11 = Bounce(11, 5);
Bounce button12 = Bounce(12, 5);
Bounce button13 = Bounce(13, 5);  // 5 = 5 ms debounce time
Bounce button14 = Bounce(14, 5);  // which is appropriate for good
Bounce button15 = Bounce(15, 5);  // quality mechanical pushbuttons
Bounce button16 = Bounce(16, 5);
Bounce button17 = Bounce(17, 5);  // if a button is too "sensitive"
Bounce button18 = Bounce(18, 5);  // to rapid touch, you can
Bounce button19 = Bounce(19, 5);  // increase this time.
Bounce button20 = Bounce(20, 5);
Bounce button21 = Bounce(21, 5);
Bounce button22 = Bounce(22, 5);
Bounce button23 = Bounce(23, 5);
Bounce button24 = Bounce(24, 5);
Bounce button25 = Bounce(25, 5);
Bounce button26 = Bounce(26, 5);
Bounce button27 = Bounce(27, 5);  // 5 = 5 ms debounce time
Bounce button28 = Bounce(28, 5);  // which is appropriate for good
Bounce button29 = Bounce(29, 5);  // quality mechanical pushbuttons
Bounce button30 = Bounce(30, 5);
Bounce button31 = Bounce(31, 5);  // if a button is too "sensitive"
Bounce button32 = Bounce(32, 5);  // to rapid touch, you can
Bounce button33 = Bounce(33, 5);  // increase this time.
Bounce button34 = Bounce(34, 5);
Bounce button35 = Bounce(35, 5);
Bounce button36 = Bounce(36, 5);
Bounce button37 = Bounce(37, 5);
Bounce button38 = Bounce(38, 5);  // to rapid touch, you can
Bounce button39 = Bounce(39, 5);  // increase this time.
Bounce button40 = Bounce(40, 5);
Bounce button41 = Bounce(41, 5);


void setup() {
  // Configure the pins for input mode with pullup resistors.
  // The pushbuttons connect from each pin to ground.  When
  // the button is pressed, the pin reads LOW because the button
  // shorts it to ground.  When released, the pin reads HIGH
  // because the pullup resistor connects to +5 volts inside
  // the chip.  LOW for "on", and HIGH for "off" may seem
  // backwards, but using the on-chip pullup resistors is very
  // convenient.  The scheme is called "active low", and it's
  // very commonly used in electronics... so much that the chip
  // has built-in pullup resistors!
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);  // Teensy++ 2.0 LED, may need 1k resistor pullup
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP); // Teensy 2.0 LED, may need 1k resistor pullup
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);  // Teensy++ 2.0 LED, may need 1k resistor pullup
  pinMode(17, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP); // Teensy 2.0 LED, may need 1k resistor pullup
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(24, INPUT_PULLUP);
  pinMode(25, INPUT_PULLUP);
  pinMode(26, INPUT_PULLUP);  // Teensy++ 2.0 LED, may need 1k resistor pullup
  pinMode(27, INPUT_PULLUP);
  pinMode(28, INPUT_PULLUP);
  pinMode(29, INPUT_PULLUP);
  pinMode(30, INPUT_PULLUP);
  pinMode(31, INPUT_PULLUP); // Teensy 2.0 LED, may need 1k resistor pullup
  pinMode(32, INPUT_PULLUP);
  pinMode(33, INPUT_PULLUP);
  pinMode(34, INPUT_PULLUP);
  pinMode(35, INPUT_PULLUP);
  pinMode(36, INPUT_PULLUP);  // Teensy++ 2.0 LED, may need 1k resistor pullup
  pinMode(37, INPUT_PULLUP);
  pinMode(38, INPUT_PULLUP);
  pinMode(39, INPUT_PULLUP);
  pinMode(40, INPUT_PULLUP);
  pinMode(41, INPUT_PULLUP); // Teensy 2.0 LED, may need 1k resistor pullup
}

void loop() {
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  button16.update();
  button17.update();
  button18.update();
  button19.update();
  button20.update();
  button21.update();
  button22.update();
  button23.update();
  button24.update();
  button25.update();
  button26.update();
  button27.update();
  button28.update();
  button29.update();
  button30.update();
  button31.update();
  button32.update();
  button33.update();
  button34.update();
  button35.update();
  button36.update();
  button37.update();
  button38.update();
  button39.update();
  button40.update();
  button41.update();

  // Check each button for "falling" edge.
  // Send a MIDI Note On message when each button presses
  // Update the Joystick buttons only upon changes.
  // falling = high (not pressed - voltage from pullup resistor)
  //           to low (pressed - button connects pin to ground)
  if (button0.fallingEdge()) {
    usbMIDI.sendNoteOn(60, 99, channel);  // 60 = C4
  }
  if (button1.fallingEdge()) {
    usbMIDI.sendNoteOn(61, 99, channel);  // 61 = C#4
  }
  if (button2.fallingEdge()) {
    usbMIDI.sendNoteOn(62, 99, channel);  // 62 = D4
  }
  if (button3.fallingEdge()) {
    usbMIDI.sendNoteOn(63, 99, channel);  // 63 = D#4
  }
  if (button4.fallingEdge()) {
    usbMIDI.sendNoteOn(64, 99, channel);  // 64 = E4
  }
  if (button5.fallingEdge()) {
    usbMIDI.sendNoteOn(65, 99, channel);  // 65 = F4
  }
  if (button6.fallingEdge()) {
    usbMIDI.sendNoteOn(66, 99, channel);  // 66 = F#4
  }
  if (button7.fallingEdge()) {
    usbMIDI.sendNoteOn(67, 99, channel);  // 67 = G4
  }
  if (button8.fallingEdge()) {
    usbMIDI.sendNoteOn(68, 99, channel);  // 68 = G#4
  }
  if (button9.fallingEdge()) {
    usbMIDI.sendNoteOn(69, 99, channel);  // 69 = A5
  }
  if (button10.fallingEdge()) {
    usbMIDI.sendNoteOn(70, 99, channel);  // 70 = A#5
  }
  if (button11.fallingEdge()) {
    usbMIDI.sendNoteOn(71, 99, channel);  // 71 = B5
  }
  if (button12.fallingEdge()) {
    usbMIDI.sendNoteOn(72, 99, channel);  // 62 = D4
  }
  if (button13.fallingEdge()) {
    usbMIDI.sendNoteOn(73, 99, channel);  // 63 = D#4
  }
  if (button14.fallingEdge()) {
    usbMIDI.sendNoteOn(74, 99, channel);  // 64 = E4
  }
  if (button15.fallingEdge()) {
    usbMIDI.sendNoteOn(75, 99, channel);  // 65 = F4
  }
  if (button16.fallingEdge()) {
    usbMIDI.sendNoteOn(76, 99, channel);  // 66 = F#4
  }
  if (button17.fallingEdge()) {
    usbMIDI.sendNoteOn(77, 99, channel);  // 67 = G4
  }
  if (button18.fallingEdge()) {
    usbMIDI.sendNoteOn(78, 99, channel);  // 68 = G#4
  }
  if (button19.fallingEdge()) {
    usbMIDI.sendNoteOn(79, 99, channel);  // 69 = A5
  }
  if (button20.fallingEdge()) {
    usbMIDI.sendNoteOn(80, 99, channel);  // 70 = A#5
  }
  if (button21.fallingEdge()) {
    usbMIDI.sendNoteOn(81, 99, channel);  // 71 = B5
  }

  if (button22.fallingEdge()) {
    usbMIDI.sendNoteOn(41, 99, channel);  // 62 = D4
  }
  if (button23.fallingEdge()) {
    usbMIDI.sendNoteOn(42, 99, channel);  // 63 = D#4
  }
  if (button24.fallingEdge()) {
    usbMIDI.sendNoteOn(43, 99, channel);  // 64 = E4
  }
  if (button25.fallingEdge()) {
    usbMIDI.sendNoteOn(44, 99, channel);  // 65 = F4
  }
  if (button26.fallingEdge()) {
    usbMIDI.sendNoteOn(45, 99, channel);  // 66 = F#4
  }
  if (button27.fallingEdge()) {
    usbMIDI.sendNoteOn(46, 99, channel);  // 67 = G4
  }
  if (button28.fallingEdge()) {
    usbMIDI.sendNoteOn(47, 99, channel);  // 68 = G#4
  }
  if (button29.fallingEdge()) {
    usbMIDI.sendNoteOn(48, 99, channel);  // 69 = A5
  }
  if (button30.fallingEdge()) {
    usbMIDI.sendNoteOn(79, 99, channel);  // 70 = A#5
  }
  if (button31.fallingEdge()) {
    usbMIDI.sendNoteOn(50, 99, channel);  // 71 = B5
  }

  if (button32.fallingEdge()) {
    usbMIDI.sendNoteOn(51, 99, channel);  // 62 = D4
  }
  if (button34.fallingEdge()) {
    usbMIDI.sendNoteOn(52, 99, channel);  // 63 = D#4
  }

  if (button35.fallingEdge()) {
    usbMIDI.sendNoteOn(53, 99, channel);  // 65 = F4
  }
  if (button36.fallingEdge()) {
    usbMIDI.sendNoteOn(54, 99, channel);  // 66 = F#4
  }
  if (button37.fallingEdge()) {
    usbMIDI.sendNoteOn(55, 99, channel);  // 67 = G4
  }
  if (button38.fallingEdge()) {
    usbMIDI.sendNoteOn(56, 99, channel);  // 68 = G#4
  }
  if (button39.fallingEdge()) {
    usbMIDI.sendNoteOn(57, 99, channel);  // 69 = A5
  }
  if (button40.fallingEdge()) {
    usbMIDI.sendNoteOn(58, 99, channel);  // 70 = A#5
  }
  if (button41.fallingEdge()) {
    usbMIDI.sendNoteOn(59, 99, channel);  // 71 = B5
  }





////
  if (button0.risingEdge()) {
    usbMIDI.sendNoteOff(60, 99, channel);  // 60 = C4
  }
  if (button1.risingEdge()) {
    usbMIDI.sendNoteOff(61, 99, channel);  // 61 = C#4
  }
  if (button2.risingEdge()) {
    usbMIDI.sendNoteOff(62, 99, channel);  // 62 = D4
  }
  if (button3.risingEdge()) {
    usbMIDI.sendNoteOff(63, 99, channel);  // 63 = D#4
  }
  if (button4.risingEdge()) {
    usbMIDI.sendNoteOff(64, 99, channel);  // 64 = E4
  }
  if (button5.risingEdge()) {
    usbMIDI.sendNoteOff(65, 99, channel);  // 65 = F4
  }
  if (button6.risingEdge()) {
    usbMIDI.sendNoteOff(66, 99, channel);  // 66 = F#4
  }
  if (button7.risingEdge()) {
    usbMIDI.sendNoteOff(67, 99, channel);  // 67 = G4
  }
  if (button8.risingEdge()) {
    usbMIDI.sendNoteOff(68, 99, channel);  // 68 = G#4
  }
  if (button9.risingEdge()) {
    usbMIDI.sendNoteOff(69, 99, channel);  // 69 = A5
  }
  if (button10.risingEdge()) {
    usbMIDI.sendNoteOff(70, 99, channel);  // 70 = A#5
  }
  if (button11.risingEdge()) {
    usbMIDI.sendNoteOff(71, 99, channel);  // 71 = B5
  }
  if (button12.risingEdge()) {
    usbMIDI.sendNoteOff(72, 99, channel);  // 62 = D4
  }
  if (button13.risingEdge()) {
    usbMIDI.sendNoteOff(73, 99, channel);  // 63 = D#4
  }
  if (button14.risingEdge()) {
    usbMIDI.sendNoteOff(74, 99, channel);  // 64 = E4
  }
  if (button15.risingEdge()) {
    usbMIDI.sendNoteOff(75, 99, channel);  // 65 = F4
  }
  if (button16.risingEdge()) {
    usbMIDI.sendNoteOff(76, 99, channel);  // 66 = F#4
  }
  if (button17.risingEdge()) {
    usbMIDI.sendNoteOff(77, 99, channel);  // 67 = G4
  }
  if (button18.risingEdge()) {
    usbMIDI.sendNoteOff(78, 99, channel);  // 68 = G#4
  }
  if (button19.risingEdge()) {
    usbMIDI.sendNoteOff(79, 99, channel);  // 69 = A5
  }
  if (button20.risingEdge()) {
    usbMIDI.sendNoteOff(80, 99, channel);  // 70 = A#5
  }
  if (button21.risingEdge()) {
    usbMIDI.sendNoteOff(81, 99, channel);  // 71 = B5
  }

  if (button22.risingEdge()) {
    usbMIDI.sendNoteOff(41, 99, channel);  // 62 = D4
  }
  if (button23.risingEdge()) {
    usbMIDI.sendNoteOff(42, 99, channel);  // 63 = D#4
  }
  if (button24.risingEdge()) {
    usbMIDI.sendNoteOff(43, 99, channel);  // 64 = E4
  }
  if (button25.risingEdge()) {
    usbMIDI.sendNoteOff(44, 99, channel);  // 65 = F4
  }
  if (button26.risingEdge()) {
    usbMIDI.sendNoteOff(45, 99, channel);  // 66 = F#4
  }
  if (button27.risingEdge()) {
    usbMIDI.sendNoteOff(46, 99, channel);  // 67 = G4
  }
  if (button28.risingEdge()) {
    usbMIDI.sendNoteOff(47, 99, channel);  // 68 = G#4
  }
  if (button29.risingEdge()) {
    usbMIDI.sendNoteOff(48, 99, channel);  // 69 = A5
  }
  if (button30.risingEdge()) {
    usbMIDI.sendNoteOff(79, 99, channel);  // 70 = A#5
  }
  if (button31.risingEdge()) {
    usbMIDI.sendNoteOff(50, 99, channel);  // 71 = B5
  }

  if (button32.risingEdge()) {
    usbMIDI.sendNoteOff(51, 99, channel);  // 62 = D4
  }
  if (button34.risingEdge()) {
    usbMIDI.sendNoteOff(52, 99, channel);  // 63 = D#4
  }

  if (button35.risingEdge()) {
    usbMIDI.sendNoteOff(53, 99, channel);  // 65 = F4
  }
  if (button36.risingEdge()) {
    usbMIDI.sendNoteOff(54, 99, channel);  // 66 = F#4
  }
  if (button37.risingEdge()) {
    usbMIDI.sendNoteOff(55, 99, channel);  // 67 = G4
  }
  if (button38.risingEdge()) {
    usbMIDI.sendNoteOff(56, 99, channel);  // 68 = G#4
  }
  if (button39.risingEdge()) {
    usbMIDI.sendNoteOff(57, 99, channel);  // 69 = A5
  }
  if (button40.risingEdge()) {
    usbMIDI.sendNoteOff(58, 99, channel);  // 70 = A#5
  }
  if (button41.risingEdge()) {
    usbMIDI.sendNoteOff(59, 99, channel);  // 71 = B5
  }

  
  // Check each button for "rising" edge
  // Send a MIDI Note Off message when each button releases
  // For many types of projects, you only care when the button
  // is pressed and the release isn't needed.
  // rising = low (pressed - button connects pin to ground)
  //          to high (not pressed - voltage from pullup resistor)
 
  // MIDI Controllers should discard incoming MIDI messages.
  // http://forum.pjrc.com/threads/24179-Teensy-3-Ableton-Analog-CC-causes-midi-crash
  while (usbMIDI.read()) {
    // ignore incoming messages
  }
}
