//leetcode question fizz buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>l;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0){
                l.push_back("FizzBuzz");
            }
            else if(i%3==0){
                l.push_back("Fizz");
            }
            else if(i%5==0){
                l.push_back("Buzz");
            }
            else{
                string v = to_string(i);
                l.push_back(v);
            }
        }
        return l;
    }
};
