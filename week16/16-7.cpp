void setup()//�]�w�u��1��
{
    size(400,200);
}
float start=0,v=0.07;//v�O���઺�t��
void draw ()
{
  background(#FFB7B9);
  if(v>0.001){
    start +=v;//��m�B�t�סB�[�t��(��m �|�[�W �t��)
    v *=0.99;//��m�B�t�סB�[�t��(�t�� �|�[�W �[�t��)
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
