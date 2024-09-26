import java.util.Stack;

class Solution {
    public boolean isValid(String str) {
        
        Stack<Character>s=new Stack<Character>();
        for(int i=0;i<str.length();i++){
            char curr=str.charAt(i);
            if(is_Opening(curr))
            {
                s.push(curr);
            }
            else {
                if(s.isEmpty()){
                    return false;
                }else if(!is_Matching(s.peek(),curr)){
                    return false;
                }else{
                    s.pop();
                }
            }
            
        }
        return s.isEmpty();
    }
        
         boolean is_Opening(char ch){
            return( ch=='(' || ch=='{' || ch=='[');
        }
        
         boolean is_Matching(char a, char b){
            return(a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
        }
        
    
        
    
}
