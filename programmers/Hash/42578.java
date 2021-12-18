import java.util.HashMap;
import java.util.ArrayList;

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        int temp = 0;
        HashMap<String, Integer> hashMap = new HashMap<String, Integer>();
        
        for(int i=0;i<clothes.length;i++){
            if(!hashMap.containsKey(clothes[i][1])){
                hashMap.put(clothes[i][1], 1);
            }
            else{
                temp = hashMap.get(clothes[i][1]);
                temp++;
                hashMap.put(clothes[i][1], temp);
            }
        }
        for(String key:hashMap.keySet()){
            answer *= hashMap.get(key)+1;
        }
        System.out.println(answer);
        
        return answer-1;
    }
}