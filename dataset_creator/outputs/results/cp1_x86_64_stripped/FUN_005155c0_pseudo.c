
long FUN_005155c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00420cf0(param_2);
  uVar2 = FUN_00418710(uVar2);
  iVar1 = FUN_00418460(uVar2,0,*param_1,0x3a);
  if (iVar1 != 0) {
    lVar3 = FUN_00515260(iVar1,param_1,param_2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return 0;
}

