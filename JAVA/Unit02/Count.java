class Count {
    static int count=0;
    public void increment(){
        count=count+1;
    }
    public void main(String[] args){
        Counter obj1=new Counter();
        Counter obj2=new Counter();
        System.out.println(Counter.count);

        obj1.increment();
        obj2.increment();
        System.out.println(Counter.count);
    }
}
