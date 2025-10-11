
ulong ERR_peek_last_error_line(char **file,int *line)

{
  ulong uVar1;
  
  uVar1 = get_error_values(2,file,line,0,0,0);
  return uVar1;
}

