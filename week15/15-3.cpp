import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//¤j¦r
  player= new SoundFile(this,"tada.mp3");
}
void draw()
{
  int s=second();//s¼W¥[ 0...59
  background(58,114,191);
  //text( 59-s,100,100);// 59...0 ´î¤Ö
  text(10-s%11,100,100);//0...10 ¦³11­Ó¼Æ¦r
  if(10-s%11==0 && !player.isPlaying())
  {
      player.play();
  }
}
