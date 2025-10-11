
undefined8 FUN_00707240(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_007101b0(0x2000);
  if (lVar2 != 0) {
    uVar1 = *param_1;
    if ((*(long *)(param_1 + 0xe) != 0) && ((uVar1 & 1) == 0)) {
      FUN_007104f0();
      uVar1 = *param_1;
    }
    *(long *)(param_1 + 0xe) = lVar2;
    *(long *)(param_1 + 0x10) = lVar2 + 0x2000;
    *param_1 = uVar1 & 0xfffffffe;
    return 1;
  }
  return 0xffffffff;
}

