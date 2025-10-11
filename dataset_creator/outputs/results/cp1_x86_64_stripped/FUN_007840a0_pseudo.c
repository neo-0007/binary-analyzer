
void FUN_007840a0(long param_1,undefined1 param_2)

{
  *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + -1;
  if ((*(ulong *)(param_1 + 0x318) & 0x3ffffffff) == 0x200000000) {
    if (DAT_0094ad54 == 0) {
      FUN_00783310(*(undefined8 *)(param_1 + 0x30),param_2);
      return;
    }
    DAT_0094ad54 = 2;
  }
  if (((byte)DAT_0094b0e4 & 0x40) == 0) {
    return;
  }
  FUN_00787060("\nclosing file=%s; direct_opencount=%u\n",*(undefined8 *)(param_1 + 8));
  return;
}

