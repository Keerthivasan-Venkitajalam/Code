
public class Sum3DArray {
    public static void main(String[] args){
        int[][][] arr = new int[][][]{
            {{1,0,0},{0,0,1},{0,1,0}},
            {{1,0,0},{0,0,1},{0,1,0}},
            {{1,0,0},{0,0,1},{0,1,0}}
        };
        int sum = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++)
                    sum += arr[i][j][k];
            }
        }
        System.out.println(sum);
    }
}

