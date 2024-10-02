import java.util.Scanner;

public class Reverse {
    
    String rev(char[] c){
        int s =0;
        int e = c.length-1;
        while(s<e){
            char temp = c[s];
            c[s] = c[e];
            c[e] = temp;
            s++;
            e--;
        }
        return String.valueOf(c);
    }


public static void main(String[] args){

    Scanner scanner = new Scanner(System.in);
    String word = scanner.nextLine();
    char[] c = word.toCharArray();
    Reverse r = new Reverse();
    System.out.println(r.rev(c));
}
}