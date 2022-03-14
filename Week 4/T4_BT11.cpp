string pigLatin(string word) {
    string ds = "";
    if(word[0]=='u'||word[0]=='i'||word[0]=='a'||word[0]=='e'||word[0]=='o') {
        ds += word;
        ds += "way";
    }
    else {
        for(int i = 1; i < word.length(); i++)
            ds += word[i];
        ds += word[0];
        ds += "ay";
    }
    return ds;
}
