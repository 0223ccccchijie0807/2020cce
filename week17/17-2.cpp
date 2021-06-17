void setup()
{
    size(400,200);
    textSize(40);
}
char c='9';
int win=0;
void draw()
{
  background(#718BC1);
  text("Press:"+c,100,100);
  text("You  :"+key,100,150);
  if(c==key ) win=1;
  else win=0;
  if(win==1) text("You Win!",100,50);
}
