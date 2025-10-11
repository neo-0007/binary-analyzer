
long FUN_0075bfc0(int *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte bVar25;
  int iVar27;
  byte bVar33;
  byte bVar34;
  byte bVar36;
  int iVar37;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  int iVar42;
  byte bVar43;
  byte bVar44;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar35;
  byte bVar40;
  byte bVar45;
  int iVar47;
  byte bVar50;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar51;
  int iVar52;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  int iVar59;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  int iVar64;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  undefined1 auVar53 [16];
  byte bVar57;
  byte bVar62;
  byte bVar67;
  int iVar69;
  byte bVar72;
  undefined1 auVar54 [16];
  byte bVar26;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar5 = (uint)param_1;
  if ((uVar5 & 0x3f) < 0x31) {
    auVar11._0_4_ = -(uint)(*param_1 == param_2);
    auVar11._4_4_ = -(uint)(param_1[1] == param_2);
    auVar11._8_4_ = -(uint)(param_1[2] == param_2);
    auVar11._12_4_ = -(uint)(param_1[3] == param_2);
    uVar3 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar11._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar11._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar11._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar11._12_4_ >> 0x1f) << 0xf;
    if (uVar3 != 0) goto LAB_0075c2d0;
    if (param_3 < 4 || param_3 - 4 == 0) {
      return 0;
    }
    param_1 = (int *)((ulong)(param_1 + 4) & 0xfffffffffffffff0);
    uVar7 = (param_3 - 4) + (ulong)((uVar5 & 0xf) >> 2);
    uVar8 = uVar7 - 0x10;
    piVar9 = param_1;
    if (0xf < uVar7 && uVar8 != 0) goto LAB_0075c090;
  }
  else {
    uVar5 = uVar5 & 0xf;
    param_1 = (int *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar12._0_4_ = -(uint)(*param_1 == param_2);
    auVar12._4_4_ = -(uint)(param_1[1] == param_2);
    auVar12._8_4_ = -(uint)(param_1[2] == param_2);
    auVar12._12_4_ = -(uint)(param_1[3] == param_2);
    uVar6 = (int)(uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                                (ushort)((byte)(auVar12._12_4_ >> 7) & 1) << 0xc |
                                (ushort)((byte)(auVar12._12_4_ >> 0xf) & 1) << 0xd |
                                (ushort)((byte)(auVar12._12_4_ >> 0x17) & 1) << 0xe |
                               (ushort)(byte)(auVar12._12_4_ >> 0x1f) << 0xf) >> (sbyte)uVar5;
    if (uVar6 != 0) {
      uVar1 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (param_3 <= uVar1 >> 2) {
        return 0;
      }
      return (long)param_1 + (ulong)uVar5 + (ulong)uVar1;
    }
    uVar8 = (ulong)(0x10 - uVar5 >> 2);
    uVar7 = param_3 - uVar8;
    if (param_3 < uVar8 || uVar7 == 0) {
      return 0;
    }
    param_1 = param_1 + 4;
    uVar8 = uVar7 - 0x10;
    piVar9 = param_1;
    if (0xf < uVar7 && uVar8 != 0) {
LAB_0075c090:
      auVar13._0_4_ = -(uint)(*piVar9 == param_2);
      auVar13._4_4_ = -(uint)(piVar9[1] == param_2);
      auVar13._8_4_ = -(uint)(piVar9[2] == param_2);
      auVar13._12_4_ = -(uint)(piVar9[3] == param_2);
      uVar3 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar13._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar13._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar13._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar13._12_4_ >> 0x1f) << 0xf;
      uVar5 = (uint)uVar3;
      param_1 = piVar9;
      if (uVar3 != 0) goto LAB_0075c2a0;
      auVar21._0_4_ = -(uint)(piVar9[4] == param_2);
      auVar21._4_4_ = -(uint)(piVar9[5] == param_2);
      auVar21._8_4_ = -(uint)(piVar9[6] == param_2);
      auVar21._12_4_ = -(uint)(piVar9[7] == param_2);
      uVar3 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar21._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar21._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar21._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar21._12_4_ >> 0x1f) << 0xf;
      uVar5 = (uint)uVar3;
      if (uVar3 != 0) goto LAB_0075c2b0;
      auVar28._0_4_ = -(uint)(piVar9[8] == param_2);
      auVar28._4_4_ = -(uint)(piVar9[9] == param_2);
      auVar28._8_4_ = -(uint)(piVar9[10] == param_2);
      auVar28._12_4_ = -(uint)(piVar9[0xb] == param_2);
      uVar3 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar28._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar28._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar28._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar28._12_4_ >> 0x1f) << 0xf;
      uVar5 = (uint)uVar3;
      if (uVar3 != 0) goto LAB_0075c2c0;
      auVar53._0_4_ = -(uint)(piVar9[0xc] == param_2);
      auVar53._4_4_ = -(uint)(piVar9[0xd] == param_2);
      auVar53._8_4_ = -(uint)(piVar9[0xe] == param_2);
      auVar53._12_4_ = -(uint)(piVar9[0xf] == param_2);
      param_1 = piVar9 + 0x10;
      uVar3 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar53._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar53._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar53._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar53._12_4_ >> 0x1f) << 0xf;
      if (uVar3 != 0) {
LAB_0075c290:
        uVar5 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        return ((ulong)uVar5 - 0x10) + (long)param_1;
      }
      piVar4 = param_1;
      if (((ulong)param_1 & 0x3f) != 0) {
        bVar10 = uVar8 < 0x10;
        uVar8 = uVar8 - 0x10;
        if (bVar10 || uVar8 == 0) goto LAB_0075c200;
        auVar14._0_4_ = -(uint)(*param_1 == param_2);
        auVar14._4_4_ = -(uint)(piVar9[0x11] == param_2);
        auVar14._8_4_ = -(uint)(piVar9[0x12] == param_2);
        auVar14._12_4_ = -(uint)(piVar9[0x13] == param_2);
        uVar3 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar14._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar14._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar14._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar14._12_4_ >> 0x1f) << 0xf;
        uVar5 = (uint)uVar3;
        if (uVar3 != 0) goto LAB_0075c2a0;
        auVar22._0_4_ = -(uint)(piVar9[0x14] == param_2);
        auVar22._4_4_ = -(uint)(piVar9[0x15] == param_2);
        auVar22._8_4_ = -(uint)(piVar9[0x16] == param_2);
        auVar22._12_4_ = -(uint)(piVar9[0x17] == param_2);
        uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar22._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar22._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar22._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar22._12_4_ >> 0x1f) << 0xf;
        uVar5 = (uint)uVar3;
        if (uVar3 != 0) goto LAB_0075c2b0;
        auVar29._0_4_ = -(uint)(piVar9[0x18] == param_2);
        auVar29._4_4_ = -(uint)(piVar9[0x19] == param_2);
        auVar29._8_4_ = -(uint)(piVar9[0x1a] == param_2);
        auVar29._12_4_ = -(uint)(piVar9[0x1b] == param_2);
        uVar3 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar29._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar29._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar29._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar29._12_4_ >> 0x1f) << 0xf;
        uVar5 = (uint)uVar3;
        if (uVar3 != 0) goto LAB_0075c2c0;
        auVar30._0_4_ = -(uint)(piVar9[0x1c] == param_2);
        auVar30._4_4_ = -(uint)(piVar9[0x1d] == param_2);
        auVar30._8_4_ = -(uint)(piVar9[0x1e] == param_2);
        auVar30._12_4_ = -(uint)(piVar9[0x1f] == param_2);
        uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar30._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar30._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar30._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar30._12_4_ >> 0x1f) << 0xf;
        param_1 = piVar9 + 0x20;
        if (uVar3 != 0) goto LAB_0075c290;
        uVar8 = uVar8 + (((uint)param_1 & 0x3f) >> 2);
        piVar4 = (int *)((ulong)param_1 & 0xffffffffffffffc0);
      }
      do {
        param_1 = piVar4;
        bVar10 = uVar8 < 0x10;
        uVar8 = uVar8 - 0x10;
        if (bVar10 || uVar8 == 0) goto LAB_0075c200;
        auVar15._0_4_ = -(uint)(*param_1 == param_2);
        auVar15._4_4_ = -(uint)(param_1[1] == param_2);
        auVar15._8_4_ = -(uint)(param_1[2] == param_2);
        auVar15._12_4_ = -(uint)(param_1[3] == param_2);
        auVar23._0_4_ = -(uint)(param_1[4] == param_2);
        auVar23._4_4_ = -(uint)(param_1[5] == param_2);
        auVar23._8_4_ = -(uint)(param_1[6] == param_2);
        auVar23._12_4_ = -(uint)(param_1[7] == param_2);
        iVar27 = -(uint)(param_1[8] == param_2);
        iVar37 = -(uint)(param_1[9] == param_2);
        iVar42 = -(uint)(param_1[10] == param_2);
        iVar47 = -(uint)(param_1[0xb] == param_2);
        iVar52 = -(uint)(param_1[0xc] == param_2);
        iVar59 = -(uint)(param_1[0xd] == param_2);
        iVar64 = -(uint)(param_1[0xe] == param_2);
        iVar69 = -(uint)(param_1[0xf] == param_2);
        bVar2 = (byte)auVar15._0_4_;
        bVar26 = (byte)iVar27;
        bVar25 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._0_4_ >> 8);
        bVar26 = (byte)((uint)iVar27 >> 8);
        bVar33 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._0_4_ >> 0x10);
        bVar26 = (byte)((uint)iVar27 >> 0x10);
        bVar34 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._0_4_ >> 0x18);
        bVar26 = (byte)((uint)iVar27 >> 0x18);
        bVar35 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)auVar15._4_4_;
        bVar26 = (byte)iVar37;
        bVar36 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._4_4_ >> 8);
        bVar26 = (byte)((uint)iVar37 >> 8);
        bVar38 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._4_4_ >> 0x10);
        bVar26 = (byte)((uint)iVar37 >> 0x10);
        bVar39 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._4_4_ >> 0x18);
        bVar26 = (byte)((uint)iVar37 >> 0x18);
        bVar40 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)auVar15._8_4_;
        bVar26 = (byte)iVar42;
        bVar41 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._8_4_ >> 8);
        bVar26 = (byte)((uint)iVar42 >> 8);
        bVar43 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._8_4_ >> 0x10);
        bVar26 = (byte)((uint)iVar42 >> 0x10);
        bVar44 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)((uint)auVar15._8_4_ >> 0x18);
        bVar26 = (byte)((uint)iVar42 >> 0x18);
        bVar45 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)auVar15._12_4_;
        bVar26 = (byte)iVar47;
        bVar46 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)(auVar15._12_4_ >> 8);
        bVar26 = (byte)((uint)iVar47 >> 8);
        bVar48 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar2 = (byte)(auVar15._12_4_ >> 0x10);
        bVar26 = (byte)((uint)iVar47 >> 0x10);
        bVar50 = (byte)((uint)iVar47 >> 0x18);
        bVar49 = (bVar26 < bVar2) * bVar2 | (bVar26 >= bVar2) * bVar26;
        bVar26 = (byte)(auVar15._12_4_ >> 0x18);
        bVar50 = (bVar50 < bVar26) * bVar26 | (bVar50 >= bVar26) * bVar50;
        bVar2 = (byte)auVar23._0_4_;
        bVar51 = (byte)iVar52;
        bVar51 = (bVar51 < bVar2) * bVar2 | (bVar51 >= bVar2) * bVar51;
        bVar2 = (byte)((uint)auVar23._0_4_ >> 8);
        bVar55 = (byte)((uint)iVar52 >> 8);
        bVar55 = (bVar55 < bVar2) * bVar2 | (bVar55 >= bVar2) * bVar55;
        bVar2 = (byte)((uint)auVar23._0_4_ >> 0x10);
        bVar56 = (byte)((uint)iVar52 >> 0x10);
        bVar56 = (bVar56 < bVar2) * bVar2 | (bVar56 >= bVar2) * bVar56;
        bVar2 = (byte)((uint)auVar23._0_4_ >> 0x18);
        bVar57 = (byte)((uint)iVar52 >> 0x18);
        bVar57 = (bVar57 < bVar2) * bVar2 | (bVar57 >= bVar2) * bVar57;
        bVar2 = (byte)auVar23._4_4_;
        bVar58 = (byte)iVar59;
        bVar58 = (bVar58 < bVar2) * bVar2 | (bVar58 >= bVar2) * bVar58;
        bVar2 = (byte)((uint)auVar23._4_4_ >> 8);
        bVar60 = (byte)((uint)iVar59 >> 8);
        bVar60 = (bVar60 < bVar2) * bVar2 | (bVar60 >= bVar2) * bVar60;
        bVar2 = (byte)((uint)auVar23._4_4_ >> 0x10);
        bVar61 = (byte)((uint)iVar59 >> 0x10);
        bVar61 = (bVar61 < bVar2) * bVar2 | (bVar61 >= bVar2) * bVar61;
        bVar2 = (byte)((uint)auVar23._4_4_ >> 0x18);
        bVar62 = (byte)((uint)iVar59 >> 0x18);
        bVar62 = (bVar62 < bVar2) * bVar2 | (bVar62 >= bVar2) * bVar62;
        bVar2 = (byte)auVar23._8_4_;
        bVar63 = (byte)iVar64;
        bVar63 = (bVar63 < bVar2) * bVar2 | (bVar63 >= bVar2) * bVar63;
        bVar2 = (byte)((uint)auVar23._8_4_ >> 8);
        bVar65 = (byte)((uint)iVar64 >> 8);
        bVar65 = (bVar65 < bVar2) * bVar2 | (bVar65 >= bVar2) * bVar65;
        bVar2 = (byte)((uint)auVar23._8_4_ >> 0x10);
        bVar66 = (byte)((uint)iVar64 >> 0x10);
        bVar66 = (bVar66 < bVar2) * bVar2 | (bVar66 >= bVar2) * bVar66;
        bVar2 = (byte)((uint)auVar23._8_4_ >> 0x18);
        bVar67 = (byte)((uint)iVar64 >> 0x18);
        bVar67 = (bVar67 < bVar2) * bVar2 | (bVar67 >= bVar2) * bVar67;
        bVar2 = (byte)auVar23._12_4_;
        bVar68 = (byte)iVar69;
        bVar68 = (bVar68 < bVar2) * bVar2 | (bVar68 >= bVar2) * bVar68;
        bVar2 = (byte)(auVar23._12_4_ >> 8);
        bVar70 = (byte)((uint)iVar69 >> 8);
        bVar70 = (bVar70 < bVar2) * bVar2 | (bVar70 >= bVar2) * bVar70;
        bVar2 = (byte)(auVar23._12_4_ >> 0x10);
        bVar71 = (byte)((uint)iVar69 >> 0x10);
        bVar72 = (byte)((uint)iVar69 >> 0x18);
        bVar71 = (bVar71 < bVar2) * bVar2 | (bVar71 >= bVar2) * bVar71;
        bVar2 = (byte)(auVar23._12_4_ >> 0x18);
        bVar72 = (bVar72 < bVar2) * bVar2 | (bVar72 >= bVar2) * bVar72;
        auVar54[0] = (bVar51 < bVar25) * bVar25 | (bVar51 >= bVar25) * bVar51;
        auVar54[1] = (bVar55 < bVar33) * bVar33 | (bVar55 >= bVar33) * bVar55;
        auVar54[2] = (bVar56 < bVar34) * bVar34 | (bVar56 >= bVar34) * bVar56;
        auVar54[3] = (bVar57 < bVar35) * bVar35 | (bVar57 >= bVar35) * bVar57;
        auVar54[4] = (bVar58 < bVar36) * bVar36 | (bVar58 >= bVar36) * bVar58;
        auVar54[5] = (bVar60 < bVar38) * bVar38 | (bVar60 >= bVar38) * bVar60;
        auVar54[6] = (bVar61 < bVar39) * bVar39 | (bVar61 >= bVar39) * bVar61;
        auVar54[7] = (bVar62 < bVar40) * bVar40 | (bVar62 >= bVar40) * bVar62;
        auVar54[8] = (bVar63 < bVar41) * bVar41 | (bVar63 >= bVar41) * bVar63;
        auVar54[9] = (bVar65 < bVar43) * bVar43 | (bVar65 >= bVar43) * bVar65;
        auVar54[10] = (bVar66 < bVar44) * bVar44 | (bVar66 >= bVar44) * bVar66;
        auVar54[0xb] = (bVar67 < bVar45) * bVar45 | (bVar67 >= bVar45) * bVar67;
        auVar54[0xc] = (bVar68 < bVar46) * bVar46 | (bVar68 >= bVar46) * bVar68;
        auVar54[0xd] = (bVar70 < bVar48) * bVar48 | (bVar70 >= bVar48) * bVar70;
        auVar54[0xe] = (bVar71 < bVar49) * bVar49 | (bVar71 >= bVar49) * bVar71;
        auVar54[0xf] = (bVar72 < bVar50) * bVar50 | (bVar72 >= bVar50) * bVar72;
        piVar4 = param_1 + 0x10;
      } while ((((((((((((((((auVar54 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                            (auVar54 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar54 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar54 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar54 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar54 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar54 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar54 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar54 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar54 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar54 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar54 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar54 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar54 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar54 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               -1 < (char)auVar54[0xf]);
      uVar3 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar15._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar15._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar15._12_4_ >> 0x17) & 1) << 0xe | (ushort)(bVar26 >> 7) << 0xf;
      uVar5 = (uint)uVar3;
      if (uVar3 != 0) goto LAB_0075c2a0;
      uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar23._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar23._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar23._12_4_ >> 0x17) & 1) << 0xe | (ushort)(bVar2 >> 7) << 0xf;
      uVar5 = (uint)uVar3;
      if (uVar3 == 0) {
        auVar31._0_4_ = -(uint)(param_1[8] == param_2);
        auVar31._4_4_ = -(uint)(param_1[9] == param_2);
        auVar31._8_4_ = -(uint)(param_1[10] == param_2);
        auVar31._12_4_ = -(uint)(param_1[0xb] == param_2);
        auVar18._0_4_ = -(uint)(param_2 == param_1[0xc]);
        auVar18._4_4_ = -(uint)(param_2 == param_1[0xd]);
        auVar18._8_4_ = -(uint)(param_2 == param_1[0xe]);
        auVar18._12_4_ = -(uint)(param_2 == param_1[0xf]);
        uVar3 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar31._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar31._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar31._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar31._12_4_ >> 0x1f) << 0xf;
        uVar5 = (uint)uVar3;
        if (uVar3 == 0) {
          uVar3 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                  (ushort)((byte)(auVar18._12_4_ >> 7) & 1) << 0xc |
                  (ushort)((byte)(auVar18._12_4_ >> 0xf) & 1) << 0xd |
                  (ushort)((byte)(auVar18._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar18._12_4_ >> 0x1f) << 0xf;
          uVar5 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (long)param_1 + (ulong)uVar5 + 0x30;
        }
LAB_0075c2c0:
        uVar6 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        return (ulong)uVar6 + 0x20 + (long)param_1;
      }
      goto LAB_0075c2b0;
    }
  }
LAB_0075c200:
  iVar27 = (int)uVar8;
  uVar6 = iVar27 + 8;
  if (iVar27 == -8 || SCARRY4(iVar27,8) != (int)uVar6 < 0) {
    param_3 = (ulong)(iVar27 + 0x10U);
    auVar17._0_4_ = -(uint)(*param_1 == param_2);
    auVar17._4_4_ = -(uint)(param_1[1] == param_2);
    auVar17._8_4_ = -(uint)(param_1[2] == param_2);
    auVar17._12_4_ = -(uint)(param_1[3] == param_2);
    uVar3 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar17._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar17._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar17._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar17._12_4_ >> 0x1f) << 0xf;
    if (uVar3 == 0) {
      if (iVar27 + 0x10U < 4 || iVar27 == -0xc) {
        return 0;
      }
      auVar20._0_4_ = -(uint)(param_2 == param_1[4]);
      auVar20._4_4_ = -(uint)(param_2 == param_1[5]);
      auVar20._8_4_ = -(uint)(param_2 == param_1[6]);
      auVar20._12_4_ = -(uint)(param_2 == param_1[7]);
      uVar3 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar20._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar20._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar20._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar20._12_4_ >> 0x1f) << 0xf;
      if (uVar3 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (iVar27 + 0xcU <= uVar5 >> 2) {
          return 0;
        }
        return (long)param_1 + (ulong)uVar5 + 0x10;
      }
      return 0;
    }
LAB_0075c2d0:
    uVar5 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (param_3 <= uVar5 >> 2) {
      return 0;
    }
    return (ulong)uVar5 + (long)param_1;
  }
  auVar16._0_4_ = -(uint)(*param_1 == param_2);
  auVar16._4_4_ = -(uint)(param_1[1] == param_2);
  auVar16._8_4_ = -(uint)(param_1[2] == param_2);
  auVar16._12_4_ = -(uint)(param_1[3] == param_2);
  uVar3 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
          (ushort)((byte)(auVar16._12_4_ >> 7) & 1) << 0xc |
          (ushort)((byte)(auVar16._12_4_ >> 0xf) & 1) << 0xd |
          (ushort)((byte)(auVar16._12_4_ >> 0x17) & 1) << 0xe |
          (ushort)(byte)(auVar16._12_4_ >> 0x1f) << 0xf;
  uVar5 = (uint)uVar3;
  if (uVar3 != 0) {
LAB_0075c2a0:
    uVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    return (ulong)uVar6 + (long)param_1;
  }
  auVar24._0_4_ = -(uint)(param_1[4] == param_2);
  auVar24._4_4_ = -(uint)(param_1[5] == param_2);
  auVar24._8_4_ = -(uint)(param_1[6] == param_2);
  auVar24._12_4_ = -(uint)(param_1[7] == param_2);
  uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)((byte)(auVar24._12_4_ >> 7) & 1) << 0xc |
          (ushort)((byte)(auVar24._12_4_ >> 0xf) & 1) << 0xd |
          (ushort)((byte)(auVar24._12_4_ >> 0x17) & 1) << 0xe |
          (ushort)(byte)(auVar24._12_4_ >> 0x1f) << 0xf;
  uVar5 = (uint)uVar3;
  if (uVar3 == 0) {
    auVar32._0_4_ = -(uint)(param_1[8] == param_2);
    auVar32._4_4_ = -(uint)(param_1[9] == param_2);
    auVar32._8_4_ = -(uint)(param_1[10] == param_2);
    auVar32._12_4_ = -(uint)(param_1[0xb] == param_2);
    uVar3 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar32._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar32._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar32._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar32._12_4_ >> 0x1f) << 0xf;
    if (uVar3 != 0) {
      uVar5 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar6 <= uVar5 >> 2) {
        return 0;
      }
      return (long)param_1 + (ulong)uVar5 + 0x20;
    }
    if (iVar27 == -4 || (int)uVar6 < 4) {
      return 0;
    }
    auVar19._0_4_ = -(uint)(param_2 == param_1[0xc]);
    auVar19._4_4_ = -(uint)(param_2 == param_1[0xd]);
    auVar19._8_4_ = -(uint)(param_2 == param_1[0xe]);
    auVar19._12_4_ = -(uint)(param_2 == param_1[0xf]);
    uVar3 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar19._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar19._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar19._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar19._12_4_ >> 0x1f) << 0xf;
    if (uVar3 != 0) {
      uVar5 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (iVar27 + 4U <= uVar5 >> 2) {
        return 0;
      }
      return (long)param_1 + (ulong)uVar5 + 0x30;
    }
    return 0;
  }
LAB_0075c2b0:
  uVar6 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  return (ulong)uVar6 + 0x10 + (long)param_1;
}

