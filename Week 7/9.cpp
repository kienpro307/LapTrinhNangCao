void reverse(char* s) {
    int x = 0;
    while(s[x]!='\0') {x++;}
    for(int i = 0; i < x/2; i++) {
        char temp = s[i];
        s[i] = s[x-1-i];
        s[x-1-i] = temp;
    }
}
