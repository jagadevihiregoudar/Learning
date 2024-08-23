int main(){
  int num1 = 5;
  int num2 = 3;
   
  //Function call
  int sum = add(num1,num2);

  print("Sum:%dn",sum);

  return 0;
 }

//Function definition
int add(int a,int b){
   return a + b;
}