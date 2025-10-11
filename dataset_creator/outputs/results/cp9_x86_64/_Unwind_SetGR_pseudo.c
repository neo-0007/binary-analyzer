
void _Unwind_SetGR(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_2 < 0x12) {
    lVar1 = (long)param_2;
    if (((*(byte *)(param_1 + 199) & 0x40) != 0) && (*(char *)(param_1 + 0xd8 + lVar1) != '\0')) {
      *(undefined8 *)(param_1 + lVar1 * 8) = param_3;
      return;
    }
    if ((&dwarf_reg_size_table)[lVar1] == '\b') {
      **(undefined8 **)(param_1 + lVar1 * 8) = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

