void setup()//設定只做1次
{
    size(400,200);
}
void draw ()
{
  background(#A9B2FA);
  fill(255);
  ellipse(50,50,80,80);// 圓心 寬 高
  fill(255,0,0);
  float start=mouseX/50.0;
  text(start,100,100);//
  arc (50,50,80,80,0+start,0.1+start);//圓心 寬 高 開始 結束
}
