//Problam: you may be using a library that incompatible with this version of processing
//Solution: downgrade your processing version 2.1
//Download library: http://www.jbox2d.org/processing/

import org.jbox2d.p5.*;

Physics physics;

void setup() {
  size(500, 500);
  frameRate(60);
  physics = new Physics(this, width, height);
  physics.setDensity(1.0); 
}

void draw() {
  background(204);
}

void mousePressed() {
  physics.createCircle(mouseX, mouseY, 15);
