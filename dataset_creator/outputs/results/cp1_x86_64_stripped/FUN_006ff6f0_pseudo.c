
undefined8 FUN_006ff6f0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_007101b0(0x2000);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x74);
    lVar3 = *(long *)(param_1 + 0xa0);
    if ((*(long *)(lVar3 + 0x30) != 0) && ((uVar1 & 8) == 0)) {
      FUN_007104f0();
      lVar3 = *(long *)(param_1 + 0xa0);
      uVar1 = *(uint *)(param_1 + 0x74);
    }
    *(long *)(lVar3 + 0x30) = lVar2;
    *(long *)(lVar3 + 0x38) = lVar2 + 0x2000;
    *(uint *)(param_1 + 0x74) = uVar1 & 0xfffffff7;
    return 1;
  }
  return 0xffffffff;
}

