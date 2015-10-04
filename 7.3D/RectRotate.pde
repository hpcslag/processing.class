void setup() {
  size(200, 200);
  rectMode(CENTER);
}

void draw() {
  background(255);
  translate(width/2, height/2);
  rotate(frameCount*PI/60);
  rect(0, 0, width/2, height/2);
}
