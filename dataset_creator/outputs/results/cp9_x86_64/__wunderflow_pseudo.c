
ulong __wunderflow(uint *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if ((int)param_1[0x30] < 0) {
    return 0xffffffff;
  }
  if (param_1[0x30] == 0) {
    iVar5 = _IO_fwide(param_1,1);
    if (iVar5 != 1) {
      return 0xffffffff;
    }
    if (param_1[0x30] == 0) {
      _IO_fwide(param_1,1);
    }
  }
  if (((*param_1 & 0x800) != 0) && (iVar5 = _IO_switch_to_wget_mode(param_1), iVar5 == -1)) {
    return 0xffffffff;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  puVar7 = (uint *)*puVar1;
  puVar2 = (uint *)puVar1[1];
  if (puVar2 <= puVar7) {
    puVar8 = puVar2;
    if ((*param_1 & 0x100) != 0) {
      puVar8 = (uint *)puVar1[10];
      *param_1 = *param_1 & 0xfffffeff;
      puVar7 = (uint *)puVar1[8];
      puVar1[10] = puVar2;
      uVar3 = puVar1[2];
      puVar1[2] = puVar7;
      puVar1[8] = uVar3;
      *puVar1 = puVar7;
      puVar1[1] = puVar8;
      if (puVar7 < puVar8) goto LAB_006f6068;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x12) != 0) {
        free((void *)puVar1[8]);
        lVar4 = *(long *)(param_1 + 0x28);
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined1 (*) [16])(lVar4 + 0x40) = (undefined1  [16])0x0;
      }
    }
    else {
      iVar5 = save_for_wbackup(param_1,puVar8);
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
    lVar4 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar4 - 0x932180U) {
      _IO_vtable_check();
    }
                    /* WARNING: Could not recover jumptable at 0x006f6040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar4 + 0x20))(param_1);
    return uVar6;
  }
LAB_006f6068:
  return (ulong)*puVar7;
}

