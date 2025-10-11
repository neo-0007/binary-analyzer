
void __vfscanf_internal_cold(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3 + 0x10;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 8;
  } while (param_1 + 0x10 + (ulong)(param_2 - 2) * 8 != lVar2);
  FUN_006f073d(lVar1);
  return;
}

