char * restoreString(char * s, int* indices, int indicesSize){
    char out[indicesSize];
    for(int i=0;i<indicesSize;i++)
        out[indices[i]] = s[i];
    
    for(int i=0;i<indicesSize;i++)
        s[i] = out[i];
    
    return s;
}