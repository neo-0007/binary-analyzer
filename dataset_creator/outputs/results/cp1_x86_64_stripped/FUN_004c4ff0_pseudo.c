
void FUN_004c4ff0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        FUN_0041aef0(lVar1,*(undefined8 *)(param_1 + 0x10),"../crypto/buffer/buffer.c",0x33);
      }
      else {
        FUN_0041c0b0(lVar1,*(undefined8 *)(param_1 + 0x10),"../crypto/buffer/buffer.c",0x31);
      }
    }
    FUN_0041ad60(param_1,"../crypto/buffer/buffer.c",0x35);
    return;
  }
  return;
}

