
int cmp(const void *a, const void *b){
    char x = *(char*)a;
    char y = *(char*)b;
    return (x < y) - (x > y);
}
void ft_sort(char *str, int len){
    qsort(str, len, sizeof(char), cmp);
}

bool isAnagram(char* s, char* t) {
    int s_len = strlen(s);
    int t_len = strlen(t);
    ft_sort(s, s_len);
    ft_sort(t, t_len);
    for(int i = 0; i < s_len; i++){
        if(s[i] != t[i])
            return false;
    }
    return true;
}