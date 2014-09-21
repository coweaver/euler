int main(){
   help(1001);
   return 1;
}



int help(long l){
  long corners=1;
  long factor=2;
  long sum=1;
  long sides=3;
  long i = 0;
  for (sides;sides<=l;sides= sides + 2){
    for (i; i <4; i++){
      corners+=factor;
      sum+=corners;
    }
    factor = factor + 2;
    i=0;
  }
  printf("%lu\n",sum);
  return 1;


}

    
