
undefined8 FUN_007ac950(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (uint *)FUN_006fda20("/proc/self/maps","rce");
  if (puVar5 == (uint *)0x0) {
    if ((*(int *)(in_FS_OFFSET + -0x58) == 2) || (*(int *)(in_FS_OFFSET + -0x58) == 0xd))
    goto LAB_007acb38;
  }
  else {
    uVar4 = *puVar5;
    *puVar5 = uVar4 | 0x8000;
    local_60 = (char *)0x0;
    local_58 = 0;
    pcVar2 = local_48;
    if ((uVar4 & 0x10) == 0) {
      uVar6 = param_1 + param_2;
      do {
        lVar7 = FUN_006fe030(&local_60,&local_58,10,puVar5);
        pcVar2 = local_48;
        if (lVar7 < 1) break;
        uVar8 = FUN_006e9510(local_60,&local_50,0x10);
        pcVar2 = local_48;
        if (local_50 == local_60) break;
        pcVar1 = local_50 + 1;
        cVar3 = *local_50;
        local_50 = pcVar1;
        if (cVar3 != '-') break;
        uVar9 = FUN_006e9510(pcVar1,&local_48,0x10);
        pcVar2 = local_48;
        if ((local_48 == local_50) || (pcVar2 = local_48 + 1, *local_48 != ' ')) break;
        if ((uVar8 < uVar6) && (param_1 < uVar9)) {
          pcVar2 = local_48 + 2;
          if ((local_48[1] != 'r') || (pcVar2 = local_48 + 3, local_48[2] != '-')) break;
          if (param_1 < uVar8) {
LAB_007acac9:
            if (uVar9 < uVar6) {
              param_2 = (uVar8 + param_2) - uVar9;
            }
            else {
              param_2 = (param_2 - uVar6) + uVar8;
            }
          }
          else {
            if (uVar6 <= uVar9) {
              param_2 = 0;
              break;
            }
            if (param_1 < uVar8) goto LAB_007acac9;
            param_2 = (param_2 + param_1) - uVar9;
          }
          if (param_2 == 0) break;
        }
        local_48 = pcVar2;
        pcVar2 = local_48;
      } while ((*puVar5 & 0x10) == 0);
    }
    local_48 = pcVar2;
    FUN_006fd190(puVar5);
    FUN_007104f0(local_60);
    if (param_2 == 0) {
LAB_007acb38:
      uVar10 = 1;
      goto LAB_007acafc;
    }
  }
  uVar10 = 0xffffffff;
LAB_007acafc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

