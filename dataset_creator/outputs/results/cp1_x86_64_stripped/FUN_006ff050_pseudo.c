
void FUN_006ff050(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((*(long *)(lVar3 + 0x30) != 0) && ((uVar1 & 8) == 0)) {
    FUN_007104f0();
    lVar3 = *(long *)(param_1 + 0xa0);
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  *(undefined8 *)(lVar3 + 0x38) = param_3;
  uVar2 = uVar1 | 8;
  if (param_4 != 0) {
    uVar2 = uVar1 & 0xfffffff7;
  }
  *(uint *)(param_1 + 0x74) = uVar2;
  return;
}

