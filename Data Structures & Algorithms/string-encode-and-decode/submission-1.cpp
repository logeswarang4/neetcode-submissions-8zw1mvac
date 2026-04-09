class Solution {
public:

    string encode(vector<string>& strs) {
        string encode_string = "";
        
        for(int i =0; i < strs.size(); i++) {
            encode_string += strs[i];
            encode_string += "7#7";
        }
        
        //cout<<"e: " << encode_string<<endl;
        return encode_string;
    }

    vector<string> decode(string s) {
        vector<string> decode_string;
        int j ;
        int start = 0, end = s.size();
            for(j = start; j < s.size(); j++) {
                //cout << "j : " << j << "s[j] : " <<s[j] <<endl;
                if(s[j] == '#' && s[j-1] == '7' && s[j+1] == '7' ) {
                    end = j-1;
                    //cout << "f: " << s.substr(start,end-start) <<endl;
                    //cout << "start : " << start <<endl;
                    //cout << "end : " << end <<endl;
                    decode_string.push_back(s.substr(start,end-start)); 
                    start = j+2;
                }
            }
        return decode_string;
    }
};
