
int _IO_adjust_column(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_2 + param_3;
  do {
    if (pcVar1 <= param_2) {
      return param_3 + param_1;
    }
    pcVar1 = pcVar1 + -1;
  } while (*pcVar1 != '\n');
  return ((int)(param_2 + param_3) - (int)pcVar1) + -1;
}

