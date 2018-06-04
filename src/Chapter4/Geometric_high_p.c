#include<stdio.h>
#include"MT.h" //メルセンヌ・ツイスタという乱数生成プログラム使ってます。詳しくはググってください
int main(){
  int l,m,n=0;
  double a,b,c,d,e,f,g,h,i,j=0;
  double x=1.0;
  for(l=0;l<10000;l++){
      init_genrand(l);//乱数の初期化。()内の数値(int)で出てくる乱数を変更できるとか
      while(x>0.3){
	      n++;
		  x=genrand_real3();//(0,1)の一様乱数。
	  }//0.0003未満になるとwhile文が終わりnの数によって分ける
      if(n==1){
    	  a++;
	  }
      else if(n==2){
	      b++;
      }
      else if(n==3){
	      c++;
      }
      else if(n==4){
	      d++;
      }
      else if(n==5){
	      e++;
      }
	  else if(n==6){
		  f++;
      }
	  else if(n==7){
		  g++;
      }
  	  else if(n==8){
	  	  h++;
	  }
      else if(n==9){
	  	  i++;
	  }
      else if(n==10){
	   	  j++;
      }
      x=1.0;
      n=0;
  }
  printf("1, %lf\n2, %lf\n3, %lf\n4, %lf\n5, %lf\n6, %lf\n7, %lf\n8, %lf\n9, %lf\n10, %lf",a/10000,b/10000,c/10000,d/10000,e/10000,f/10000,g/10000,h/10000,i/10000,j/10000);
}

/*成功率0.3の幾何分布(初めて成功したのは何回目か) 10000回施行
 * Zeta分布がどのようなものかよくわかっていないため成功率が高いタイプも作成*/
