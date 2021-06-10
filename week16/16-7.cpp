void setup()//設定只做1次
{
    size(400,200);
}
float start=0,v=0.07;//v是旋轉的速度
void draw ()
{
  background(#FFB7B9);
  if(v>0.001){
    start +=v;//位置、速度、加速度(位置 會加上 速度)
    v *=0.99;//位置、速度、加速度(速度 會加上 加速度)
  }
  fill(255); text(start,200,150);text(v,200,170);
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
