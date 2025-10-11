
undefined8 res_mailok(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  byte local_118;
  byte abStack_117 [263];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    if (0x5d < (byte)(cVar2 - 0x21U)) goto LAB_007ba933;
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = ns_name_pton(param_1,&local_118,0xff);
  if (-1 < iVar3) {
    uVar4 = 1;
    if (local_118 == 0) goto LAB_007ba935;
    pbVar5 = abStack_117 + local_118;
    uVar8 = (ulong)*pbVar5;
    if (*pbVar5 != 0) {
      do {
        pbVar5 = pbVar5 + 1;
        pbVar9 = pbVar5 + uVar8;
        do {
          if ((0x19 < (byte)((*pbVar5 & 0xdf) + 0xbf)) &&
             ((uVar6 = *pbVar5 - 0x2d, 0x32 < (byte)uVar6 ||
              ((0xfffbffffffffe006U >> ((ulong)uVar6 & 0x3f) & 1) != 0)))) goto LAB_007ba933;
          pbVar5 = pbVar5 + 1;
        } while (pbVar5 < pbVar9);
        uVar8 = (ulong)*pbVar5;
      } while (uVar8 != 0);
      uVar4 = 1;
      goto LAB_007ba935;
    }
  }
LAB_007ba933:
  uVar4 = 0;
LAB_007ba935:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

