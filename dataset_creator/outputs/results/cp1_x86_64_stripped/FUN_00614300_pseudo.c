
undefined8 FUN_00614300(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0059b9e0(param_2,0xffffffff,0);
  if ((iVar1 == 1) && ((param_3 & 4) == 0)) {
    uVar2 = 1;
    if ((*(byte *)(param_2 + 0xe9) & 0x20) == 0) {
      uVar2 = 3;
    }
    return uVar2;
  }
  return 3;
}

