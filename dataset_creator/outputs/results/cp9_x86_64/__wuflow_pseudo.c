
ulong __wuflow(uint *param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if ((int)param_1[0x30] < 0) {
    return 0xffffffff;
  }
  if (param_1[0x30] == 0) {
    iVar4 = _IO_fwide(param_1,1);
    if (iVar4 != 1) {
      return 0xffffffff;
    }
    if (param_1[0x30] == 0) {
      _IO_fwide(param_1,1);
    }
  }
  if (((*param_1 & 0x800) != 0) && (iVar4 = _IO_switch_to_wget_mode(param_1), iVar4 == -1)) {
    return 0xffffffff;
  }
  plVar1 = *(long **)(param_1 + 0x28);
  puVar6 = (uint *)*plVar1;
  puVar2 = (uint *)plVar1[1];
  if (puVar2 <= puVar6) {
    puVar7 = puVar2;
    if ((*param_1 & 0x100) != 0) {
      puVar7 = (uint *)plVar1[10];
      *param_1 = *param_1 & 0xfffffeff;
      puVar6 = (uint *)plVar1[8];
      plVar1[10] = (long)puVar2;
      plVar1[8] = plVar1[2];
      plVar1[1] = (long)puVar7;
      plVar1[2] = (long)puVar6;
      if (puVar6 < puVar7) goto LAB_006f5ee8;
      *plVar1 = (long)puVar6;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      if ((void *)plVar1[8] != (void *)0x0) {
        free((void *)plVar1[8]);
        lVar3 = *(long *)(param_1 + 0x28);
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined1 (*) [16])(lVar3 + 0x40) = (undefined1  [16])0x0;
      }
    }
    else {
      iVar4 = save_for_wbackup(param_1,puVar7);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
    lVar3 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar3 - 0x932180U) {
      _IO_vtable_check();
    }
                    /* WARNING: Could not recover jumptable at 0x006f5ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(lVar3 + 0x28))(param_1);
    return uVar5;
  }
LAB_006f5ee8:
  *plVar1 = (long)(puVar6 + 1);
  return (ulong)*puVar6;
}

