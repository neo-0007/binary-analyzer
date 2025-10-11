
void FUN_005c0f70(undefined1 (*param_1) [16],ulong *param_2,uint param_3)

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
  
  if (0 < (int)param_3) {
    pauVar15 = param_1;
    puVar16 = param_2;
    if ((param_3 & 0xfffffffc) != 0) {
      do {
        param_3 = param_3 - 4;
        param_1 = pauVar15 + 4;
        param_2 = puVar16 + 4;
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
        pauVar15 = param_1;
        puVar16 = param_2;
      } while ((param_3 & 0xfffffffc) != 0);
      if (param_3 == 0) {
        return;
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *param_2;
    *param_1 = auVar5 * auVar12;
    if ((param_3 != 1) &&
       (auVar6._8_8_ = 0, auVar6._0_8_ = param_2[1], auVar13._8_8_ = 0, auVar13._0_8_ = param_2[1],
       param_1[1] = auVar6 * auVar13, param_3 != 2)) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2[2];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_2[2];
      param_1[2] = auVar7 * auVar14;
      return;
    }
  }
  return;
}

