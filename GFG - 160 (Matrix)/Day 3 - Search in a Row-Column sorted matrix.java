class Solution {
    public boolean matSearch(int[][] mat, int x) {
        int r = 0, c = mat[0].length - 1;
        while (r < mat.length && c >= 0) {
            if (mat[r][c] == x) return true;
            else if (mat[r][c] > x) c--;
            else r++;
        }
        return false;
    }
}
