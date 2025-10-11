
undefined8 FUN_00523e90(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_0040e590(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 0x1c) {
    uVar2 = thunk_FUN_00410bd0(*(undefined8 *)(param_3 + 0x20));
    lVar3 = FUN_004d60c0(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      return 0;
    }
    uVar2 = FUN_00410c70(*(undefined8 *)(param_3 + 0x20));
    lVar3 = FUN_004d8d40(uVar2);
  }
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = FUN_00521e40(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

