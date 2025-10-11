
undefined8 FUN_00617150(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    FUN_0041ad60(*(undefined8 *)(lVar1 + 8),"../crypto/bio/bf_buff.c",0x4e);
    FUN_0041ad60(*(undefined8 *)(lVar1 + 0x18),"../crypto/bio/bf_buff.c",0x4f);
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x40),"../crypto/bio/bf_buff.c",0x50);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}

