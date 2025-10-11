
undefined8 FUN_00479d70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  lVar2 = FUN_0041cdd0(param_2,"digest");
  if (lVar2 != 0) {
    lVar3 = FUN_0043c7e0(uVar4);
    if (lVar3 != 0) {
      uVar4 = FUN_0040ab30(lVar3);
      iVar1 = FUN_0041e1a0(lVar2,uVar4);
      if (iVar1 != 0) goto LAB_00479dc7;
    }
    return 0;
  }
LAB_00479dc7:
  uVar4 = FUN_005b3920(param_1,param_2);
  return uVar4;
}

