int ans=0;
void setup(){//�]�w �u���@��
  size(300,300);
  //float ans = random(60);//�üơA�|�O<60���B�I��
  //text(ans,20,30);//�e�Xans
  textSize(30);
}
void draw(){//�e�� �C��60��
    background(#7E7DBC);
    text(ans,20,30);
}
void mousePressed()//���U�h�N����1��
{
    ans=(int)random(60);//�B�I�Ƥ��ઽ���ܾ��

}
