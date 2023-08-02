public class canJump {
    public static boolean canJumpop(int[] nums) {
        int reachable = 0;
        for (int i = 0; i < nums.length; i++) {
            if (i > reachable)
                return false;
            reachable = Math.max(reachable, i + nums[i]);
        }
        return true;
    }

    public static void main(String[] args) {
        int nums[] = { 2, 0 };
        System.out.println(canJumpop(nums));
    }
}
