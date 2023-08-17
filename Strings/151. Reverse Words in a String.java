151. Reverse Words in a String

//using stack to push values into stack 

//  working

// answer gets stored in temp till charAt encounters an space " " . as soon as space is
// encountered , the value inside temp is pushed into stack and the temp is emptied i.e reinitialized to temp=""
// at the end if the last word doesnt end with a trailing space it wont get pushed into stack so if we leave the last value in temp
// and values are temp is transferred into ans .Now values from stack are poped one by one
// till the stack is empty along with a space (" ") . Atlast the ans string is checked for any 
// pretrailing spaces and if there are any , those are ignored and the substring is printed after leaving the first space

class Solution {
    public String reverseWords(String s) {
        Stack <String> st = new Stack <>();
        String ans="";
        String temp="";

        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==' '){
                if(temp.length()>0){
                    st.push(temp);
                }
                    temp="";
            }
            else{
                temp=temp +s.charAt(i);
            }
        }
            ans=ans+temp;

        while(!st.isEmpty()){
            ans=ans+" "+st.pop(); 
        }

        if(ans.length()!=0 && ans.charAt(0)==' '){
            ans=ans.substring(1);
        }
        return ans;
    }
}