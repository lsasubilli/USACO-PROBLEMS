public class MyClass {
    public static void main(String args[]) {
      int[] array = {1,2,5,7};
      int low = 0;
      int count = 0;
      int twolow = array.length-1;
      for(int i=0;i<array.length-1;i++){
          if(array[i+1]-array[i]>1){
            System.out.println(array[low]+"-"+array[i]);
            low = i+1;
            
      }
    }
    for(int k=array.length-1;k>0;k--){
          if(array[k]-array[k-1]>1){
              System.out.println(array[k]+"-"+array[twolow]);
              twolow =k-1; 
          }
      }
    }
}
