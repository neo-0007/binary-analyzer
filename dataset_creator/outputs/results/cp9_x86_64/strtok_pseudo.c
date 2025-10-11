
char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = strtok_r(__s,__delim,(char **)&olds_0);
  return pcVar1;
}

