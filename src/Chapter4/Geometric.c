#include<stdio.h>
#include"MT.h" //メルセンヌ・ツイスタ使う
int main(){
  int l,m,n=0;
  double a,b,c,d,e,f,g,h,i,j=0;
  double x=1.0;
  for(l=0;l<1000;l++){
	  for(m=0;m<10000;m++){		  
    	  if(x>0.003){
	    	  n++;
		      x=genrand_real3();//乱数呼び出し
	      }
	      else{
        	  if(n<100){
        		  a++;
	          }
        	  else if(n<200){
	        	  b++;
    	      }
    	      else if(n<300){
	    	      c++;
    	      }
    	      else if(n<400){
	    	      d++;
     	      }
    	      else if(n<500){
	    	      e++;
        	  }
	          else if(n<600){
		          f++;
    	      }
	          else if(n<700){
		          g++;
    	      }
    	      else if(n<800){
	    	      h++;
	          }
        	  else if(n<900){
	        	  i++;
	          }
    	      else if(n<1000){
	    	      j++;
    	      }
    	      init_genrand(n);//乱数の初期化、()に異なる数字を入れると乱数も変わるとか。
    	      break;//whileダメだったからfor文でゴリ押してwhileのまね事してます
		  }
	  }
  }
  printf("0, %lf\n100, %lf\n200, %lf\n300, %lf\n400, %lf\n500, %lf\n600, %lf\n700, %lf\n800, %lf\n900, %lf",a/1000,b/1000,c/1000,d/1000,e/1000,f/1000,g/1000,h/1000,i/1000,j/1000);
}

/*成功率0.003の幾何分布のヒストグラム。初めて成功したのは何回目か
 * 1000回施行*/
