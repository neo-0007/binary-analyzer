
long FUN_006c5660(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((*(byte *)(param_1 + 0x20) & 5) == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}

