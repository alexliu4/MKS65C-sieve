# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#include <math.h>

unsigned int length;

/*
char * make_arr(int n){
  //scanf("%lu\n", &a);
  if (n < 5000){
    length = 1.3 * n * log(n) + 10;
  }
  else {
    length = 1.15 * n * log(n);
  }

  char * arr = (char *) calloc(1, sizeof(length) );


  for (int i = 0; i < length; i++){
    arr[i] = 2 * i + 1;
    //printf("%lu\n", arr[i]);
  }
  arr[0] = 2;
  return arr;

}
*/
void print_arr(unsigned long arr[]){
  int i;
  printf("Size of Array%d\n", length);
  for (i = 0; i < length; i++){
    printf("%dth Element: %lu\n", i, arr[i]);

  }
}


unsigned int sieve(int n){
  //make array based on n
  if (n < 5000){
    length = (int) 1.3 * n * log(n) + 10;
  }
  else {
    length = (int) 1.15 * n * log(n);
  }

  //printf("%d\n", length);
  char * arr = (char *) calloc(1, length);

	int ans = 2;
	while(n){
    //printf("ARR[ANS]: %d\n", arr[ans]);
		if(arr[ans] != 1){
			//printf("prime %d: %d\n", n, ans);
			if(!--n){
				return ans;
			}
      //makes each element thats a factor of counter into 1
      for (int temp = ans; temp < length; temp += ans){
        arr[temp] = 1;
      }
	  }
    //printf("ANS: %d\n", ans);
    ans++;
  }
	return 0;
}

/*
  for (int i = 2; i*i < length; i++){
    if (!arr[i]){
      for (int a = i+i; a < length; a+=i){
	       arr[a] = 1;
      }
    }
  }
  //
  for (int i = 2; i < length; i++){
    if (!arr[i]){
      //printf("index is: %d\n", i);
      n--;
    }
    if(!n){
      //print_arr(arr);
      return i;
    }
  }
  return 0;
}
*/


/*
//finds the nth prime
unsigned long sieve(int n){
  char * arr = make_arr(n);
  unsigned long toN = 0;
  //print_arr(arr);

  for (unsigned long i = 0; i < length; i++){
    //printf("Arr[i] : %lu\n", arr[i]);
    if (arr[i]){
      //printf("removing is: %lu\n", arr[i+1]);
      for (int j = i+1; j < length; j++){
        if (! (arr[j] % arr[i]) ){
          //printf("REMOVED");
          arr[j] = 0;
        }
      }
      n--;
    }
    toN++;
    //printf("N : %d\n", n);
    //printf("toN : %lu\n", toN);
    //printf("ans : %d\n", arr[toN - 1]);
    if(!n){
      //printf("%lu\n", toN);
      return arr[toN - 1];
    }
  }
  return 0;
}
*/
