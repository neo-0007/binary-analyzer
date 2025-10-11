
size_t file_gets(long param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  size_t sVar2;
  
  *param_2 = '\0';
  lVar1 = __fgets_chk(param_2,0xffffffffffffffff,param_3,*(undefined8 *)(param_1 + 0x40));
  sVar2 = 0;
  if ((lVar1 != 0) && (*param_2 != '\0')) {
    sVar2 = strlen(param_2);
  }
  return sVar2;
}

