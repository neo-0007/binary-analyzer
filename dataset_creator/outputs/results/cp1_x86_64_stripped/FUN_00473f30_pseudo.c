
bool FUN_00473f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return false;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (iVar1 = FUN_00548b90(param_2,param_3,&DAT_007ce5df,*(long *)(param_1 + 0x18),
                           *(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) {
    return false;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_0040a3d0();
    iVar1 = FUN_00548b40(param_2,param_3,"cipher",uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  bVar3 = true;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = FUN_0051a8b0();
    iVar1 = FUN_00548b40(param_2,param_3,"engine",uVar2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

