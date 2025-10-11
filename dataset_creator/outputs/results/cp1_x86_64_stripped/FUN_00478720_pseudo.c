
undefined8 FUN_00478720(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  lVar3 = FUN_0041cdd0(param_2,"use_derivation_function");
  if ((lVar3 != 0) && (iVar2 = thunk_FUN_0041d0b0(lVar3,*(undefined4 *)(lVar1 + 0x30)), iVar2 == 0))
  {
    return 0;
  }
  lVar3 = FUN_0041cdd0(param_2,"cipher");
  if (lVar3 == 0) {
LAB_00478792:
    uVar4 = FUN_005b3920(param_1,param_2);
    return uVar4;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    uVar4 = FUN_0040a3d0();
    iVar2 = FUN_0041e1a0(lVar3,uVar4);
    if (iVar2 != 0) goto LAB_00478792;
  }
  return 0;
}

