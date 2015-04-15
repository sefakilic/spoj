#include <stdio.h>
#define myabs(x) ((x < 0)? (-x):x)
int main() {
  double mw, mi, tw, ti;
    
  double E1;
  double E2;
  double ci, cw, em;
  double final_temp;
    
  ci = 2.09;
  cw = 4.19;
  em = 335;
    
    
  while(1) {
        
    scanf("%lf %lf %lf %lf", &mw, &mi, &tw, &ti);
    if(mw == 0 && mi == 0 && tw == 0 && ti == 0)
      break;
    // E1 to make ice 0C
    E1 = mi * ci * myabs(ti);
    // E2 to make water 0C
    E2 = mw *cw * tw;
        
    if(E1 > E2) {
      E1 = E1 - E2;
      if(mw * em > E1) { // part of water become ice. final temp = 0
	final_temp = 0;
	double delta_m = E1 / em;
	mw = mw - delta_m;
	mi = mi + delta_m;
      }
      else { // all water become ice 
	E1 = E1 - mw * em;
	final_temp = -1 * (E1 / (ci * (mw + mi)));
	mi = mi + mw;
	mw = 0;
      }
    }
    else { // E1 <= E2
      E2 = E2 - E1;
      if(mi * em > E2) { // part of ice will become water. final temp = 0
	final_temp = 0;
	double delta_m = E2 / em;
	mw = mw + delta_m;
	mi = mi - delta_m;
      }
      else { // all ice will become water
	E2 = E2 - mi * em;
	final_temp = E2 / (cw * (mw + mi));
	mw = mi + mw;
	mi = 0;
      }
    }
    
    printf("%.1lf g of ice and %.1lf g of water at %.1lf C\n", mi, mw, final_temp);
  }
  return 0;
}
        
                
            
            
        
        
