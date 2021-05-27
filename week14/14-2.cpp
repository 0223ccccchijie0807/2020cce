int ans=0;
void setup(){//設定 只做一次
  size(300,300);
  //float ans = random(60);//亂數，會是<60的浮點數
  //text(ans,20,30);//畫出ans
  textSize(30);
}
void draw(){//畫圖 每秒60次
    background(#7E7DBC);
    text(ans,20,30);
}
void mousePressed()//按下去就互動1次
{
    ans=(int)random(60);//浮點數不能直接變整數

}
