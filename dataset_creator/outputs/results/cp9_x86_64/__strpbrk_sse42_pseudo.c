
undefined1 * __strpbrk_sse42(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((*param_2)[0] != '\0') {
    uVar5 = (uint)param_2 & 0xf;
    if (((ulong)param_2 & 0xf) == 0) {
      auVar8 = *param_2;
      iVar2 = pcmpistri(auVar8,auVar8,0x3a);
      if ((iVar2 == 0x10) && (param_2[1][0] != '\0')) {
LAB_0079e202:
        puVar1 = (undefined1 *)__strpbrk_sse2();
        return puVar1;
      }
    }
    else {
      auVar8 = pshufb(*(undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0),
                      *(undefined1 (*) [16])(___m128i_shift_right + (int)uVar5));
      iVar4 = pcmpistri(auVar8,auVar8,0x3a);
      iVar2 = 0x10 - uVar5;
      if (iVar2 == iVar4) {
        auVar9 = ((undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0))[1];
        iVar4 = pcmpistri(auVar9,auVar9,0x3a);
        if (0x10 < iVar2 + iVar4) goto LAB_0079e202;
        if (iVar4 != 0) {
          auVar8 = *param_2;
        }
      }
    }
    bVar6 = false;
    uVar5 = (uint)param_1 & 0xf;
    bVar7 = ((ulong)param_1 & 0xf) == 0;
    if (!bVar7) {
      auVar9 = pshufb(*(undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0),
                      *(undefined1 (*) [16])(___m128i_shift_right + (int)uVar5));
      pcmpistri(auVar8,auVar9,2);
      uVar3 = pcmpistri(auVar9,auVar9,0x3a);
      uVar5 = 0x10 - uVar5;
      bVar6 = uVar5 < uVar3;
      bVar7 = uVar5 == uVar3;
      if (!bVar7 && (int)uVar3 <= (int)uVar5) {
        return (undefined1 *)0x0;
      }
      param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0) + 1;
    }
    while( true ) {
      iVar2 = pcmpistri(auVar8,*param_1,2);
      if (bVar6) {
        return *param_1 + iVar2;
      }
      if (bVar7) break;
      bVar6 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar7 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return (undefined1 *)0x0;
}

