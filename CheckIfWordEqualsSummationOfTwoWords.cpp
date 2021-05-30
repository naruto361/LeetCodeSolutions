bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a1=0;
        for(int i=0;i<firstWord.length();i++)
        {
            a1=a1*10 + (firstWord[i]-'a');
        }
        int a2=0;
        for(int i=0;i<secondWord.length();i++)
        {
            a2=a2*10 + (secondWord[i]-'a');
        }
        int a3=0;
        for(int i=0;i<targetWord.length();i++)
        {
            a3=a3*10 + (targetWord[i]-'a');
        }
        return a1+a2==a3;
    }
