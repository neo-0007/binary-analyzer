
void FUN_004ee660(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004ef8c0();
    return;
  }
  return;
}

