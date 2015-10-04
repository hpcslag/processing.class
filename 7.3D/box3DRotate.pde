void setup() {
  size(200, 200, P3D);
}

void draw() {
  background(0);
  translate(width/2, height/2);
  rotateY(frameCount*PI/60);
  box(40, 30, 20);
}
