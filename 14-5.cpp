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
int N=0;
void draw ()
{
  textAlign(CENTER,CENTER);//文字對齊
  background(#23CBA0);
    for(int i=0;i<N;i++){
      fill(255); ellipse(i*80+40,100,55,55);
      fill(0);   text(a[i],i*80+40,100);
    }
}
void mousePressed(){
  N++;
}
