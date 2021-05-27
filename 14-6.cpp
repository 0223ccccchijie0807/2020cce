int []a =new int[47];
void setup()
{
    size(500,200);
    textSize(30);
    for(int i=0;i<47;i++) a[i]=i;
    //讓a[i]的陣列裡 要先放整齊對應的數字
    for(int i=0;i<1000;i++)
    {
      int i1=(int)random(47);
      int i2=(int)random(47);
      int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
    }
}
int N=0,rolling=0;
void draw ()
{
  textAlign(CENTER,CENTER);//文字對齊
  background(#23CBA0);
    for(int i=0;i<N;i++){
      int x=i*80+40;
      if(i==N-1 && rolling>0)
      {
        x+=rolling;
        rolling -=3;
      }
      fill(255); ellipse(x,100,55,55);
      fill(128); text(a[i],x+2,100+2);
      fill(0);   text(a[i],x,100);
    }
}
void mousePressed(){
  rolling = 500;
  N++;
}
