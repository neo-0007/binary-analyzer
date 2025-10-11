
undefined8 _Unwind_RaiseException_Phase2(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  undefined1 local_1b8 [8];
  int aiStack_1b0 [82];
  code *local_68;
  long local_50;
  
  lVar5 = 1;
  do {
    iVar1 = uw_frame_state_for(param_2,local_1b8);
    bVar6 = *(long *)(param_2 + 0x90) + (*(long *)(param_2 + 0xc0) >> 0x3f) == param_1[3];
    if (iVar1 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar2 = (*local_68)(1,bVar6 * '\x04' | 2,*param_1,param_1,param_2);
      if ((int)uVar2 == 7) {
        *param_3 = lVar5;
        return uVar2;
      }
      if ((int)uVar2 != 8) {
        return 2;
      }
    }
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      _Unwind_RaiseException_Phase2_cold();
    }
    uw_update_context_1(param_2,local_1b8);
    puVar4 = (undefined8 *)0x0;
    if (aiStack_1b0[local_50 * 4] != 6) {
      if (0x11 < (int)local_50) {
code_r0x00404514:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = (long)(int)local_50;
      puVar4 = *(undefined8 **)(param_2 + lVar3 * 8);
      if (((*(byte *)(param_2 + 199) & 0x40) == 0) || (*(char *)(param_2 + 0xd8 + lVar3) == '\0')) {
        if ((&dwarf_reg_size_table)[lVar3] != '\b') goto code_r0x00404514;
        puVar4 = (undefined8 *)*puVar4;
      }
    }
    *(undefined8 **)(param_2 + 0x98) = puVar4;
    lVar5 = lVar5 + 1;
  } while( true );
}

