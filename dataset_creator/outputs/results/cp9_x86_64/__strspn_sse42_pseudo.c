
long __strspn_sse42(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((*param_2)[0] == '\0') {
    return 0;
  }
  uVar6 = (uint)param_2 & 0xf;
  if (((ulong)param_2 & 0xf) == 0) {
    auVar8 = *param_2;
    iVar3 = pcmpistri(auVar8,auVar8,0x3a);
    if ((iVar3 == 0x10) && (param_2[1][0] != '\0')) {
LAB_007427ca:
      lVar2 = __strspn_sse2();
      return lVar2;
    }
  }
  else {
    auVar8 = pshufb(*(undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0),
                    *(undefined1 (*) [16])(___m128i_shift_right + (int)uVar6));
    iVar5 = pcmpistri(auVar8,auVar8,0x3a);
    iVar3 = 0x10 - uVar6;
    if (iVar3 == iVar5) {
      auVar9 = ((undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0))[1];
      iVar5 = pcmpistri(auVar9,auVar9,0x3a);
      if (0x10 < iVar3 + iVar5) goto LAB_007427ca;
      if (iVar5 != 0) {
        auVar8 = *param_2;
      }
    }
  }
  bVar7 = false;
  uVar6 = (uint)param_1 & 0xf;
  pauVar1 = param_1;
  if (((ulong)param_1 & 0xf) != 0) {
    auVar9 = pshufb(*(undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0),
                    *(undefined1 (*) [16])(___m128i_shift_right + (int)uVar6));
    iVar3 = pcmpistri(auVar8,auVar9,0x12);
    uVar6 = 0x10 - uVar6;
    if ((int)uVar6 <= iVar3) {
      uVar4 = pcmpistri(auVar9,auVar9,0x3a);
      bVar7 = uVar6 < uVar4;
      if ((int)uVar6 <= (int)uVar4) {
        pauVar1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0) + 1;
        goto LAB_00742783;
      }
    }
    return (long)iVar3;
  }
LAB_00742783:
  iVar3 = pcmpistri(auVar8,*pauVar1,0x12);
  if (!bVar7) {
    do {
      bVar7 = pauVar1 < (undefined1 (*) [16])0xfffffffffffffff0;
      pauVar1 = pauVar1 + 1;
      iVar3 = pcmpistri(auVar8,*pauVar1,0x12);
    } while (bVar7);
  }
  return (long)pauVar1 + ((long)iVar3 - (long)param_1);
}

