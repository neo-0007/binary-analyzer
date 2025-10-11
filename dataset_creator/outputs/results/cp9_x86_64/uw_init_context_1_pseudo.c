
void uw_init_context_1(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_retaddr;
  undefined8 local_1b0;
  undefined1 local_1a8 [296];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  
  puVar3 = param_1;
  for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x13] = unaff_retaddr;
  param_1[0x18] = 0x4000000000000000;
  iVar1 = uw_frame_state_for(param_1,local_1a8);
  if (iVar1 != 0) goto uw_init_context_1_cold;
  if (PTR_pthread_key_create_0092df78 == (undefined *)0x0) {
LAB_006c3070:
    if (dwarf_reg_size_table == '\0') {
      dwarf_reg_size_table = '\b';
      DAT_00938611 = 8;
      DAT_00938612 = 8;
      DAT_00938613 = 8;
      DAT_00938614 = 8;
      DAT_00938615 = 8;
      DAT_00938616 = 8;
      DAT_00938617 = '\b';
      DAT_00938618 = 8;
      DAT_00938619 = 8;
      DAT_0093861a = 8;
      DAT_0093861b = 8;
      DAT_0093861c = 8;
      DAT_0093861d = 8;
      DAT_0093861e = 8;
      DAT_0093861f = 8;
      DAT_00938620 = 8;
    }
  }
  else {
    iVar1 = pthread_once(&once_regsizes_0,init_dwarf_reg_size_table);
    if (iVar1 != 0) goto LAB_006c3070;
  }
  if (DAT_00938617 == '\b') {
    if ((*(byte *)((long)param_1 + 199) & 0x40) != 0) {
      *(undefined1 *)((long)param_1 + 0xdf) = 0;
    }
    local_68 = 1;
    param_1[7] = &local_1b0;
    local_78 = 7;
    local_80 = 0;
    local_1b0 = param_2;
    uw_update_context_1(param_1,local_1a8);
    param_1[0x13] = param_3;
    return;
  }
uw_init_context_1_cold:
                    /* WARNING: Subroutine does not return */
  abort();
}

