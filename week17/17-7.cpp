String A="mother";
String line="";
void setup(){
  size(400,300);
  textSize(40);
}
void draw(){
  background(0);
  text(A,100,100);
  text(line+"|",100,150);
}
void keyPressed(){
  int len=line.length();
  if(key>='a' && key<='z') line=line+key;//小寫
  if(key>='A' && key<='Z') line=line+key;//大寫
  if(key==ENTER) {   }//比對字是否正確
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);//倒退刪掉
}
