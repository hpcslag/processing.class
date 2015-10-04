boolean btnOver = false;
color btnHeightLightColor,btnColor;

int btnX,btnY,btnW,btnH;



void setup() {
  size(1280, 720);
  
  btnHeightLightColor = color(150); //btn mouseover color
  btnColor = color(0); //btn default color
  
  ellipseMode(CENTER); //CENTER is system attribute
}

void draw(){
  update(mouseX,mouseY); //mouseX,Y is system attribute
  background(255,255,255);
  
  if(btnOver){
    fill(btnHeightLightColor);
  }else{
    fill(btnColor);
  }
  
  stroke(255);
  
  btnX = 120;
  btnY = 50;
  btnW = 500;
  btnH = 50;
  rect(btnX,btnY,btnW,btnH);
  
}


void update(int x,int y){ //keep listen mouse click button
  if(overButton(btnX,btnY,btnW,btnH)){
    btnOver = true;
  }else{
    btnOver = false;
  }
}

void mousePressed(){
  if(btnOver){
    println("Button Click");
  }
}

boolean overButton(int x,int y,int width,int height){
  if(mouseX >= x && mouseY <= x+width && mouseY >= y && mouseY <= y+height){
    return true;
  }else{
    return false;
  }
}
