
/* WARNING: Removing unreachable block (ram,0x0071bee2) */

ulong FUN_0071acb0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  uint uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar57;
  uint uVar58;
  char *pcVar59;
  undefined8 uVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ulong uVar56;
  
  uVar55 = (uint)param_2;
  uVar53 = (uint)param_1;
  if (((uVar55 & 0x3f) < 0x31) && ((uVar53 & 0x3f) < 0x31)) {
    uVar60 = *(undefined8 *)param_1;
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_2 + 8);
    auVar77[0] = ((char)uVar60 == '\0') - ((char)uVar60 == (char)uVar1);
    auVar77[1] = ((char)((ulong)uVar60 >> 8) == '\0') - (param_1[1] == (char)((ulong)uVar1 >> 8));
    auVar77[2] = ((char)((ulong)uVar60 >> 0x10) == '\0') -
                 (param_1[2] == (char)((ulong)uVar1 >> 0x10));
    auVar77[3] = ((char)((ulong)uVar60 >> 0x18) == '\0') -
                 (param_1[3] == (char)((ulong)uVar1 >> 0x18));
    auVar77[4] = ((char)((ulong)uVar60 >> 0x20) == '\0') -
                 (param_1[4] == (char)((ulong)uVar1 >> 0x20));
    auVar77[5] = ((char)((ulong)uVar60 >> 0x28) == '\0') -
                 (param_1[5] == (char)((ulong)uVar1 >> 0x28));
    auVar77[6] = ((char)((ulong)uVar60 >> 0x30) == '\0') -
                 (param_1[6] == (char)((ulong)uVar1 >> 0x30));
    auVar77[7] = ((char)((ulong)uVar60 >> 0x38) == '\0') -
                 (param_1[7] == (char)((ulong)uVar1 >> 0x38));
    auVar77[8] = ((char)uVar2 == '\0') - (param_1[8] == (char)uVar3);
    auVar77[9] = ((char)((ulong)uVar2 >> 8) == '\0') - (param_1[9] == (char)((ulong)uVar3 >> 8));
    auVar77[10] = ((char)((ulong)uVar2 >> 0x10) == '\0') -
                  (param_1[10] == (char)((ulong)uVar3 >> 0x10));
    auVar77[0xb] = ((char)((ulong)uVar2 >> 0x18) == '\0') -
                   (param_1[0xb] == (char)((ulong)uVar3 >> 0x18));
    auVar77[0xc] = ((char)((ulong)uVar2 >> 0x20) == '\0') -
                   (param_1[0xc] == (char)((ulong)uVar3 >> 0x20));
    auVar77[0xd] = ((char)((ulong)uVar2 >> 0x28) == '\0') -
                   (param_1[0xd] == (char)((ulong)uVar3 >> 0x28));
    auVar77[0xe] = ((char)((ulong)uVar2 >> 0x30) == '\0') -
                   (param_1[0xe] == (char)((ulong)uVar3 >> 0x30));
    auVar77[0xf] = ((char)((ulong)uVar2 >> 0x38) == '\0') -
                   (param_1[0xf] == (char)((ulong)uVar3 >> 0x38));
    uVar58 = (ushort)((ushort)(SUB161(auVar77 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar77[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar58 != 0) goto LAB_0071bef0;
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  }
  param_2 = (char *)((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (char *)((ulong)param_1 & 0xfffffffffffffff0);
  uVar60 = 0;
  uVar55 = uVar55 & 0xf;
  uVar56 = (ulong)uVar55;
  uVar53 = uVar53 & 0xf;
  uVar54 = (ulong)uVar53;
  if (uVar55 != uVar53) {
    pcVar59 = param_2;
    if (uVar55 <= uVar53) {
      uVar60 = 0xffff;
      uVar54 = (ulong)uVar55;
      uVar56 = (ulong)uVar53;
      pcVar59 = param_1;
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0071ad49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar54 = (*(code *)(&DAT_0082ad70 + *(int *)(&DAT_0082ad70 + ((uVar54 + 0xf) - uVar56) * 4)))
                       (param_1,pcVar59,0xffff,uVar56,uVar60);
    return uVar54;
  }
  auVar78[0] = (*param_2 == '\0') - (*param_2 == *param_1);
  auVar78[1] = (param_2[1] == '\0') - (param_2[1] == param_1[1]);
  auVar78[2] = (param_2[2] == '\0') - (param_2[2] == param_1[2]);
  auVar78[3] = (param_2[3] == '\0') - (param_2[3] == param_1[3]);
  auVar78[4] = (param_2[4] == '\0') - (param_2[4] == param_1[4]);
  auVar78[5] = (param_2[5] == '\0') - (param_2[5] == param_1[5]);
  auVar78[6] = (param_2[6] == '\0') - (param_2[6] == param_1[6]);
  auVar78[7] = (param_2[7] == '\0') - (param_2[7] == param_1[7]);
  auVar78[8] = (param_2[8] == '\0') - (param_2[8] == param_1[8]);
  auVar78[9] = (param_2[9] == '\0') - (param_2[9] == param_1[9]);
  auVar78[10] = (param_2[10] == '\0') - (param_2[10] == param_1[10]);
  auVar78[0xb] = (param_2[0xb] == '\0') - (param_2[0xb] == param_1[0xb]);
  auVar78[0xc] = (param_2[0xc] == '\0') - (param_2[0xc] == param_1[0xc]);
  auVar78[0xd] = (param_2[0xd] == '\0') - (param_2[0xd] == param_1[0xd]);
  auVar78[0xe] = (param_2[0xe] == '\0') - (param_2[0xe] == param_1[0xe]);
  auVar78[0xf] = (param_2[0xf] == '\0') - (param_2[0xf] == param_1[0xf]);
  uVar58 = (0xffffU >> (sbyte)uVar55) -
           (uint)((ushort)((ushort)(SUB161(auVar78 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar78[0xf] >> 7) << 0xf) >> (sbyte)uVar55);
  if (uVar58 == 0) {
    uVar57 = 0x10;
    cVar61 = '\0';
    cVar62 = '\0';
    cVar63 = '\0';
    cVar64 = '\0';
    cVar65 = '\0';
    cVar66 = '\0';
    cVar67 = '\0';
    cVar68 = '\0';
    cVar69 = '\0';
    cVar70 = '\0';
    cVar71 = '\0';
    cVar72 = '\0';
    cVar73 = '\0';
    cVar74 = '\0';
    cVar75 = '\0';
    cVar76 = '\0';
    while( true ) {
      pcVar59 = param_2 + uVar57;
      cVar21 = *pcVar59;
      cVar22 = pcVar59[1];
      cVar23 = pcVar59[2];
      cVar24 = pcVar59[3];
      cVar25 = pcVar59[4];
      cVar26 = pcVar59[5];
      cVar27 = pcVar59[6];
      cVar28 = pcVar59[7];
      cVar29 = pcVar59[8];
      cVar30 = pcVar59[9];
      cVar31 = pcVar59[10];
      cVar32 = pcVar59[0xb];
      cVar33 = pcVar59[0xc];
      cVar34 = pcVar59[0xd];
      cVar35 = pcVar59[0xe];
      cVar36 = pcVar59[0xf];
      pcVar59 = param_1 + uVar57;
      auVar79[0] = (cVar61 == cVar21) - (cVar21 == *pcVar59);
      auVar79[1] = (cVar62 == cVar22) - (cVar22 == pcVar59[1]);
      auVar79[2] = (cVar63 == cVar23) - (cVar23 == pcVar59[2]);
      auVar79[3] = (cVar64 == cVar24) - (cVar24 == pcVar59[3]);
      auVar79[4] = (cVar65 == cVar25) - (cVar25 == pcVar59[4]);
      auVar79[5] = (cVar66 == cVar26) - (cVar26 == pcVar59[5]);
      auVar79[6] = (cVar67 == cVar27) - (cVar27 == pcVar59[6]);
      auVar79[7] = (cVar68 == cVar28) - (cVar28 == pcVar59[7]);
      auVar79[8] = (cVar69 == cVar29) - (cVar29 == pcVar59[8]);
      auVar79[9] = (cVar70 == cVar30) - (cVar30 == pcVar59[9]);
      auVar79[10] = (cVar71 == cVar31) - (cVar31 == pcVar59[10]);
      auVar79[0xb] = (cVar72 == cVar32) - (cVar32 == pcVar59[0xb]);
      auVar79[0xc] = (cVar73 == cVar33) - (cVar33 == pcVar59[0xc]);
      auVar79[0xd] = (cVar74 == cVar34) - (cVar34 == pcVar59[0xd]);
      auVar79[0xe] = (cVar75 == cVar35) - (cVar35 == pcVar59[0xe]);
      auVar79[0xf] = (cVar76 == cVar36) - (cVar36 == pcVar59[0xf]);
      uVar58 = (ushort)((ushort)(SUB161(auVar79 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar79[0xf] >> 7) << 0xf) - 0xffff;
      uVar54 = uVar57;
      uVar56 = uVar57;
      if (uVar58 != 0) break;
      uVar54 = uVar57 + 0x10;
      pcVar59 = param_2 + uVar54;
      cVar37 = *pcVar59;
      cVar38 = pcVar59[1];
      cVar39 = pcVar59[2];
      cVar40 = pcVar59[3];
      cVar41 = pcVar59[4];
      cVar42 = pcVar59[5];
      cVar43 = pcVar59[6];
      cVar44 = pcVar59[7];
      cVar45 = pcVar59[8];
      cVar46 = pcVar59[9];
      cVar47 = pcVar59[10];
      cVar48 = pcVar59[0xb];
      cVar49 = pcVar59[0xc];
      cVar50 = pcVar59[0xd];
      cVar51 = pcVar59[0xe];
      cVar52 = pcVar59[0xf];
      pcVar59 = param_1 + uVar54;
      bVar5 = -(cVar61 == cVar21) == cVar37;
      cVar61 = -bVar5;
      bVar6 = -(cVar62 == cVar22) == cVar38;
      cVar62 = -bVar6;
      bVar7 = -(cVar63 == cVar23) == cVar39;
      cVar63 = -bVar7;
      bVar8 = -(cVar64 == cVar24) == cVar40;
      cVar64 = -bVar8;
      bVar9 = -(cVar65 == cVar25) == cVar41;
      cVar65 = -bVar9;
      bVar10 = -(cVar66 == cVar26) == cVar42;
      cVar66 = -bVar10;
      bVar11 = -(cVar67 == cVar27) == cVar43;
      cVar67 = -bVar11;
      bVar12 = -(cVar68 == cVar28) == cVar44;
      cVar68 = -bVar12;
      bVar13 = -(cVar69 == cVar29) == cVar45;
      cVar69 = -bVar13;
      bVar14 = -(cVar70 == cVar30) == cVar46;
      cVar70 = -bVar14;
      bVar15 = -(cVar71 == cVar31) == cVar47;
      cVar71 = -bVar15;
      bVar16 = -(cVar72 == cVar32) == cVar48;
      cVar72 = -bVar16;
      bVar17 = -(cVar73 == cVar33) == cVar49;
      cVar73 = -bVar17;
      bVar18 = -(cVar74 == cVar34) == cVar50;
      cVar74 = -bVar18;
      bVar19 = -(cVar75 == cVar35) == cVar51;
      cVar75 = -bVar19;
      bVar20 = -(cVar76 == cVar36) == cVar52;
      cVar76 = -bVar20;
      auVar80[0] = bVar5 - (cVar37 == *pcVar59);
      auVar80[1] = bVar6 - (cVar38 == pcVar59[1]);
      auVar80[2] = bVar7 - (cVar39 == pcVar59[2]);
      auVar80[3] = bVar8 - (cVar40 == pcVar59[3]);
      auVar80[4] = bVar9 - (cVar41 == pcVar59[4]);
      auVar80[5] = bVar10 - (cVar42 == pcVar59[5]);
      auVar80[6] = bVar11 - (cVar43 == pcVar59[6]);
      auVar80[7] = bVar12 - (cVar44 == pcVar59[7]);
      auVar80[8] = bVar13 - (cVar45 == pcVar59[8]);
      auVar80[9] = bVar14 - (cVar46 == pcVar59[9]);
      auVar80[10] = bVar15 - (cVar47 == pcVar59[10]);
      auVar80[0xb] = bVar16 - (cVar48 == pcVar59[0xb]);
      auVar80[0xc] = bVar17 - (cVar49 == pcVar59[0xc]);
      auVar80[0xd] = bVar18 - (cVar50 == pcVar59[0xd]);
      auVar80[0xe] = bVar19 - (cVar51 == pcVar59[0xe]);
      auVar80[0xf] = bVar20 - (cVar52 == pcVar59[0xf]);
      uVar58 = (ushort)((ushort)(SUB161(auVar80 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar80[0xf] >> 7) << 0xf) - 0xffff;
      uVar56 = uVar54;
      if (uVar58 != 0) break;
      uVar57 = uVar57 + 0x20;
    }
  }
  param_1 = param_1 + uVar54;
  param_2 = param_2 + uVar56;
LAB_0071bef0:
  lVar4 = 0;
  if (uVar58 != 0) {
    for (; (uVar58 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  return (ulong)((uint)(byte)param_1[lVar4] - (uint)(byte)param_2[lVar4]);
}

