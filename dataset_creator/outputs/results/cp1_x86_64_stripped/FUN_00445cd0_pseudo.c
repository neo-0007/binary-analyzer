
bool FUN_00445cd0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = param_1 + 0x18;
  if (param_3 == 0) {
    iVar2 = FUN_00552ef0(lVar1);
    bVar3 = iVar2 == 0;
  }
  else if (param_2 == 0) {
    iVar2 = FUN_00552bb0(lVar1,param_3,param_4);
    bVar3 = iVar2 == 1;
  }
  else {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      iVar2 = FUN_00552cb0(lVar1,param_3,param_2);
      return 0 < iVar2;
    }
    iVar2 = FUN_00552da0();
    bVar3 = 0 < iVar2;
  }
  return bVar3;
}

