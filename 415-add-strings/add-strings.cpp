class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        string result="";
        int cary=0;
        while(i>=0||j>=0||cary!=0){
            int sum=cary;
        if(i>=0)sum=sum+num1[i--]-'0';
        if(j>=0)sum=sum+num2[j--]-'0';
        result=to_string(sum%10)+result;
        cary=sum/10;
        }
        return result;
    }

};
// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         return to_string(stoi(num1)+stoi(num2));
//     }
// };