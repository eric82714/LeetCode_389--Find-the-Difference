char findTheDifference(char * s, char * t){
    int s_sum = 0, t_sum = 0;
	    
    for(int i = 0; i < strlen(s); i++)
        s_sum += s[i];
	    
	for(int i = 0; i < strlen(t); i++)
	    t_sum += t[i];
	    
    return (char)(t_sum-s_sum);
}
