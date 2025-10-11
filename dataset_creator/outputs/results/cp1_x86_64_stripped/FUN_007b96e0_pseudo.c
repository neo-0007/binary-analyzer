
long FUN_007b96e0(char *param_1,undefined8 param_2,byte param_3,long param_4,uint param_5,
                 long param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  
  lVar3 = thunk_FUN_007129d0(param_2);
  lVar4 = FUN_00711600(lVar3 + 0x4a9,1);
  if (lVar4 == 0) {
    return 0;
  }
  *(long *)(lVar4 + 0x28) = lVar4;
  *(long *)(lVar4 + 0x2d0) = lVar4 + 0x488;
  *(long *)(lVar4 + 0x38) = lVar4 + 0x490;
  lVar5 = thunk_FUN_00713a50(lVar4 + 0x4a8,param_2,lVar3 + 1);
  *(undefined4 *)(lVar4 + 0x4a0) = 1;
  *(long *)(lVar4 + 0x490) = lVar5;
  cVar1 = *param_1;
  pcVar9 = (char *)(lVar5 + lVar3);
  if (cVar1 != '\0') {
    pcVar9 = param_1;
  }
  *(char **)(lVar4 + 8) = pcVar9;
  *(byte *)(lVar4 + 0x31c) = param_3 & 3 | *(byte *)(lVar4 + 0x31c) & 0xfc;
  if ((DAT_0094b0e4._1_1_ & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x3e4) = 1;
  }
  *(long *)(lVar4 + 0x2e0) = param_4;
  puVar13 = (undefined8 *)(lVar4 + 0x370);
  *(long *)(lVar4 + 0x30) = param_6;
  puVar12 = (&PTR_DAT_0093eb60)[param_6 * 0x14];
  *(undefined8 **)(lVar4 + 0x398) = puVar13;
  *(undefined8 *)(lVar4 + 0x390) = 4;
  lVar3 = lVar4;
  if (puVar12 == (undefined *)0x0) {
    bVar2 = false;
    if (param_4 != 0) goto LAB_007b9828;
LAB_007b983f:
    puVar6 = (undefined *)(lVar3 + 0x2c0);
  }
  else {
    puVar12 = puVar12 + 0x2c0;
    *(undefined **)(lVar4 + 0x370) = puVar12;
    if (param_4 != 0) {
      bVar2 = true;
LAB_007b9828:
      do {
        lVar3 = param_4;
        param_4 = *(long *)(lVar3 + 0x2e0);
      } while (*(long *)(lVar3 + 0x2e0) != 0);
      if (!bVar2) goto LAB_007b983f;
      puVar12 = *(undefined **)(lVar4 + 0x370);
    }
    puVar6 = (undefined *)(lVar3 + 0x2c0);
    if (puVar6 == puVar12) goto LAB_007b9848;
    if ((param_5 & 8) == 0) {
      puVar13 = (undefined8 *)(lVar4 + 0x378);
    }
    else {
      *(undefined **)(lVar4 + 0x378) = puVar12;
    }
  }
  *puVar13 = puVar6;
LAB_007b9848:
  *(long *)(lVar4 + 0x3a0) = lVar4 + 0x2c0;
  if (cVar1 != '\0') {
    lVar7 = thunk_FUN_007129d0(param_1);
    lVar3 = lVar7 + 1;
    pcVar9 = (char *)0x0;
    lVar5 = lVar3;
    if (cVar1 == '/') {
      pcVar11 = (char *)FUN_007101b0(lVar3);
      pcVar9 = pcVar11;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0xffffffffffffffff;
      }
      else {
LAB_007b98f0:
        pcVar9 = (char *)thunk_FUN_00713820(pcVar9,param_1,lVar3);
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + -1;
        } while (*pcVar9 != '/');
        if (pcVar11 == pcVar9) {
          pcVar9 = pcVar10;
        }
        *pcVar9 = '\0';
      }
    }
    else {
      do {
        pcVar11 = (char *)FUN_00710840(pcVar9,lVar5 + 0x80);
        if (pcVar11 == (char *)0x0) break;
        lVar8 = FUN_0076dcf0(pcVar11,(lVar5 + 0x7f) - lVar7);
        if (lVar8 != 0) {
          lVar5 = thunk_FUN_007129d0(pcVar11);
          pcVar9 = pcVar11 + lVar5;
          if (pcVar9[-1] != '/') {
            *pcVar9 = '/';
            pcVar9 = pcVar9 + 1;
          }
          goto LAB_007b98f0;
        }
        pcVar9 = pcVar11;
        lVar5 = lVar5 + 0x80;
      } while (*(int *)(in_FS_OFFSET + -0x58) == 0x22);
      pcVar11 = (char *)0xffffffffffffffff;
      FUN_007104f0(pcVar9);
    }
    *(char **)(lVar4 + 0x350) = pcVar11;
  }
  return lVar4;
}

