
long FUN_0074bf60(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((*param_2)[0] == '\0') {
    lVar2 = thunk_FUN_007129d0();
    return lVar2;
  }
  uVar6 = (uint)param_2 & 0xf;
  if (((ulong)param_2 & 0xf) == 0) {
    auVar10 = *param_2;
    iVar3 = pcmpistri(auVar10,auVar10,0x3a);
    if ((iVar3 == 0x10) && (param_2[1][0] != '\0')) {
LAB_0074c09a:
      lVar2 = FUN_0074be00();
      return lVar2;
    }
  }
  else {
    auVar10 = pshufb(*(undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0),
                     *(undefined1 (*) [16])(&DAT_0082c110 + (int)uVar6));
    iVar5 = pcmpistri(auVar10,auVar10,0x3a);
    iVar3 = 0x10 - uVar6;
    if (iVar3 == iVar5) {
      auVar9 = ((undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0))[1];
      iVar5 = pcmpistri(auVar9,auVar9,0x3a);
      if (0x10 < iVar3 + iVar5) goto LAB_0074c09a;
      if (iVar5 != 0) {
        auVar10 = *param_2;
      }
    }
  }
  bVar7 = false;
  uVar6 = (uint)param_1 & 0xf;
  bVar8 = ((ulong)param_1 & 0xf) == 0;
  pauVar1 = param_1;
  if (!bVar8) {
    auVar9 = pshufb(*(undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0),
                    *(undefined1 (*) [16])(&DAT_0082c110 + (int)uVar6));
    pcmpistri(auVar10,auVar9,2);
    uVar4 = pcmpistri(auVar9,auVar9,0x3a);
    pauVar1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0) + 1;
    uVar6 = 0x10 - uVar6;
    bVar7 = uVar6 < uVar4;
    bVar8 = uVar6 == uVar4;
    if ((int)uVar4 < (int)uVar6) {
      return (long)(int)uVar4;
    }
  }
  while( true ) {
    auVar9 = *pauVar1;
    iVar3 = pcmpistri(auVar10,auVar9,2);
    if (bVar7) {
      return (long)pauVar1 + ((long)iVar3 - (long)param_1);
    }
    if (bVar8) break;
    bVar7 = (undefined1 (*) [16])0xffffffffffffffef < pauVar1;
    pauVar1 = pauVar1 + 1;
    bVar8 = pauVar1 == (undefined1 (*) [16])0x0;
  }
  iVar3 = pcmpistri(auVar9,auVar9,0x3a);
  return (long)pauVar1 + ((long)iVar3 - (long)param_1);
}

