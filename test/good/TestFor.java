    
class TestFor {
    public static void main(String[] args) {
        System.out.println(new Test().run());
    }
}

class Test {

    public int run(){
        int i;
        int j;
        j=0;
        for(i=0; i<10; i=i+1){
            j = 42;
        }
        return j;
    }
}