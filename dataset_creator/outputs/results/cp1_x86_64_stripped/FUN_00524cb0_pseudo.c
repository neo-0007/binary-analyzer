
undefined8 FUN_00524cb0(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_0040e590(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
    uVar2 = thunk_FUN_00540f20(*(undefined8 *)(param_3 + 0x20));
    lVar3 = FUN_0042c550(uVar2);
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      uVar2 = FUN_00521e40(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

