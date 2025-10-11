
undefined8 FUN_007c3f90(char *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  byte local_118;
  byte local_117 [263];
  long local_10;
  
  pbVar6 = &local_118;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = *param_1;
  pcVar9 = param_1;
  while (cVar3 != '\0') {
    if (0x5d < (byte)(cVar3 - 0x21U)) goto LAB_007c3fd8;
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar3 = *pcVar1;
  }
  iVar4 = FUN_007c84c0(param_1,&local_118,0xff);
  if (-1 < iVar4) {
    uVar10 = (ulong)local_118;
    uVar5 = 1;
    if (local_118 == 0) goto LAB_007c3fda;
    if (local_117[0] != '-') {
      do {
        pbVar2 = pbVar6 + 1;
        pbVar6 = pbVar2;
        do {
          pbVar7 = pbVar6;
          if ((0x19 < (byte)((*pbVar7 & 0xdf) + 0xbf)) &&
             ((uVar8 = *pbVar7 - 0x2d, 0x32 < (byte)uVar8 ||
              ((0xfffbffffffffe006U >> ((ulong)uVar8 & 0x3f) & 1) != 0)))) goto LAB_007c3fd8;
          pbVar6 = pbVar7 + 1;
        } while (pbVar6 < pbVar2 + uVar10);
        uVar10 = (ulong)pbVar7[1];
      } while (uVar10 != 0);
      uVar5 = 1;
      goto LAB_007c3fda;
    }
  }
LAB_007c3fd8:
  uVar5 = 0;
LAB_007c3fda:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

