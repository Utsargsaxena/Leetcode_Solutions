class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {   
        unordered_set<string> dict(wordList.begin(), wordList.end());
        bool isPresent = false;
        for(auto word : wordList)
        {
            if(endWord == word){isPresent = true;}
        }
        if(isPresent == false){return 0;}
        
        queue<string> q; q.push(beginWord) ; 
        int ladder = 1 ;
        
        while(!q.empty())
        {
            ladder += 1; int levelsz = q.size();
            while(levelsz--)
            {
                string curr = q.front(); q.pop();
                for(int i=0; i<curr.size();i++)
                {
                    string temp = curr ;
                    for(char c = 'a'; c<= 'z'; c++)
                    {
                        temp[i] = c;
                        if(temp == curr){continue;}
                        if(temp == endWord){return ladder;}
                        if(dict.count(temp) != 0){q.push(temp) ; dict.erase(temp);}
                    }
                }
            }
            
        }
        return 0;
        
    }
};