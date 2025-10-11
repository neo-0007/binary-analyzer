
void FUN_00784110(long param_1)

{
  FUN_0070a340(&DAT_0093eae0);
  if (*(char *)(param_1 + 799) == '\0') {
    if (*(int *)(param_1 + 0x318) == 0) {
      FUN_0070abb0(&DAT_0093eae0);
                    /* WARNING: Subroutine does not return */
      FUN_0078db10(0,*(undefined8 *)(param_1 + 8),0,"shared object not open");
    }
    *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + -1;
    if ((*(ulong *)(param_1 + 0x318) & 0x3ffffffff) == 0x200000000) {
      if (DAT_0094ad54 == 0) {
        FUN_00783310(*(undefined8 *)(param_1 + 0x30),0);
        goto LAB_00784181;
      }
      DAT_0094ad54 = 2;
    }
    if (((byte)DAT_0094b0e4 & 0x40) != 0) {
      FUN_00787060("\nclosing file=%s; direct_opencount=%u\n",*(undefined8 *)(param_1 + 8));
    }
  }
LAB_00784181:
  FUN_0070abb0(&DAT_0093eae0);
  return;
}

