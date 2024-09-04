//check obstacle ony by one at each position ccording to the input commands ==>  BEATS 38%
class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        Set<String> obstacleSet = new HashSet<>();
        for (int[] obstacle : obstacles) {
            obstacleSet.add(obstacle[0] + "," + obstacle[1]);
        }
        int[][] directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // North, East, South, West
        int x = 0, y = 0, direction = 0, maxDistance = 0;
        for (int command : commands) {
            if (command == -1) {
                direction = (direction + 1) % 4;
            } else if (command == -2) {
                direction = (direction + 3) % 4;
            } else {
                for (int i = 0; i < command; i++) {
                    int newX = x + directions[direction][0];
                    int newY = y + directions[direction][1];
                    if (!obstacleSet.contains(newX + "," + newY)) {
                        x = newX;
                        y = newY;
                        maxDistance = Math.max(maxDistance, x * x + y * y);
                    } else {
                        break;
                    }
                }
            }
        }

//RATHER OPTIMIZED APPROACH BY USING AN ORDED SET HASHMAP THAT CHECKS NEAREST OBSTACLE ONLY AND DO OPERATIONS ACCORDINGLY ==> BEATS 65%
  class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        Map<Integer,TreeSet<Integer>> xobs=new HashMap<>();
        Map<Integer,TreeSet<Integer>> yobs=new HashMap<>();
        for(int[] o:obstacles){
            TreeSet<Integer> xset=xobs.getOrDefault(o[0],new TreeSet<>());
            xset.add(o[1]);
            TreeSet<Integer> yset=yobs.getOrDefault(o[1],new TreeSet<>());
            yset.add(o[0]);
            xobs.put(o[0],xset);
            yobs.put(o[1],yset);
        }
        int maxdistance=0;
        int d=0;
        int x=0; int y=0;
        for(int i=0;i<commands.length;i++){
            if(commands[i]>0){
                int[] pos=move(d,commands[i],x,y,xobs,yobs);
                x=pos[0];
                y=pos[1];
                maxdistance=Math.max((x*x)+(y*y),maxdistance);
            }
            else{
                d=getdir(d,commands[i]);
            }
        }
        return maxdistance;        
    }
    private int getdir(int d,int command){
        if(command==-2){
            d=d-1;
        }
        else{
            d=d+1;
        }
        if(d>3) return 0;
        if(d<0) return 3;
        return d;
    }
    // n=0 e=1 s=2 w=3 
    private int[] move(int d,int command,int x,int y, Map<Integer,TreeSet<Integer>> xobs,
    Map<Integer,TreeSet<Integer>> yobs){
        if(d==0){
            Integer o=xobs.getOrDefault(x, new TreeSet<>()).ceiling(y);
            if(o!=null && o<=y+command && o!=y){
                y=o-1;
            }
            else{
                y+=command;
            }
        }
        else if(d==1){
            Integer o=yobs.getOrDefault(y, new TreeSet<>()).ceiling(x);
            if(o!=null && o<=x+command && o!=x){
                x=o-1;
            }
            else{
                x+=command;
            }
        }
        else if(d==2){
            Integer o=xobs.getOrDefault(x, new TreeSet<>()).floor(y);
            if(o!=null && o>=y-command && o!=y){
                y=o+1;
            }
            else{
                y-=command;
            }
        }
        else if(d==3){
            Integer o=yobs.getOrDefault(y, new TreeSet<>()).floor(x);
            if(o!=null && o>=x-command && o!=x){
                x=o+1;
            }
            else{
                x-=command;
            }
        }
        return new int[]{x,y};
    }
}



// MORE OPTIMIZED AAPRACH SIMILAR TO THE FIRST ONE, USE HASHVALUE OF OBSTACLE COORDINATE IF FOUND ANY USING A HASH MULTIPLIER ==> BEATS 85%
class Solution {
    private static final int HASH_MULTIPLIER = 60001;
    public int robotSim(int[] commands, int[][] obstacles) {
        Set<Integer> obstacleSet = new HashSet<>();
        for (int[] obstacle : obstacles) {
            obstacleSet.add(hashCoordinates(obstacle[0], obstacle[1]));
        }
        int[][] directions = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
        int[] currentPosition = { 0, 0 };
        int maxDistanceSquared = 0;
        int currentDirection = 0;
        for (int command : commands) {
            if (command == -1) {
                currentDirection = (currentDirection + 1) % 4;
                continue;
            }
            if (command == -2) {
                currentDirection = (currentDirection + 3) % 4;
                continue;
            }
            int[] direction = directions[currentDirection];
            for (int i = 0; i < command; i++) {
                int nextX = currentPosition[0] + direction[0];
                int nextY = currentPosition[1] + direction[1];
                if (obstacleSet.contains(hashCoordinates(nextX, nextY))) {
                    break;
                }
                currentPosition[0] = nextX;
                currentPosition[1] = nextY;
                maxDistanceSquared = Math.max(maxDistanceSquared,nextX * nextX + nextY * nextY);
            }
        }
        return maxDistanceSquared;
    }
    private int hashCoordinates(int x, int y) {
        return x + HASH_MULTIPLIER * y;
    }
}
        return maxDistance;
    }
}

//MOST OPTIMIZED FOLLOW THISSSSS ===> BEATS 100%



class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        Robot robot = new Robot();
        Set<Obstacle> obstacleSet = new HashSet<>();
        for (int[] obstacle : obstacles) {
            obstacleSet.add(new Obstacle(obstacle[0], obstacle[1]));
        }
        for (int command : commands) robot.handleCommand(command, obstacleSet);
        return robot.maxDistance;
    }
    private static class Robot {
        public int x = 0, y = 0, dir = 0, maxDistance = 0;
        public Set<Obstacle> obstacles;
        Robot() {}
        private void handleCommand(int command, Set<Obstacle> obstacles) {
            switch (command) {
                case -2:
                    dir = (dir + 3) % 4;
                    return;
                case -1:
                    dir = (dir + 1) % 4;
                    return;
                default: {
                    while (command-- > 0) {
                        int newX = x, newY = y;
                        switch (dir) {
                            case 0: ++newY; break;
                            case 1: ++newX; break;
                            case 2: --newY; break;
                            default: --newX;
                        }
                        if (!obstacles.contains(new Obstacle(newX, newY))) {
                            x = newX;
                            y = newY;
                        }
                    }
                    maxDistance = Math.max(x * x + y * y, maxDistance);
                }
            }
        }
    }
    private static class Obstacle {
        public int x, y;

        public Obstacle(int x, int y) {
            this.x = x;
            this.y = y;
        }
        public boolean equals(Object other) {
            return x == ((Obstacle) other).x && y == ((Obstacle) other).y;
        }
        public int hashCode() {
            return x + y * 413;
        }
    }
}
