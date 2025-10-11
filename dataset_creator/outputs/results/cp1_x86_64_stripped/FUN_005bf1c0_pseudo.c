
undefined8 FUN_005bf1c0(long param_1)

{
  if (param_1 != 0) {
    FUN_0041ad60(*(undefined8 *)(*(long *)(param_1 + 0x40) + 8),"../crypto/bio/bf_readbuff.c",0x4f);
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x40),"../crypto/bio/bf_readbuff.c",0x50);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}

