
ulong ERR_get_error_line_data(char **file,int *line,char **data,int *flags)

{
  ulong uVar1;
  
  uVar1 = get_error_values(0,file,line,0,data,flags);
  return uVar1;
}

