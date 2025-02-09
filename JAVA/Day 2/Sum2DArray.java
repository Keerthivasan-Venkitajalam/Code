public class Sum2DArray {
    public static void main(String[] args){
        int arr[][]=new int[][]{{1,0},{0,1}};
        int sum=0;
        for(int i=0;i<2;i++){
            for(int j=0; j<2;j++){
                sum+=arr[i][j];
            }
        }
        System.out.println(sum);
    }
}
