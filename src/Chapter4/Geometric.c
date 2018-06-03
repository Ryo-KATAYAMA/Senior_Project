#include<stdio.h>
#include"MT.h" //メルセンヌ・ツイスタという乱数生成プログラム使ってます。詳しくはググってください
int main(){
  int l,m,n=0;
  double a,b,c,d,e,f,g,h,i,j=0;
  double x=1.0;
  for(l=0;l<10000;l++){
      init_genrand(l);//乱数の初期化。()内の数値(int)で出てくる乱数を変更できるとか
      while(x>0.0003){
	      n++;
		  x=genrand_real3();//(0,1)の一様乱数。
	  }//0.0003未満になるとwhile文が終わりnの数によって分ける
      if(n<1000){
    	  a++;
	  }
      else if(n<2000){
	      b++;
      }
      else if(n<3000){
	      c++;
      }
      else if(n<4000){
	      d++;
      }
      else if(n<5000){
	      e++;
      }
	  else if(n<6000){
		  f++;
      }
	  else if(n<7000){
		  g++;
      }
  	  else if(n<8000){
	  	  h++;
	  }
      else if(n<9000){
	  	  i++;
	  }
      else if(n<10000){
	   	  j++;
      }
      x=1.0;
      n=0;
  }
  printf("0, %lf\n1000, %lf\n2000, %lf\n3000, %lf\n4000, %lf\n5000, %lf\n6000, %lf\n7000, %lf\n8000, %lf\n9000, %lf",a/10000,b/10000,c/10000,d/10000,e/10000,f/10000,g/10000,h/10000,i/10000,j/10000);
}

/*成功率0.0003の幾何分布(初めて成功したのは何回目か) 10000回施行*/
