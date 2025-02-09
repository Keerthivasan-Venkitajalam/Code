public class Arr {
    int a[]={10,20,30,40,50};
    void Findelement(int element){
        for(int i=0;i<a.length;i++){
            if(a[i]==element){
                System.out.println("Element found at index "+i);
                return;
            }
        }
        System.out.println("Element not found");
    }
    int FindPosition(int element){
        for(int i=0;i<a.length;i++){
            if(a[i]==element){
                return i;
            }
        }
        return -1;
    }
    void soothelement(int element){
        int pos = FindPosition(element);
        if(pos==-1){
            System.out.println("Element not found");
        }
        else{
            for(int i=pos;i<a.length-1;i++){
                a[i]=a[i+1];
            }
            a[a.length-1]=0;
        }
    }
}
