
int FUN_00424870(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char local_248 [520];
  long local_40;
  
  pcVar5 = (char *)0x0;
  iVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while (iVar3 = FUN_004abaa0(param_1,local_248,0x200), 0 < iVar3) {
    local_248[iVar3 + -1] = '\0';
    iVar3 = FUN_005466b0((int)local_248[0],7);
    pcVar7 = local_248;
    if (iVar3 == 0) break;
    for (; (iVar3 = FUN_005466e0((int)*pcVar7), iVar3 != 0 || (*pcVar7 == '.')); pcVar7 = pcVar7 + 1
        ) {
    }
    pcVar2 = (char *)0x0;
    if (*pcVar7 != '\0') {
      *pcVar7 = '\0';
      do {
        pcVar7 = pcVar7 + 1;
        iVar3 = FUN_005466b0((int)*pcVar7,8);
      } while (iVar3 != 0);
      cVar1 = *pcVar7;
      pcVar6 = pcVar7;
      if (cVar1 == '\0') {
        pcVar2 = (char *)0x0;
      }
      else {
        do {
          iVar3 = FUN_005466b0((int)cVar1,8);
          pcVar2 = pcVar7;
          if (iVar3 != 0) {
            pcVar5 = (char *)0x0;
            if (*pcVar6 != '\0') {
              *pcVar6 = '\0';
              do {
                pcVar6 = pcVar6 + 1;
                iVar3 = FUN_005466b0((int)*pcVar6,8);
              } while (iVar3 != 0);
              pcVar5 = pcVar6;
              if (*pcVar6 == '\0') {
                pcVar5 = (char *)0x0;
              }
            }
            goto joined_r0x00424961;
          }
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcVar5 = (char *)0x0;
      }
    }
joined_r0x00424961:
    if ((local_248[0] == '\0') || (iVar3 = FUN_00424740(local_248,pcVar2,pcVar5), iVar3 == 0))
    break;
    iVar4 = iVar4 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

