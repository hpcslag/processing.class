void setup()
{
    size(400,150);
    background(0);
    
    int[] numbers = { 2, 5, 3, 1, 6, 5, 9, 4, 7, 3, 2, 5, 1, 4, 2, 5 };
    int w = 400/numbers.length; //width of charts (auto width)
    int max_number = max(numbers);
    int h = 150/max_number; //hight of charts (auto hight)
    
    fill(255,255,255);
    for(int i=0;i<numbers.length;i++){
       rect(i*w, 150, w, -h*numbers[i]); // Draw
    }
}
