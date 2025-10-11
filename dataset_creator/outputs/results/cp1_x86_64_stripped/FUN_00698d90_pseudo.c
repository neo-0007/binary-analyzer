
void FUN_00698d90(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2 + *(long *)(param_1 + 0x50) * 4;
  uVar1 = *(uint *)(param_1 + 0x40) & 0x10;
  if (*(long *)(param_1 + 0x48) == param_1 + 0x58) {
    lVar3 = 0xc;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x58) * 4;
  }
  lVar3 = lVar3 + param_2;
  if (param_2 != *(long *)(param_1 + 0x48)) {
    lVar2 = lVar2 + param_3 * 4;
    param_3 = 0;
    lVar3 = lVar2;
  }
  if ((*(uint *)(param_1 + 0x40) & 8) == 0) {
    if (uVar1 != 0) {
      FUN_00698ae0(param_1,param_2,lVar3);
      *(long *)(param_1 + 8) = lVar2;
      *(long *)(param_1 + 0x10) = lVar2;
      *(long *)(param_1 + 0x18) = lVar2;
      return;
    }
  }
  else {
    *(long *)(param_1 + 8) = param_2;
    *(long *)(param_1 + 0x10) = param_2 + param_3 * 4;
    *(long *)(param_1 + 0x18) = lVar2;
    if (uVar1 != 0) {
      FUN_00698ae0(param_1,param_2,lVar3);
      return;
    }
  }
  return;
}

