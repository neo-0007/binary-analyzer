
undefined8
FUN_00431cb0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x98);
  uVar4 = thunk_FUN_00540f20(*(undefined8 *)(param_1 + 0x88));
  if (*(int *)(lVar1 + 0x1c) == 4) {
    uVar2 = FUN_0056b040(uVar4);
    iVar3 = FUN_00431b10(lVar1,param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_0056c640(*(undefined8 *)(lVar1 + 0x38),uVar2,param_4,param_5,
                           *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48),
                           *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
      if (iVar3 != 0) {
        uVar4 = FUN_0056b070(uVar2,*(undefined8 *)(lVar1 + 0x38),param_2,uVar4,3);
        goto LAB_00431d02;
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_0056b070(param_5,param_4,param_2,uVar4);
LAB_00431d02:
    if (-1 < (int)uVar4) {
      *param_3 = (long)(int)uVar4;
      uVar4 = 1;
    }
  }
  return uVar4;
}

