class TestDoWhile {
    public static void main(String[] args) {
        System.out.println(new Test().run());
    }
}

class Test {

    public int run(){
        int j;
        int i;
        i = 0;
        do {
            j = 42;
            i = i+1;
        } while (i < 10);
        return j;
    }
}
