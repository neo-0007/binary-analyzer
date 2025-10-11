
int FUN_004b2590(long *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  long local_60;
  long local_58;
  uint local_40;
  
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    bVar11 = cVar1 == '-';
    if (bVar11) {
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    }
    local_40 = (uint)bVar11;
    lVar6 = 0;
    while( true ) {
      iVar9 = (int)lVar6;
      iVar2 = FUN_005466b0((int)cVar1,0x10);
      if (iVar2 == 0) break;
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x20000000) {
        return 0;
      }
      cVar1 = param_2[lVar6];
    }
    if (iVar9 != 0) {
      iVar2 = local_40 + iVar9;
      if (param_1 == (long *)0x0) {
        return iVar2;
      }
      plVar7 = (long *)*param_1;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)FUN_004b7690();
        if (plVar7 == (long *)0x0) {
          return 0;
        }
      }
      else {
        iVar3 = FUN_004b7e80(plVar7,2);
        if (iVar3 != 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/bn/bn_conv.c",0x9e,"BN_hex2bn");
          FUN_0051f8f0(3,0x80106,0);
          return 0;
        }
        FUN_004b7b50(plVar7);
      }
      if ((iVar9 * 4 < 0x7fffffc1) &&
         ((iVar9 * 4 + 0x3f >> 6 <= *(int *)((long)plVar7 + 0xc) ||
          (lVar6 = FUN_004b8000(plVar7), lVar6 != 0)))) {
        local_58 = (long)iVar9;
        local_60 = 0;
        iVar3 = iVar9;
        do {
          iVar4 = 0x10;
          if (iVar3 < 0x11) {
            iVar4 = iVar3;
          }
          uVar8 = 0;
          pcVar10 = param_2 + (local_58 - iVar4);
          do {
            iVar5 = FUN_0041c520(*pcVar10);
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            pcVar10 = pcVar10 + 1;
            uVar8 = uVar8 << 4 | (long)iVar5;
          } while (param_2 + (ulong)(iVar4 - 1) + ((local_58 + 1) - (long)iVar4) != pcVar10);
          iVar3 = iVar3 + -0x10;
          local_58 = local_58 + -0x10;
          *(ulong *)(*plVar7 + local_60) = uVar8;
          local_60 = local_60 + 8;
        } while (0 < iVar3);
        *(uint *)(plVar7 + 1) = (iVar9 - 1U >> 4) + 1;
        FUN_004b8490(plVar7);
        *param_1 = (long)plVar7;
        if ((int)plVar7[1] != 0) {
          *(uint *)(plVar7 + 2) = local_40;
          return iVar2;
        }
        return iVar2;
      }
      if (*param_1 == 0) {
        FUN_004b7fa0(plVar7);
      }
    }
  }
  return 0;
}

