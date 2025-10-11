
undefined4 FUN_004762f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_0043b840();
  if ((iVar2 != 0) && (iVar2 = FUN_00476090(param_1,param_4), iVar2 != 0)) {
    if (param_2 == 0) {
      return 1;
    }
    lVar1 = param_1 + 0x10;
    uVar4 = FUN_0043c5d0(lVar1);
    uVar5 = FUN_0043c5c0(lVar1);
    uVar3 = FUN_004cb7e0(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar5,uVar4);
    FUN_0043c400(lVar1);
    return uVar3;
  }
  return 0;
}

