import java.util.HashSet;
import java.util.Iterator;

public class hashing {
    public static void main(String[] args) {
        HashSet<Integer> set = new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(1);
        set.add(3);
        if (set.contains(1)) {
            System.out.println("Set contains 1");
        }
        set.remove(1);
        if (!set.contains(1)) {
            System.out.println("Does not contain 1");
        }
        System.out.println(set.size());
        System.out.println(set);
        Iterator it = set.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

    }
}
