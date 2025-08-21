
void to_lower_case(char *str){
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
}

void rm_all_non_al_num(char *str){
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if(isalnum(str[i])){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

bool isPalindrome(char* s) {
    to_lower_case(s);
    rm_all_non_al_num(s);
    int end = strlen(s) - 1;
    int i = 0;
    while (i < end){
        if(s[i] != s[end]){
            return false;
        }
        i++;
        end--;
    }
    return true;
}
