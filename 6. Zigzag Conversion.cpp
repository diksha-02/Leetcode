class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        int row=0;
        bool down=true;
        string arr[numRows];
        for(int i=0;i<s.size();i++){
            arr[row].push_back(s[i]);
            if(row==numRows-1){
                down=false;
            }
            else if(row==0) down =true;
            if(down) row++;
            else row--;
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            ans+=arr[i];
        }
        return ans;
    }
};
