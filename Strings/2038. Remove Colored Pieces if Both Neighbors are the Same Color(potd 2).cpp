lass Solution {
public:
    bool winnerOfGame(string colors) {
        int  n = colors.size();
        int alice =0;
        int bob =0;
        
        for(int  i =1; i< n-1; i++){
            if(colors[i-1] == colors[i] && colors[i] == colors[i+1]){
                if(colors[i] == 'A'){
                    alice++;
                }
                else{
                    bob++;
                }
            }
        }
        if(alice > bob){
            return true;
        }
        else{
            return false;
        }
    }
};

// https://www.youtube.com/watch?v=8jlP3D1Dnj4