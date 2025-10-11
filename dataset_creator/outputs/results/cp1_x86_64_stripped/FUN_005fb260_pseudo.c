
void FUN_005fb260(long param_1)

{
  if (param_1 != 0) {
    FUN_004360b0(*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0051a0b0(*(long *)(param_1 + 0x10),0);
    }
    FUN_0041ad60(param_1,"../crypto/engine/eng_table.c",0xb5);
    return;
  }
  return;
}

