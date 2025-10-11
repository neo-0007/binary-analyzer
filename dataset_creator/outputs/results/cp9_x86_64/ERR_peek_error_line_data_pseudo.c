
ulong ERR_peek_error_line_data(char **file,int *line,char **data,int *flags)

{
  ulong uVar1;
  
  uVar1 = get_error_values(1,file,line,0,data,flags);
  return uVar1;
}

