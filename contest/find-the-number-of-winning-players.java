class Solution {
    public int winningPlayerCount(int n, int[][] pick) {
        // Dictionary to keep track of how many times each color has been picked by each player
        HashMap<Integer, HashMap<Integer, Integer>> playerColorCount = new HashMap<>();
        
        // Iterate over the picks and populate the dictionary
        for (int[] p : pick) {
            int player = p[0];
            int color = p[1];
            
            playerColorCount.putIfAbsent(player, new HashMap<>());
            
            HashMap<Integer, Integer> colorCount = playerColorCount.get(player);
            colorCount.put(color, colorCount.getOrDefault(color, 0) + 1);
        }
        
        // Now, check how many players win
        int winningPlayers = 0;
        
        for (int player = 0; player < n; player++) {
            if (playerColorCount.containsKey(player)) {
                HashMap<Integer, Integer> colorCount = playerColorCount.get(player);
                for (int count : colorCount.values()) {
                    if (count > player) {
                        winningPlayers++;
                        break; 
                    }
                }
            }
        }
        
        return winningPlayers;
    }
}
