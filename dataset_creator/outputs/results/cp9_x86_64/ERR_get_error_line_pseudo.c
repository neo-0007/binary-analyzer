
ulong ERR_get_error_line(char **file,int *line)

{
  ulong uVar1;
  
  uVar1 = get_error_values(0,file,line,0,0,0);
  return uVar1;
}

