
void ERR_set_error_data(char *data,int flags)

{
  size_t sVar1;
  
  sVar1 = strlen(data);
  err_set_error_data_int(data,sVar1 + 1,flags,1);
  return;
}

