
undefined4 FUN_00614b70(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  if (param_2 == -1) {
    param_2 = thunk_FUN_007129d0();
  }
  iVar3 = 0x31;
  iVar1 = 4;
  DAT_00942860 = &PTR_DAT_009177c0;
  while( true ) {
    ppuVar2 = DAT_00942860;
    if (param_2 == iVar1) {
      iVar1 = FUN_0041ca00(*DAT_00942860,param_1,(long)param_2);
      ppuVar2 = DAT_00942860;
      if (iVar1 == 0) {
        return *(undefined4 *)((long)DAT_00942860 + 0xc);
      }
    }
    DAT_00942860 = ppuVar2 + 2;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
    iVar1 = *(int *)(ppuVar2 + 3);
  }
  return 0xffffffff;
}

