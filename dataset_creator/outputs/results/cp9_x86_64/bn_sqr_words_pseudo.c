
void bn_sqr_words(ulong *rp,ulong *ap,int num)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  ulong *puVar16;
  
  if (0 < num) {
    pauVar15 = (undefined1 (*) [16])rp;
    puVar16 = ap;
    if ((num & 0xfffffffcU) != 0) {
      do {
        num = num - 4;
        rp = (ulong *)(pauVar15 + 4);
        ap = puVar16 + 4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *puVar16;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar16;
        *pauVar15 = auVar1 * auVar8;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = puVar16[1];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = puVar16[1];
        pauVar15[1] = auVar2 * auVar9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = puVar16[2];
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar16[2];
        pauVar15[2] = auVar3 * auVar10;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar16[3];
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar16[3];
        pauVar15[3] = auVar4 * auVar11;
        pauVar15 = (undefined1 (*) [16])rp;
        puVar16 = ap;
      } while ((num & 0xfffffffcU) != 0);
      if (num == 0) {
        return;
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *ap;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *ap;
    *(undefined1 (*) [16])rp = auVar5 * auVar12;
    if ((num != 1) &&
       (auVar6._8_8_ = 0, auVar6._0_8_ = ap[1], auVar13._8_8_ = 0, auVar13._0_8_ = ap[1],
       *(undefined1 (*) [16])((long)rp + 0x10) = auVar6 * auVar13, num != 2)) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = ap[2];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ap[2];
      *(undefined1 (*) [16])((long)rp + 0x20) = auVar7 * auVar14;
      return;
    }
  }
  return;
}

