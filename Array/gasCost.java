public class gasCost {
    public static int canCompleteCircuit(int[] gas, int[] cost) {
        int total = 0, avail = 0, ans = 0;
        for (int i = 0; i < gas.length; i++) {
            total += gas[i] - cost[i];
            avail += gas[i] - cost[i];
            if (avail < 0) {
                avail = 0;
                ans = i + 1;
            }
        }
        if (total < 0) {
            return -1;
        }
        return ans;
    }

    public static void main(String[] args) {
        int[] gas = { 1, 2, 3, 4, 5 };
        int[] cost = { 3, 4, 5, 1, 2 };
        System.out.println(canCompleteCircuit(gas, cost));
    }
}
