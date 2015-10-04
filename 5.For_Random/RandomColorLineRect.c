void setup(){
  size(1280,720);
  colorMode(HSB,100);
  
  
  for(int x = 0; x < width; x++){
    float color1 = random(100);
    stroke(color1,60,99);
    line(x,0,x,height);
  }
  
}
