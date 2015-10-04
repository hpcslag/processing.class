import ddf.minim.*;

Minim minim;
AudioSample kick;
AudioSample snare;

void setup() {
  minim = new Minim(this);
  kick = minim.loadSample("a.wav", 2048);
  snare = minim.loadSample("b.wav", 2048);
}

void draw() {
}

void keyPressed() {
  if (key == 'a') kick.trigger();
  if (key == 'b') snare.trigger();
}

void stop() {
  kick.close();
  snare.close();
  minim.stop();

  super.stop();
}
