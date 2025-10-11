
ulong ERR_peek_error_line(char **file,int *line)

{
  ulong uVar1;
  
  uVar1 = get_error_values(1,file,line,0,0,0);
  return uVar1;
}

