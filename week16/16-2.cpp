void setup()//�]�w�u��1��
{
    size(400,200);
}
void draw ()
{
  background(#A9B2FA);
  fill(255);
  ellipse(50,50,80,80);// ��� �e ��
  fill(255,0,0);
  float stop=mouseX/50.0;
  text(stop,100,100);//
  arc (50,50,80,80,0,stop);//��� �e �� �}�l ����
}

