//link:-https://leetcode.com/problems/add-binary/

// // first solution:- 
// class Solution {
// public:
//     string addBinary(string a, string b) {
        
//    string result = "";
//    int temp = 0;
//    int size_a = a.size() - 1;
//    int size_b = b.size() - 1;
//    while (size_a >= 0 || size_b >= 0 || temp == 1)
//    {
       
//       temp += ((size_a >= 0)? a[size_a] - '0': 0);
//       temp += ((size_b >= 0)? b[size_b] - '0': 0);
//       result = char(temp % 2 + '0') + result;
//       temp /= 2;
//       size_a--; size_b--;
       
//    }
//    return result;

//     }
// };


//second solution:-

class Solution {
public:
    string addBinary(string a, string b) 
    {
        string res;
        int carry = 0, i = a.size(), j = b.size();
        while(i > 0 || j > 0 || carry == 1)
        {
            // Here we save carry by subtract by '0' to convert the numbers from a char type into an int (ASCII)
            if (i > 0) carry += a[--i] - '0';
            if (j > 0) carry += b[--j] - '0';
            
            // Here we add the firt digit to the result string
            res += char(carry % 2 + '0');
            
            // Divide Carry by 2 to remove the saved value in the result string
            carry /= 2;
        }
        // Reverse to get the right order in the result
        reverse(res.begin(), res.end());
        return res;
    }
};

