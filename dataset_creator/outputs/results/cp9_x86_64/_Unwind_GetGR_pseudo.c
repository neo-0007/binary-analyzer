
undefined8 * _Unwind_GetGR(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_2 < 0x12) {
    lVar2 = (long)param_2;
    puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
    if (((*(byte *)(param_1 + 199) & 0x40) == 0) || (*(char *)(param_1 + 0xd8 + lVar2) == '\0')) {
      if ((&dwarf_reg_size_table)[lVar2] != '\b') goto _Unwind_GetGR_cold;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
_Unwind_GetGR_cold:
                    /* WARNING: Subroutine does not return */
  abort();
}

