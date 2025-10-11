
long FUN_007a2150(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  long local_40;
  
  piVar3 = (int *)&DAT_00840840;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0x20) && (piVar3 = (int *)&DAT_00840800, param_2 != 0x30)) {
    piVar3 = &local_88;
    local_88 = param_2;
    iStack_84 = param_2;
    iStack_80 = param_2;
    iStack_7c = param_2;
    local_78 = param_2;
    iStack_74 = param_2;
    iStack_70 = param_2;
    iStack_6c = param_2;
    local_68 = param_2;
    iStack_64 = param_2;
    iStack_60 = param_2;
    iStack_5c = param_2;
    local_58 = param_2;
    iStack_54 = param_2;
    iStack_50 = param_2;
    iStack_4c = param_2;
  }
  if (param_3 < 0x10) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0xd8);
      if (0x827 < lVar1 - 0x93f160U) {
        FUN_00703130();
      }
      lVar1 = (**(code **)(lVar1 + 0x38))(param_1,piVar3,0x10);
      lVar2 = lVar2 + lVar1;
      if (lVar1 != 0x10) goto LAB_007a2257;
      param_3 = param_3 + -0x10;
    } while (0xf < param_3);
  }
  if (0 < param_3) {
    lVar1 = *(long *)(param_1 + 0xd8);
    if (0x827 < lVar1 - 0x93f160U) {
      FUN_00703130();
    }
    lVar1 = (**(code **)(lVar1 + 0x38))(param_1,piVar3,(long)param_3);
    lVar2 = lVar2 + lVar1;
  }
LAB_007a2257:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

