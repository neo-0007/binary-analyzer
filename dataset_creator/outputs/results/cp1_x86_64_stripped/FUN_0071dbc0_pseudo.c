
/* WARNING: Removing unreachable block (ram,0x0071f2f2) */

ulong FUN_0071dbc0(byte *param_1,byte *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
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
  char cVar19;
  char cVar20;
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
  uint uVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar55;
  uint uVar56;
  char *pcVar57;
  char *pcVar58;
  char *pcVar59;
  undefined8 uVar60;
  ulong uVar61;
  bool bVar62;
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
  char cVar77;
  char cVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  ulong uVar54;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    return (ulong)((uint)*param_1 - (uint)*param_2);
  }
  uVar53 = (uint)param_2;
  uVar51 = (uint)param_1;
  if (((uVar53 & 0x3f) < 0x31) && ((uVar51 & 0x3f) < 0x31)) {
    uVar60 = *(undefined8 *)param_1;
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_2 + 8);
    auVar79[0] = ((char)uVar60 == '\0') - ((char)uVar60 == (char)uVar1);
    auVar79[1] = ((char)((ulong)uVar60 >> 8) == '\0') - (param_1[1] == (byte)((ulong)uVar1 >> 8));
    auVar79[2] = ((char)((ulong)uVar60 >> 0x10) == '\0') -
                 (param_1[2] == (byte)((ulong)uVar1 >> 0x10));
    auVar79[3] = ((char)((ulong)uVar60 >> 0x18) == '\0') -
                 (param_1[3] == (byte)((ulong)uVar1 >> 0x18));
    auVar79[4] = ((char)((ulong)uVar60 >> 0x20) == '\0') -
                 (param_1[4] == (byte)((ulong)uVar1 >> 0x20));
    auVar79[5] = ((char)((ulong)uVar60 >> 0x28) == '\0') -
                 (param_1[5] == (byte)((ulong)uVar1 >> 0x28));
    auVar79[6] = ((char)((ulong)uVar60 >> 0x30) == '\0') -
                 (param_1[6] == (byte)((ulong)uVar1 >> 0x30));
    auVar79[7] = ((char)((ulong)uVar60 >> 0x38) == '\0') -
                 (param_1[7] == (byte)((ulong)uVar1 >> 0x38));
    auVar79[8] = ((char)uVar2 == '\0') - (param_1[8] == (byte)uVar3);
    auVar79[9] = ((char)((ulong)uVar2 >> 8) == '\0') - (param_1[9] == (byte)((ulong)uVar3 >> 8));
    auVar79[10] = ((char)((ulong)uVar2 >> 0x10) == '\0') -
                  (param_1[10] == (byte)((ulong)uVar3 >> 0x10));
    auVar79[0xb] = ((char)((ulong)uVar2 >> 0x18) == '\0') -
                   (param_1[0xb] == (byte)((ulong)uVar3 >> 0x18));
    auVar79[0xc] = ((char)((ulong)uVar2 >> 0x20) == '\0') -
                   (param_1[0xc] == (byte)((ulong)uVar3 >> 0x20));
    auVar79[0xd] = ((char)((ulong)uVar2 >> 0x28) == '\0') -
                   (param_1[0xd] == (byte)((ulong)uVar3 >> 0x28));
    auVar79[0xe] = ((char)((ulong)uVar2 >> 0x30) == '\0') -
                   (param_1[0xe] == (byte)((ulong)uVar3 >> 0x30));
    auVar79[0xf] = ((char)((ulong)uVar2 >> 0x38) == '\0') -
                   (param_1[0xf] == (byte)((ulong)uVar3 >> 0x38));
    uVar56 = (ushort)((ushort)(SUB161(auVar79 >> 7,0) & 1) |
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
    if (uVar56 != 0) goto LAB_0071f300;
    bVar62 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar62 || param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  }
  pcVar57 = (char *)((ulong)param_2 & 0xfffffffffffffff0);
  pcVar59 = (char *)((ulong)param_1 & 0xfffffffffffffff0);
  uVar60 = 0;
  uVar53 = uVar53 & 0xf;
  uVar54 = (ulong)uVar53;
  uVar51 = uVar51 & 0xf;
  uVar52 = (ulong)uVar51;
  if (uVar53 != uVar51) {
    pcVar58 = pcVar57;
    if (uVar53 <= uVar51) {
      uVar60 = 0xffff;
      uVar52 = (ulong)uVar53;
      uVar54 = (ulong)uVar51;
      pcVar58 = pcVar59;
      pcVar59 = pcVar57;
    }
                    /* WARNING: Could not recover jumptable at 0x0071dc79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar52 = (*(code *)(&DAT_0082adf0 + *(int *)(&DAT_0082adf0 + ((uVar52 + 0xf) - uVar54) * 4)))
                       (pcVar59,pcVar58,0xffff,uVar54,uVar60);
    return uVar52;
  }
  auVar80[0] = (*pcVar57 == '\0') - (*pcVar57 == *pcVar59);
  auVar80[1] = (pcVar57[1] == '\0') - (pcVar57[1] == pcVar59[1]);
  auVar80[2] = (pcVar57[2] == '\0') - (pcVar57[2] == pcVar59[2]);
  auVar80[3] = (pcVar57[3] == '\0') - (pcVar57[3] == pcVar59[3]);
  auVar80[4] = (pcVar57[4] == '\0') - (pcVar57[4] == pcVar59[4]);
  auVar80[5] = (pcVar57[5] == '\0') - (pcVar57[5] == pcVar59[5]);
  auVar80[6] = (pcVar57[6] == '\0') - (pcVar57[6] == pcVar59[6]);
  auVar80[7] = (pcVar57[7] == '\0') - (pcVar57[7] == pcVar59[7]);
  auVar80[8] = (pcVar57[8] == '\0') - (pcVar57[8] == pcVar59[8]);
  auVar80[9] = (pcVar57[9] == '\0') - (pcVar57[9] == pcVar59[9]);
  auVar80[10] = (pcVar57[10] == '\0') - (pcVar57[10] == pcVar59[10]);
  auVar80[0xb] = (pcVar57[0xb] == '\0') - (pcVar57[0xb] == pcVar59[0xb]);
  auVar80[0xc] = (pcVar57[0xc] == '\0') - (pcVar57[0xc] == pcVar59[0xc]);
  auVar80[0xd] = (pcVar57[0xd] == '\0') - (pcVar57[0xd] == pcVar59[0xd]);
  auVar80[0xe] = (pcVar57[0xe] == '\0') - (pcVar57[0xe] == pcVar59[0xe]);
  auVar80[0xf] = (pcVar57[0xf] == '\0') - (pcVar57[0xf] == pcVar59[0xf]);
  uVar56 = (0xffffU >> (sbyte)uVar53) -
           (uint)((ushort)((ushort)(SUB161(auVar80 >> 7,0) & 1) |
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
                          (ushort)(auVar80[0xf] >> 7) << 0xf) >> (sbyte)uVar53);
  if (uVar56 == 0) {
    uVar61 = (uVar54 - 0x10) + param_3;
    if (param_3 < uVar61) {
      return 0;
    }
    if (uVar61 == 0) {
      return 0;
    }
    uVar55 = 0x10;
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
    cVar77 = '\0';
    cVar78 = '\0';
    while( true ) {
      pcVar58 = pcVar57 + uVar55;
      cVar19 = *pcVar58;
      cVar20 = pcVar58[1];
      cVar21 = pcVar58[2];
      cVar22 = pcVar58[3];
      cVar23 = pcVar58[4];
      cVar24 = pcVar58[5];
      cVar25 = pcVar58[6];
      cVar26 = pcVar58[7];
      cVar27 = pcVar58[8];
      cVar28 = pcVar58[9];
      cVar29 = pcVar58[10];
      cVar30 = pcVar58[0xb];
      cVar31 = pcVar58[0xc];
      cVar32 = pcVar58[0xd];
      cVar33 = pcVar58[0xe];
      cVar34 = pcVar58[0xf];
      pcVar58 = pcVar59 + uVar55;
      auVar81[0] = (cVar63 == cVar19) - (cVar19 == *pcVar58);
      auVar81[1] = (cVar64 == cVar20) - (cVar20 == pcVar58[1]);
      auVar81[2] = (cVar65 == cVar21) - (cVar21 == pcVar58[2]);
      auVar81[3] = (cVar66 == cVar22) - (cVar22 == pcVar58[3]);
      auVar81[4] = (cVar67 == cVar23) - (cVar23 == pcVar58[4]);
      auVar81[5] = (cVar68 == cVar24) - (cVar24 == pcVar58[5]);
      auVar81[6] = (cVar69 == cVar25) - (cVar25 == pcVar58[6]);
      auVar81[7] = (cVar70 == cVar26) - (cVar26 == pcVar58[7]);
      auVar81[8] = (cVar71 == cVar27) - (cVar27 == pcVar58[8]);
      auVar81[9] = (cVar72 == cVar28) - (cVar28 == pcVar58[9]);
      auVar81[10] = (cVar73 == cVar29) - (cVar29 == pcVar58[10]);
      auVar81[0xb] = (cVar74 == cVar30) - (cVar30 == pcVar58[0xb]);
      auVar81[0xc] = (cVar75 == cVar31) - (cVar31 == pcVar58[0xc]);
      auVar81[0xd] = (cVar76 == cVar32) - (cVar32 == pcVar58[0xd]);
      auVar81[0xe] = (cVar77 == cVar33) - (cVar33 == pcVar58[0xe]);
      auVar81[0xf] = (cVar78 == cVar34) - (cVar34 == pcVar58[0xf]);
      uVar56 = (ushort)((ushort)(SUB161(auVar81 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar81[0xf] >> 7) << 0xf) - 0xffff;
      uVar52 = uVar55;
      uVar54 = uVar55;
      param_3 = uVar61;
      if (uVar56 != 0) break;
      param_3 = uVar61 - 0x10;
      if (uVar61 < 0x10 || param_3 == 0) {
        return 0;
      }
      uVar52 = uVar55 + 0x10;
      pcVar58 = pcVar57 + uVar52;
      cVar35 = *pcVar58;
      cVar36 = pcVar58[1];
      cVar37 = pcVar58[2];
      cVar38 = pcVar58[3];
      cVar39 = pcVar58[4];
      cVar40 = pcVar58[5];
      cVar41 = pcVar58[6];
      cVar42 = pcVar58[7];
      cVar43 = pcVar58[8];
      cVar44 = pcVar58[9];
      cVar45 = pcVar58[10];
      cVar46 = pcVar58[0xb];
      cVar47 = pcVar58[0xc];
      cVar48 = pcVar58[0xd];
      cVar49 = pcVar58[0xe];
      cVar50 = pcVar58[0xf];
      pcVar58 = pcVar59 + uVar52;
      bVar62 = -(cVar63 == cVar19) == cVar35;
      cVar63 = -bVar62;
      bVar4 = -(cVar64 == cVar20) == cVar36;
      cVar64 = -bVar4;
      bVar5 = -(cVar65 == cVar21) == cVar37;
      cVar65 = -bVar5;
      bVar6 = -(cVar66 == cVar22) == cVar38;
      cVar66 = -bVar6;
      bVar7 = -(cVar67 == cVar23) == cVar39;
      cVar67 = -bVar7;
      bVar8 = -(cVar68 == cVar24) == cVar40;
      cVar68 = -bVar8;
      bVar9 = -(cVar69 == cVar25) == cVar41;
      cVar69 = -bVar9;
      bVar10 = -(cVar70 == cVar26) == cVar42;
      cVar70 = -bVar10;
      bVar11 = -(cVar71 == cVar27) == cVar43;
      cVar71 = -bVar11;
      bVar12 = -(cVar72 == cVar28) == cVar44;
      cVar72 = -bVar12;
      bVar13 = -(cVar73 == cVar29) == cVar45;
      cVar73 = -bVar13;
      bVar14 = -(cVar74 == cVar30) == cVar46;
      cVar74 = -bVar14;
      bVar15 = -(cVar75 == cVar31) == cVar47;
      cVar75 = -bVar15;
      bVar16 = -(cVar76 == cVar32) == cVar48;
      cVar76 = -bVar16;
      bVar17 = -(cVar77 == cVar33) == cVar49;
      cVar77 = -bVar17;
      bVar18 = -(cVar78 == cVar34) == cVar50;
      cVar78 = -bVar18;
      auVar82[0] = bVar62 - (cVar35 == *pcVar58);
      auVar82[1] = bVar4 - (cVar36 == pcVar58[1]);
      auVar82[2] = bVar5 - (cVar37 == pcVar58[2]);
      auVar82[3] = bVar6 - (cVar38 == pcVar58[3]);
      auVar82[4] = bVar7 - (cVar39 == pcVar58[4]);
      auVar82[5] = bVar8 - (cVar40 == pcVar58[5]);
      auVar82[6] = bVar9 - (cVar41 == pcVar58[6]);
      auVar82[7] = bVar10 - (cVar42 == pcVar58[7]);
      auVar82[8] = bVar11 - (cVar43 == pcVar58[8]);
      auVar82[9] = bVar12 - (cVar44 == pcVar58[9]);
      auVar82[10] = bVar13 - (cVar45 == pcVar58[10]);
      auVar82[0xb] = bVar14 - (cVar46 == pcVar58[0xb]);
      auVar82[0xc] = bVar15 - (cVar47 == pcVar58[0xc]);
      auVar82[0xd] = bVar16 - (cVar48 == pcVar58[0xd]);
      auVar82[0xe] = bVar17 - (cVar49 == pcVar58[0xe]);
      auVar82[0xf] = bVar18 - (cVar50 == pcVar58[0xf]);
      uVar56 = (ushort)((ushort)(SUB161(auVar82 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar82[0xf] >> 7) << 0xf) - 0xffff;
      uVar54 = uVar52;
      if (uVar56 != 0) break;
      uVar61 = uVar61 - 0x20;
      if (param_3 < 0x10 || uVar61 == 0) {
        return 0;
      }
      uVar55 = uVar55 + 0x20;
    }
  }
  param_1 = (byte *)(pcVar59 + uVar52);
  param_2 = (byte *)(pcVar57 + uVar54);
LAB_0071f300:
  uVar52 = 0;
  if (uVar56 != 0) {
    for (; (uVar56 >> uVar52 & 1) == 0; uVar52 = uVar52 + 1) {
    }
  }
  if (param_3 <= uVar52) {
    return 0;
  }
  return (ulong)((uint)param_1[uVar52] - (uint)param_2[uVar52]);
}

