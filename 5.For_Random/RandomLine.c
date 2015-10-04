void setup(){
  size(1280,720);
  colorMode(RGB,100);
  
  
  for(int i = 0 ; i < 100; i++){
    stroke(random(100),random(100),random(100));
    line(random(width),random(height),random(width),random(height));
  }
  
}
