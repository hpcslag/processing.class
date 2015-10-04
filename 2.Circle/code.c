void setup(){
  size(200,200); //window width and hight
  noStroke();
  background(255); //background color
  fill(0,102,153,204);
  smooth();
  noLoop();
}

void draw(){
  circles(40, 80);
  circles(90, 70);
}

void circles(int x,int y){
  ellipse(x,y,50,50);
  ellipse(x+20,y+20,60,60);
}
