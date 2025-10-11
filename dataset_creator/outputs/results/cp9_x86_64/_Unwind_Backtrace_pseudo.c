
undefined4 _Unwind_Backtrace(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_retaddr;
  undefined8 local_2a8 [19];
  undefined8 *local_210;
  byte local_1e1;
  char acStack_1d0 [24];
  undefined1 local_1b8 [8];
  int aiStack_1b0 [88];
  long local_50;
  
  uw_init_context_1(local_2a8,&stack0x00000008,unaff_retaddr);
  puVar1 = local_210;
  while( true ) {
    do {
      do {
        local_210 = puVar1;
        iVar3 = uw_frame_state_for(local_2a8,local_1b8);
        if (((iVar3 != 0) && (iVar3 != 5)) || (iVar2 = (*param_1)(local_2a8,param_2), iVar2 != 0)) {
          return 3;
        }
        if (iVar3 == 5) {
          return 5;
        }
        uw_update_context_1(local_2a8,local_1b8);
        puVar1 = (undefined8 *)0x0;
      } while (aiStack_1b0[local_50 * 4] == 6);
      iVar3 = (int)local_50;
      if (0x11 < iVar3) goto _Unwind_Backtrace_cold;
    } while (((local_1e1 & 0x40) != 0) &&
            (puVar1 = (undefined8 *)local_2a8[iVar3], acStack_1d0[iVar3] != '\0'));
    if ((&dwarf_reg_size_table)[iVar3] != '\b') break;
    puVar1 = *(undefined8 **)local_2a8[iVar3];
  }
_Unwind_Backtrace_cold:
                    /* WARNING: Subroutine does not return */
  abort();
}

