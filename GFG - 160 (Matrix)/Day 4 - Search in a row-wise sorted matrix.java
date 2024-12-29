class Solution {
    public boolean searchRowMatrix(int[][] mat, int x) {
        for (int[] row : mat) {
            if (Arrays.binarySearch(row, x) >= 0) {
                return true;
            }
        }
        return false;
    }
}
