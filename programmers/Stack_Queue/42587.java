import java.util.Queue;
import java.util.Collections;
import java.util.LinkedList;

class Solution {
    class ToPrint{
        int index;
        int priority;
        public ToPrint(int index, int priority){
            this.index = index;
            this.priority = priority;
        }
    }
    
    public int solution(int[] priorities, int location) {
        int answer = 0;
        Queue<ToPrint> list = new LinkedList<>();
        for(int i=0;i<priorities.length;i++){
            list.add(new ToPrint(i, priorities[i]));
        }
        while(!list.isEmpty()){
            ToPrint cur = list.poll();
            boolean flag = false;
            for(ToPrint p : list){
                if(p.priority > cur.priority){
                    flag = true;
                }
            }
            if(flag){
                list.add(cur);
            }else{
                answer++;
                if(cur.index == location){
                    return answer;
                }
            }
        }
        return answer;
    }
}