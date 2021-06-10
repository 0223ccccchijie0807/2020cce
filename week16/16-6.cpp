void setup()//設定只做1次
{
    size(400,200);
}
float start=0;
void draw ()
{
  background(#FFB7B9);
  if(start<10) start+=0.01;
  fill(255); text(start,200,150);
  for(int i=0;i<24;i++)
  {
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(#DED3FF);
    if(i%3==1) fill(255);
    if(i%3==2) fill(#90CCFF);
    if(i==0) fill(#FFFA8B);
    arc(100,100,180,180, shift+0+start , shift+PI/12+start);
  }

}
