public class secondlargest {
    public static void main(String[] args) {
        int first_largest = 0;
        int second_largest = 0;

        int [] arr = {2,45,65,7,21,90,90};

        for (int item : arr) {
            if (item > first_largest){
                second_largest = first_largest;
                first_largest = item;
            }
            
            else if(item > second_largest && item != first_largest){
                second_largest = item;
            }
        }
    
        System.out.println(second_largest);
    }
    
}
