
undefined8 res_ownok(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  byte local_118;
  byte local_117 [263];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    if (0x5d < (byte)(cVar2 - 0x21U)) goto LAB_007ba7a8;
    pcVar1 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = ns_name_pton(param_1,&local_118,0xff);
  if (-1 < iVar3) {
    uVar9 = (ulong)local_118;
    uVar4 = 1;
    if (local_118 == 0) goto LAB_007ba7aa;
    if (local_117[0] != 0x2d) {
      pbVar5 = &local_118;
      if ((local_118 == 1) && (uVar9 = 1, pbVar5 = &local_118, local_117[0] == 0x2a)) {
        uVar9 = (ulong)local_117[1];
        if (uVar9 == 0) goto LAB_007ba7aa;
        pbVar5 = local_117 + 1;
        do {
          pbVar5 = pbVar5 + 1;
          pbVar10 = pbVar5 + uVar9;
          do {
            if ((0x19 < (byte)((*pbVar5 & 0xdf) + 0xbf)) &&
               ((uVar7 = *pbVar5 - 0x2d, 0x32 < (byte)uVar7 ||
                ((0xfffbffffffffe006U >> ((ulong)uVar7 & 0x3f) & 1) != 0)))) goto LAB_007ba7a8;
            pbVar5 = pbVar5 + 1;
          } while (pbVar5 < pbVar10);
          uVar9 = (ulong)*pbVar5;
        } while (uVar9 != 0);
      }
      else {
        do {
          pbVar10 = pbVar5 + 1;
          do {
            pbVar6 = pbVar10;
            if ((0x19 < (byte)((*pbVar6 & 0xdf) + 0xbf)) &&
               ((uVar7 = *pbVar6 - 0x2d, 0x32 < (byte)uVar7 ||
                ((0xfffbffffffffe006U >> ((ulong)uVar7 & 0x3f) & 1) != 0)))) goto LAB_007ba7a8;
            pbVar10 = pbVar6 + 1;
          } while (pbVar10 < pbVar5 + 1 + uVar9);
          uVar9 = (ulong)pbVar6[1];
          pbVar5 = pbVar10;
        } while (uVar9 != 0);
      }
      uVar4 = 1;
      goto LAB_007ba7aa;
    }
  }
LAB_007ba7a8:
  uVar4 = 0;
LAB_007ba7aa:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

