
bool send_fp_chars(FILE *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
  if (param_1 != (FILE *)0x0) {
    sVar1 = fwrite(param_2,1,(long)(int)param_3,param_1);
    return param_3 == sVar1;
  }
  return true;
}

