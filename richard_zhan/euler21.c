int main(){
  int i = 9999;
  int sum = 0;
  for (i; i > 0; i--){
    if (i == divis(divis(i)) && i != divis(i)){
      sum = sum + i;
    }
  }
  printf("%d\n",sum);
  return 1;
}


int divis(int i){
  int j;
  int sum = 0;
  for (j=1; j < i; j++){
    if (i%j == 0){
      sum = sum + j;
    }
  }
  return sum;
}

  
