/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string s = to_string(n);
        replace(s.begin(),s.end(),'0','5');
        
        int result = std::stoi(s);
        return result;
        
    }
};