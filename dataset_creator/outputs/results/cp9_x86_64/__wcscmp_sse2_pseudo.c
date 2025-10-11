
int __wcscmp_sse2(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar12;
  int iVar41;
  int iVar42;
  int iVar43;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  iVar6 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar11 = 0;
  uVar1 = (uint)param_2 & 0x3f;
  uVar2 = (uint)param_1 & 0x3f;
  if (((ulong)param_1 & 0xf) == 0) {
    if (((ulong)param_2 & 0xf) != 0) {
      if (uVar1 < 0x10) {
        iVar6 = -(uint)(*param_2 == 0);
        iVar9 = -(uint)(param_2[1] == 0);
        iVar10 = -(uint)(param_2[2] == 0);
        iVar11 = -(uint)(param_2[3] == 0);
        iVar12 = -(uint)(*param_2 == *param_1);
        iVar41 = -(uint)(param_2[1] == param_1[1]);
        iVar42 = -(uint)(param_2[2] == param_1[2]);
        iVar43 = -(uint)(param_2[3] == param_1[3]);
        auVar50[0] = (char)iVar12 - (char)iVar6;
        auVar50[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar50[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar50[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar50[4] = (char)iVar41 - (char)iVar9;
        auVar50[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar50[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar50[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar50[8] = (char)iVar42 - (char)iVar10;
        auVar50[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar50[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar50[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar50[0xc] = (char)iVar43 - (char)iVar11;
        auVar50[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar50[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar50[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar50[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_007537a0;
        iVar6 = -(uint)(iVar6 == param_2[4]);
        iVar9 = -(uint)(iVar9 == param_2[5]);
        iVar10 = -(uint)(iVar10 == param_2[6]);
        iVar11 = -(uint)(iVar11 == param_2[7]);
        iVar12 = -(uint)(param_2[4] == param_1[4]);
        iVar41 = -(uint)(param_2[5] == param_1[5]);
        iVar42 = -(uint)(param_2[6] == param_1[6]);
        iVar43 = -(uint)(param_2[7] == param_1[7]);
        auVar51[0] = (char)iVar12 - (char)iVar6;
        auVar51[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar51[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar51[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar51[4] = (char)iVar41 - (char)iVar9;
        auVar51[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar51[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar51[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar51[8] = (char)iVar42 - (char)iVar10;
        auVar51[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar51[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar51[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar51[0xc] = (char)iVar43 - (char)iVar11;
        auVar51[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar51[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar51[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar51[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753800;
        iVar6 = -(uint)(iVar6 == param_2[8]);
        iVar9 = -(uint)(iVar9 == param_2[9]);
        iVar10 = -(uint)(iVar10 == param_2[10]);
        iVar11 = -(uint)(iVar11 == param_2[0xb]);
        iVar12 = -(uint)(param_2[8] == param_1[8]);
        iVar41 = -(uint)(param_2[9] == param_1[9]);
        iVar42 = -(uint)(param_2[10] == param_1[10]);
        iVar43 = -(uint)(param_2[0xb] == param_1[0xb]);
        auVar52[0] = (char)iVar12 - (char)iVar6;
        auVar52[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar52[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar52[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar52[4] = (char)iVar41 - (char)iVar9;
        auVar52[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar52[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar52[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar52[8] = (char)iVar42 - (char)iVar10;
        auVar52[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar52[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar52[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar52[0xc] = (char)iVar43 - (char)iVar11;
        auVar52[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar52[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar52[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar52[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753860;
        param_2 = param_2 + 0xc;
        param_1 = param_1 + 0xc;
      }
      else if (uVar1 < 0x20) {
        iVar6 = -(uint)(*param_2 == 0);
        iVar9 = -(uint)(param_2[1] == 0);
        iVar10 = -(uint)(param_2[2] == 0);
        iVar11 = -(uint)(param_2[3] == 0);
        iVar12 = -(uint)(*param_2 == *param_1);
        iVar41 = -(uint)(param_2[1] == param_1[1]);
        iVar42 = -(uint)(param_2[2] == param_1[2]);
        iVar43 = -(uint)(param_2[3] == param_1[3]);
        auVar48[0] = (char)iVar12 - (char)iVar6;
        auVar48[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar48[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar48[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar48[4] = (char)iVar41 - (char)iVar9;
        auVar48[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar48[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar48[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar48[8] = (char)iVar42 - (char)iVar10;
        auVar48[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar48[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar48[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar48[0xc] = (char)iVar43 - (char)iVar11;
        auVar48[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar48[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar48[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar48[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_007537a0;
        iVar6 = -(uint)(iVar6 == param_2[4]);
        iVar9 = -(uint)(iVar9 == param_2[5]);
        iVar10 = -(uint)(iVar10 == param_2[6]);
        iVar11 = -(uint)(iVar11 == param_2[7]);
        iVar12 = -(uint)(param_2[4] == param_1[4]);
        iVar41 = -(uint)(param_2[5] == param_1[5]);
        iVar42 = -(uint)(param_2[6] == param_1[6]);
        iVar43 = -(uint)(param_2[7] == param_1[7]);
        auVar49[0] = (char)iVar12 - (char)iVar6;
        auVar49[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar49[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar49[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar49[4] = (char)iVar41 - (char)iVar9;
        auVar49[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar49[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar49[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar49[8] = (char)iVar42 - (char)iVar10;
        auVar49[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar49[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar49[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar49[0xc] = (char)iVar43 - (char)iVar11;
        auVar49[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar49[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar49[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar49[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753800;
        param_2 = param_2 + 8;
        param_1 = param_1 + 8;
      }
      else if (uVar1 < 0x30) {
        iVar6 = -(uint)(*param_2 == 0);
        iVar9 = -(uint)(param_2[1] == 0);
        iVar10 = -(uint)(param_2[2] == 0);
        iVar11 = -(uint)(param_2[3] == 0);
        iVar12 = -(uint)(*param_2 == *param_1);
        iVar41 = -(uint)(param_2[1] == param_1[1]);
        iVar42 = -(uint)(param_2[2] == param_1[2]);
        iVar43 = -(uint)(param_2[3] == param_1[3]);
        auVar47[0] = (char)iVar12 - (char)iVar6;
        auVar47[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar47[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar47[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar47[4] = (char)iVar41 - (char)iVar9;
        auVar47[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar47[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar47[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar47[8] = (char)iVar42 - (char)iVar10;
        auVar47[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar47[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar47[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar47[0xc] = (char)iVar43 - (char)iVar11;
        auVar47[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar47[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar47[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar47[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_007537a0;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
      }
      while( true ) {
        auVar7._0_4_ = -(uint)(iVar6 == *param_1);
        auVar7._4_4_ = -(uint)(iVar9 == param_1[1]);
        auVar7._8_4_ = -(uint)(iVar10 == param_1[2]);
        auVar7._12_4_ = -(uint)(iVar11 == param_1[3]);
        iVar6 = *param_1;
        if ((((((((((((((((auVar7 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar7 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar7 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar7 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar7 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar7 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar7 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar7 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar7 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar7 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar7 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar7 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar7._12_4_ >> 7 & 1) != 0) || (auVar7._12_4_ >> 0xf & 1) != 0) ||
            (auVar7._12_4_ >> 0x17 & 1) != 0) || (iVar11 == param_1[3]) != 0) break;
        iVar9 = *param_2;
        bVar5 = SBORROW4(iVar6,iVar9);
        bVar4 = iVar6 - iVar9 < 0;
        bVar3 = iVar6 == iVar9;
        if (!bVar3) goto LAB_00753900;
        iVar9 = param_1[1];
        iVar6 = param_2[1];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (!bVar3) goto LAB_00753900;
        iVar9 = param_1[2];
        iVar6 = param_2[2];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (!bVar3) goto LAB_00753900;
        iVar9 = param_1[3];
        iVar6 = param_2[3];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (!bVar3) goto LAB_00753900;
        iVar6 = -(uint)(auVar7._0_4_ == param_2[4]);
        iVar9 = -(uint)(auVar7._4_4_ == param_2[5]);
        iVar10 = -(uint)(auVar7._8_4_ == param_2[6]);
        iVar11 = -(uint)(auVar7._12_4_ == param_2[7]);
        iVar12 = -(uint)(param_2[4] == param_1[4]);
        iVar41 = -(uint)(param_2[5] == param_1[5]);
        iVar42 = -(uint)(param_2[6] == param_1[6]);
        iVar43 = -(uint)(param_2[7] == param_1[7]);
        auVar44[0] = (char)iVar12 - (char)iVar6;
        auVar44[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar44[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar44[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar44[4] = (char)iVar41 - (char)iVar9;
        auVar44[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar44[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar44[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar44[8] = (char)iVar42 - (char)iVar10;
        auVar44[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar44[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar44[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar44[0xc] = (char)iVar43 - (char)iVar11;
        auVar44[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar44[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar44[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar44[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753800;
        iVar6 = -(uint)(iVar6 == param_2[8]);
        iVar9 = -(uint)(iVar9 == param_2[9]);
        iVar10 = -(uint)(iVar10 == param_2[10]);
        iVar11 = -(uint)(iVar11 == param_2[0xb]);
        iVar12 = -(uint)(param_2[8] == param_1[8]);
        iVar41 = -(uint)(param_2[9] == param_1[9]);
        iVar42 = -(uint)(param_2[10] == param_1[10]);
        iVar43 = -(uint)(param_2[0xb] == param_1[0xb]);
        auVar45[0] = (char)iVar12 - (char)iVar6;
        auVar45[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar45[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar45[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar45[4] = (char)iVar41 - (char)iVar9;
        auVar45[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar45[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar45[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar45[8] = (char)iVar42 - (char)iVar10;
        auVar45[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar45[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar45[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar45[0xc] = (char)iVar43 - (char)iVar11;
        auVar45[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar45[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar45[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar45[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753860;
        iVar6 = -(uint)(iVar6 == param_2[0xc]);
        iVar9 = -(uint)(iVar9 == param_2[0xd]);
        iVar10 = -(uint)(iVar10 == param_2[0xe]);
        iVar11 = -(uint)(iVar11 == param_2[0xf]);
        iVar12 = -(uint)(param_2[0xc] == param_1[0xc]);
        iVar41 = -(uint)(param_2[0xd] == param_1[0xd]);
        iVar42 = -(uint)(param_2[0xe] == param_1[0xe]);
        iVar43 = -(uint)(param_2[0xf] == param_1[0xf]);
        auVar46[0] = (char)iVar12 - (char)iVar6;
        auVar46[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar46[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar46[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar46[4] = (char)iVar41 - (char)iVar9;
        auVar46[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar46[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar46[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar46[8] = (char)iVar42 - (char)iVar10;
        auVar46[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar46[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar46[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar46[0xc] = (char)iVar43 - (char)iVar11;
        auVar46[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar46[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar46[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar46[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_007538b0;
        param_2 = param_2 + 0x10;
        param_1 = param_1 + 0x10;
      }
LAB_00753750:
      iVar9 = *param_2;
      bVar5 = SBORROW4(iVar6,iVar9);
      bVar4 = iVar6 - iVar9 < 0;
      bVar3 = iVar6 == iVar9;
      if (bVar3) {
        if (iVar6 == 0) {
          return 0;
        }
        iVar6 = param_2[1];
        iVar9 = param_1[1];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (bVar3) {
          if (iVar6 == 0) {
            return 0;
          }
          iVar6 = param_2[2];
          iVar9 = param_1[2];
          bVar5 = SBORROW4(iVar9,iVar6);
          bVar4 = iVar9 - iVar6 < 0;
          bVar3 = iVar9 == iVar6;
          if (bVar3) {
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = param_2[3];
            iVar9 = param_1[3];
            bVar5 = SBORROW4(iVar9,iVar6);
            bVar4 = iVar9 - iVar6 < 0;
            bVar3 = iVar9 == iVar6;
            if (bVar3) {
              return 0;
            }
          }
        }
      }
      goto LAB_00753900;
    }
    while( true ) {
      iVar6 = -(uint)(iVar6 == *param_1);
      iVar9 = -(uint)(iVar9 == param_1[1]);
      iVar10 = -(uint)(iVar10 == param_1[2]);
      iVar11 = -(uint)(iVar11 == param_1[3]);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar22[0] = (char)iVar12 - (char)iVar6;
      auVar22[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar22[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar22[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar22[4] = (char)iVar41 - (char)iVar9;
      auVar22[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar22[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar22[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar22[8] = (char)iVar42 - (char)iVar10;
      auVar22[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar22[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar22[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar22[0xc] = (char)iVar43 - (char)iVar11;
      auVar22[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar22[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar22[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar22[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 != 0) break;
      iVar6 = -(uint)(iVar6 == param_1[4]);
      iVar9 = -(uint)(iVar9 == param_1[5]);
      iVar10 = -(uint)(iVar10 == param_1[6]);
      iVar11 = -(uint)(iVar11 == param_1[7]);
      iVar12 = -(uint)(param_1[4] == param_2[4]);
      iVar41 = -(uint)(param_1[5] == param_2[5]);
      iVar42 = -(uint)(param_1[6] == param_2[6]);
      iVar43 = -(uint)(param_1[7] == param_2[7]);
      auVar53[0] = (char)iVar12 - (char)iVar6;
      auVar53[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar53[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar53[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar53[4] = (char)iVar41 - (char)iVar9;
      auVar53[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar53[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar53[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar53[8] = (char)iVar42 - (char)iVar10;
      auVar53[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar53[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar53[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar53[0xc] = (char)iVar43 - (char)iVar11;
      auVar53[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar53[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar53[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar53[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 != 0) goto LAB_00753800;
      iVar6 = -(uint)(iVar6 == param_1[8]);
      iVar9 = -(uint)(iVar9 == param_1[9]);
      iVar10 = -(uint)(iVar10 == param_1[10]);
      iVar11 = -(uint)(iVar11 == param_1[0xb]);
      iVar12 = -(uint)(param_1[8] == param_2[8]);
      iVar41 = -(uint)(param_1[9] == param_2[9]);
      iVar42 = -(uint)(param_1[10] == param_2[10]);
      iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
      auVar56[0] = (char)iVar12 - (char)iVar6;
      auVar56[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar56[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar56[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar56[4] = (char)iVar41 - (char)iVar9;
      auVar56[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar56[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar56[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar56[8] = (char)iVar42 - (char)iVar10;
      auVar56[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar56[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar56[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar56[0xc] = (char)iVar43 - (char)iVar11;
      auVar56[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar56[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar56[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar56[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 != 0) goto LAB_00753860;
      iVar6 = -(uint)(iVar6 == param_1[0xc]);
      iVar9 = -(uint)(iVar9 == param_1[0xd]);
      iVar10 = -(uint)(iVar10 == param_1[0xe]);
      iVar11 = -(uint)(iVar11 == param_1[0xf]);
      iVar12 = -(uint)(param_1[0xc] == param_2[0xc]);
      iVar41 = -(uint)(param_1[0xd] == param_2[0xd]);
      iVar42 = -(uint)(param_1[0xe] == param_2[0xe]);
      iVar43 = -(uint)(param_1[0xf] == param_2[0xf]);
      auVar23[0] = (char)iVar12 - (char)iVar6;
      auVar23[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar23[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar23[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar23[4] = (char)iVar41 - (char)iVar9;
      auVar23[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar23[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar23[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar23[8] = (char)iVar42 - (char)iVar10;
      auVar23[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar23[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar23[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar23[0xc] = (char)iVar43 - (char)iVar11;
      auVar23[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar23[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar23[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar23[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 != 0) goto LAB_007538b0;
      param_2 = param_2 + 0x10;
      param_1 = param_1 + 0x10;
    }
  }
  else if (uVar2 < 0x10) {
    if (((ulong)param_2 & 0xf) == 0) {
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar30[0] = (char)iVar12 - (char)iVar6;
      auVar30[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar30[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar30[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar30[4] = (char)iVar41 - (char)iVar9;
      auVar30[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar30[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar30[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar30[8] = (char)iVar42 - (char)iVar10;
      auVar30[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar30[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar30[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar30[0xc] = (char)iVar43 - (char)iVar11;
      auVar30[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar30[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar30[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar30[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        iVar6 = -(uint)(iVar6 == param_1[4]);
        iVar9 = -(uint)(iVar9 == param_1[5]);
        iVar10 = -(uint)(iVar10 == param_1[6]);
        iVar11 = -(uint)(iVar11 == param_1[7]);
        iVar12 = -(uint)(param_1[4] == param_2[4]);
        iVar41 = -(uint)(param_1[5] == param_2[5]);
        iVar42 = -(uint)(param_1[6] == param_2[6]);
        iVar43 = -(uint)(param_1[7] == param_2[7]);
        auVar31[0] = (char)iVar12 - (char)iVar6;
        auVar31[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar31[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar31[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar31[4] = (char)iVar41 - (char)iVar9;
        auVar31[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar31[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar31[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar31[8] = (char)iVar42 - (char)iVar10;
        auVar31[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar31[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar31[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar31[0xc] = (char)iVar43 - (char)iVar11;
        auVar31[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar31[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar31[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar31[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 == 0) {
          iVar6 = -(uint)(iVar6 == param_1[8]);
          iVar9 = -(uint)(iVar9 == param_1[9]);
          iVar10 = -(uint)(iVar10 == param_1[10]);
          iVar11 = -(uint)(iVar11 == param_1[0xb]);
          iVar12 = -(uint)(param_1[8] == param_2[8]);
          iVar41 = -(uint)(param_1[9] == param_2[9]);
          iVar42 = -(uint)(param_1[10] == param_2[10]);
          iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
          auVar32[0] = (char)iVar12 - (char)iVar6;
          auVar32[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
          auVar32[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
          auVar32[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
          auVar32[4] = (char)iVar41 - (char)iVar9;
          auVar32[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
          auVar32[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
          auVar32[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
          auVar32[8] = (char)iVar42 - (char)iVar10;
          auVar32[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
          auVar32[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
          auVar32[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
          auVar32[0xc] = (char)iVar43 - (char)iVar11;
          auVar32[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
          auVar32[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
          auVar32[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
          uVar1 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar32[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar1 == 0) {
            param_2 = param_2 + 0xc;
            param_1 = param_1 + 0xc;
            goto LAB_007533a0;
          }
LAB_00753860:
          if ((char)uVar1 == '\0') {
            if ((uVar1 & 0xf00) == 0) {
              iVar9 = param_1[0xb];
              iVar6 = param_2[0xb];
              bVar5 = SBORROW4(iVar9,iVar6);
              bVar4 = iVar9 - iVar6 < 0;
              bVar3 = iVar9 == iVar6;
              if (bVar3) {
                return iVar9;
              }
            }
            else {
              iVar9 = param_1[10];
              iVar6 = param_2[10];
              bVar5 = SBORROW4(iVar9,iVar6);
              bVar4 = iVar9 - iVar6 < 0;
              bVar3 = iVar9 == iVar6;
              if (bVar3) {
                return iVar9;
              }
            }
          }
          else if ((uVar1 & 0xf) == 0) {
            iVar9 = param_1[9];
            iVar6 = param_2[9];
            bVar5 = SBORROW4(iVar9,iVar6);
            bVar4 = iVar9 - iVar6 < 0;
            bVar3 = iVar9 == iVar6;
            if (bVar3) {
              return iVar9;
            }
          }
          else {
            iVar9 = param_1[8];
            iVar6 = param_2[8];
            bVar5 = SBORROW4(iVar9,iVar6);
            bVar4 = iVar9 - iVar6 < 0;
            bVar3 = iVar9 == iVar6;
            if (bVar3) {
              return iVar9;
            }
          }
          goto LAB_00753900;
        }
LAB_00753800:
        if ((char)uVar1 == '\0') {
          if ((uVar1 & 0xf00) == 0) {
            iVar9 = param_1[7];
            iVar6 = param_2[7];
            bVar5 = SBORROW4(iVar9,iVar6);
            bVar4 = iVar9 - iVar6 < 0;
            bVar3 = iVar9 == iVar6;
            if (bVar3) {
              return iVar9;
            }
          }
          else {
            iVar9 = param_1[6];
            iVar6 = param_2[6];
            bVar5 = SBORROW4(iVar9,iVar6);
            bVar4 = iVar9 - iVar6 < 0;
            bVar3 = iVar9 == iVar6;
            if (bVar3) {
              return iVar9;
            }
          }
        }
        else if ((uVar1 & 0xf) == 0) {
          iVar9 = param_1[5];
          iVar6 = param_2[5];
          bVar5 = SBORROW4(iVar9,iVar6);
          bVar4 = iVar9 - iVar6 < 0;
          bVar3 = iVar9 == iVar6;
          if (bVar3) {
            return iVar9;
          }
        }
        else {
          iVar9 = param_1[4];
          iVar6 = param_2[4];
          bVar5 = SBORROW4(iVar9,iVar6);
          bVar4 = iVar9 - iVar6 < 0;
          bVar3 = iVar9 == iVar6;
          if (bVar3) {
            return iVar9;
          }
        }
        goto LAB_00753900;
      }
    }
    else if (uVar1 < 0x10) {
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar35[0] = (char)iVar12 - (char)iVar6;
      auVar35[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar35[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar35[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar35[4] = (char)iVar41 - (char)iVar9;
      auVar35[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar35[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar35[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar35[8] = (char)iVar42 - (char)iVar10;
      auVar35[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar35[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar35[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar35[0xc] = (char)iVar43 - (char)iVar11;
      auVar35[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar35[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar35[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar35[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        iVar6 = -(uint)(iVar6 == param_1[4]);
        iVar9 = -(uint)(iVar9 == param_1[5]);
        iVar10 = -(uint)(iVar10 == param_1[6]);
        iVar11 = -(uint)(iVar11 == param_1[7]);
        iVar12 = -(uint)(param_1[4] == param_2[4]);
        iVar41 = -(uint)(param_1[5] == param_2[5]);
        iVar42 = -(uint)(param_1[6] == param_2[6]);
        iVar43 = -(uint)(param_1[7] == param_2[7]);
        auVar55[0] = (char)iVar12 - (char)iVar6;
        auVar55[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar55[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar55[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar55[4] = (char)iVar41 - (char)iVar9;
        auVar55[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar55[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar55[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar55[8] = (char)iVar42 - (char)iVar10;
        auVar55[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar55[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar55[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar55[0xc] = (char)iVar43 - (char)iVar11;
        auVar55[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar55[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar55[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar55[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 == 0) {
          iVar6 = -(uint)(iVar6 == param_1[8]);
          iVar9 = -(uint)(iVar9 == param_1[9]);
          iVar10 = -(uint)(iVar10 == param_1[10]);
          iVar11 = -(uint)(iVar11 == param_1[0xb]);
          iVar12 = -(uint)(param_1[8] == param_2[8]);
          iVar41 = -(uint)(param_1[9] == param_2[9]);
          iVar42 = -(uint)(param_1[10] == param_2[10]);
          iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
          auVar36[0] = (char)iVar12 - (char)iVar6;
          auVar36[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
          auVar36[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
          auVar36[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
          auVar36[4] = (char)iVar41 - (char)iVar9;
          auVar36[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
          auVar36[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
          auVar36[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
          auVar36[8] = (char)iVar42 - (char)iVar10;
          auVar36[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
          auVar36[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
          auVar36[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
          auVar36[0xc] = (char)iVar43 - (char)iVar11;
          auVar36[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
          auVar36[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
          auVar36[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
          uVar1 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar36[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar1 == 0) {
            param_2 = param_2 + 0xc;
            param_1 = param_1 + 0xc;
            goto LAB_00752cb0;
          }
          goto LAB_00753860;
        }
        goto LAB_00753800;
      }
    }
    else {
      if (uVar1 < 0x20) goto LAB_00753680;
      if (0x2f < uVar1) goto LAB_00752db0;
LAB_007536e0:
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar39[0] = (char)iVar12 - (char)iVar6;
      auVar39[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar39[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar39[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar39[4] = (char)iVar41 - (char)iVar9;
      auVar39[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar39[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar39[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar39[8] = (char)iVar42 - (char)iVar10;
      auVar39[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar39[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar39[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar39[0xc] = (char)iVar43 - (char)iVar11;
      auVar39[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar39[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar39[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar39[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
LAB_00753100:
        while( true ) {
          iVar12 = *param_2;
          iVar41 = *param_1;
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[1];
          iVar41 = param_1[1];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[2];
          iVar41 = param_1[2];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[3];
          iVar41 = param_1[3];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar6 = -(uint)(iVar6 == param_1[4]);
          iVar9 = -(uint)(iVar9 == param_1[5]);
          iVar10 = -(uint)(iVar10 == param_1[6]);
          iVar11 = -(uint)(iVar11 == param_1[7]);
          iVar12 = -(uint)(param_1[4] == param_2[4]);
          iVar41 = -(uint)(param_1[5] == param_2[5]);
          iVar42 = -(uint)(param_1[6] == param_2[6]);
          iVar43 = -(uint)(param_1[7] == param_2[7]);
          auVar20[0] = (char)iVar12 - (char)iVar6;
          auVar20[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
          auVar20[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
          auVar20[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
          auVar20[4] = (char)iVar41 - (char)iVar9;
          auVar20[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
          auVar20[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
          auVar20[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
          auVar20[8] = (char)iVar42 - (char)iVar10;
          auVar20[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
          auVar20[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
          auVar20[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
          auVar20[0xc] = (char)iVar43 - (char)iVar11;
          auVar20[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
          auVar20[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
          auVar20[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
          uVar1 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar20[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar1 != 0) goto LAB_00753800;
          iVar12 = param_2[8];
          iVar41 = param_1[8];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[9];
          iVar41 = param_1[9];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[10];
          iVar41 = param_1[10];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[0xb];
          iVar41 = param_1[0xb];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar6 = -(uint)(iVar6 == param_1[0xc]);
          iVar9 = -(uint)(iVar9 == param_1[0xd]);
          iVar10 = -(uint)(iVar10 == param_1[0xe]);
          iVar11 = -(uint)(iVar11 == param_1[0xf]);
          iVar12 = -(uint)(param_1[0xc] == param_2[0xc]);
          iVar41 = -(uint)(param_1[0xd] == param_2[0xd]);
          iVar42 = -(uint)(param_1[0xe] == param_2[0xe]);
          iVar43 = -(uint)(param_1[0xf] == param_2[0xf]);
          auVar21[0] = (char)iVar12 - (char)iVar6;
          auVar21[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
          auVar21[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
          auVar21[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
          auVar21[4] = (char)iVar41 - (char)iVar9;
          auVar21[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
          auVar21[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
          auVar21[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
          auVar21[8] = (char)iVar42 - (char)iVar10;
          auVar21[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
          auVar21[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
          auVar21[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
          auVar21[0xc] = (char)iVar43 - (char)iVar11;
          auVar21[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
          auVar21[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
          auVar21[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
          uVar1 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar21[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar1 != 0) goto LAB_007538b0;
          param_2 = param_2 + 0x10;
          param_1 = param_1 + 0x10;
        }
        goto LAB_00753900;
      }
    }
  }
  else if (uVar2 < 0x20) {
    if (((ulong)param_2 & 0xf) == 0) {
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar28[0] = (char)iVar12 - (char)iVar6;
      auVar28[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar28[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar28[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar28[4] = (char)iVar41 - (char)iVar9;
      auVar28[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar28[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar28[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar28[8] = (char)iVar42 - (char)iVar10;
      auVar28[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar28[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar28[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar28[0xc] = (char)iVar43 - (char)iVar11;
      auVar28[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar28[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar28[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar28[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        iVar6 = -(uint)(iVar6 == param_1[4]);
        iVar9 = -(uint)(iVar9 == param_1[5]);
        iVar10 = -(uint)(iVar10 == param_1[6]);
        iVar11 = -(uint)(iVar11 == param_1[7]);
        iVar12 = -(uint)(param_1[4] == param_2[4]);
        iVar41 = -(uint)(param_1[5] == param_2[5]);
        iVar42 = -(uint)(param_1[6] == param_2[6]);
        iVar43 = -(uint)(param_1[7] == param_2[7]);
        auVar29[0] = (char)iVar12 - (char)iVar6;
        auVar29[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar29[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar29[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar29[4] = (char)iVar41 - (char)iVar9;
        auVar29[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar29[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar29[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar29[8] = (char)iVar42 - (char)iVar10;
        auVar29[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar29[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar29[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar29[0xc] = (char)iVar43 - (char)iVar11;
        auVar29[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar29[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar29[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar29[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 == 0) {
          param_2 = param_2 + 8;
          param_1 = param_1 + 8;
          goto LAB_007533a0;
        }
        goto LAB_00753800;
      }
    }
    else if (uVar1 < 0x10) {
LAB_00753680:
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar37[0] = (char)iVar12 - (char)iVar6;
      auVar37[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar37[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar37[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar37[4] = (char)iVar41 - (char)iVar9;
      auVar37[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar37[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar37[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar37[8] = (char)iVar42 - (char)iVar10;
      auVar37[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar37[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar37[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar37[0xc] = (char)iVar43 - (char)iVar11;
      auVar37[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar37[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar37[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar37[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        iVar6 = -(uint)(iVar6 == param_1[4]);
        iVar9 = -(uint)(iVar9 == param_1[5]);
        iVar10 = -(uint)(iVar10 == param_1[6]);
        iVar11 = -(uint)(iVar11 == param_1[7]);
        iVar12 = -(uint)(param_1[4] == param_2[4]);
        iVar41 = -(uint)(param_1[5] == param_2[5]);
        iVar42 = -(uint)(param_1[6] == param_2[6]);
        iVar43 = -(uint)(param_1[7] == param_2[7]);
        auVar38[0] = (char)iVar12 - (char)iVar6;
        auVar38[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar38[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar38[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar38[4] = (char)iVar41 - (char)iVar9;
        auVar38[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar38[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar38[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar38[8] = (char)iVar42 - (char)iVar10;
        auVar38[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar38[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar38[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar38[0xc] = (char)iVar43 - (char)iVar11;
        auVar38[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar38[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar38[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar38[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 == 0) {
          param_2 = param_2 + 8;
          param_1 = param_1 + 8;
          goto LAB_00752fd0;
        }
        goto LAB_00753800;
      }
    }
    else if (uVar1 < 0x20) {
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar34[0] = (char)iVar12 - (char)iVar6;
      auVar34[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar34[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar34[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar34[4] = (char)iVar41 - (char)iVar9;
      auVar34[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar34[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar34[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar34[8] = (char)iVar42 - (char)iVar10;
      auVar34[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar34[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar34[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar34[0xc] = (char)iVar43 - (char)iVar11;
      auVar34[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar34[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar34[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar34[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        iVar6 = -(uint)(iVar6 == param_1[4]);
        iVar9 = -(uint)(iVar9 == param_1[5]);
        iVar10 = -(uint)(iVar10 == param_1[6]);
        iVar11 = -(uint)(iVar11 == param_1[7]);
        iVar12 = -(uint)(param_1[4] == param_2[4]);
        iVar41 = -(uint)(param_1[5] == param_2[5]);
        iVar42 = -(uint)(param_1[6] == param_2[6]);
        iVar43 = -(uint)(param_1[7] == param_2[7]);
        auVar54[0] = (char)iVar12 - (char)iVar6;
        auVar54[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar54[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar54[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar54[4] = (char)iVar41 - (char)iVar9;
        auVar54[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar54[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar54[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar54[8] = (char)iVar42 - (char)iVar10;
        auVar54[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar54[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar54[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar54[0xc] = (char)iVar43 - (char)iVar11;
        auVar54[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar54[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar54[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar54[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 == 0) {
          param_2 = param_2 + 8;
          param_1 = param_1 + 8;
          goto LAB_00752cb0;
        }
        goto LAB_00753800;
      }
    }
    else {
      if (0x2f < uVar1) goto LAB_00753100;
LAB_00753720:
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar40[0] = (char)iVar12 - (char)iVar6;
      auVar40[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar40[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar40[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar40[4] = (char)iVar41 - (char)iVar9;
      auVar40[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar40[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar40[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar40[8] = (char)iVar42 - (char)iVar10;
      auVar40[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar40[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar40[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar40[0xc] = (char)iVar43 - (char)iVar11;
      auVar40[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar40[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar40[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar40[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        goto LAB_00752fd0;
      }
    }
  }
  else {
    if (0x2f < uVar2) {
      if (((ulong)param_2 & 0xf) != 0) {
        if (uVar1 < 0x10) {
LAB_00752db0:
          while( true ) {
            iVar12 = *param_2;
            iVar41 = *param_1;
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[1];
            iVar41 = param_1[1];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[2];
            iVar41 = param_1[2];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[3];
            iVar41 = param_1[3];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar6 = -(uint)(iVar6 == param_1[4]);
            iVar9 = -(uint)(iVar9 == param_1[5]);
            iVar10 = -(uint)(iVar10 == param_1[6]);
            iVar11 = -(uint)(iVar11 == param_1[7]);
            iVar12 = -(uint)(param_1[4] == param_2[4]);
            iVar41 = -(uint)(param_1[5] == param_2[5]);
            iVar42 = -(uint)(param_1[6] == param_2[6]);
            iVar43 = -(uint)(param_1[7] == param_2[7]);
            auVar16[0] = (char)iVar12 - (char)iVar6;
            auVar16[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
            auVar16[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
            auVar16[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
            auVar16[4] = (char)iVar41 - (char)iVar9;
            auVar16[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
            auVar16[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
            auVar16[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
            auVar16[8] = (char)iVar42 - (char)iVar10;
            auVar16[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
            auVar16[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
            auVar16[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
            auVar16[0xc] = (char)iVar43 - (char)iVar11;
            auVar16[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
            auVar16[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
            auVar16[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
            uVar1 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar16[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar1 != 0) goto LAB_00753800;
            iVar6 = -(uint)(iVar6 == param_1[8]);
            iVar9 = -(uint)(iVar9 == param_1[9]);
            iVar10 = -(uint)(iVar10 == param_1[10]);
            iVar11 = -(uint)(iVar11 == param_1[0xb]);
            iVar12 = -(uint)(param_1[8] == param_2[8]);
            iVar41 = -(uint)(param_1[9] == param_2[9]);
            iVar42 = -(uint)(param_1[10] == param_2[10]);
            iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
            auVar17[0] = (char)iVar12 - (char)iVar6;
            auVar17[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
            auVar17[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
            auVar17[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
            auVar17[4] = (char)iVar41 - (char)iVar9;
            auVar17[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
            auVar17[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
            auVar17[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
            auVar17[8] = (char)iVar42 - (char)iVar10;
            auVar17[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
            auVar17[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
            auVar17[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
            auVar17[0xc] = (char)iVar43 - (char)iVar11;
            auVar17[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
            auVar17[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
            auVar17[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
            uVar1 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar17[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar1 != 0) goto LAB_00753860;
            iVar12 = param_2[0xc];
            iVar41 = param_1[0xc];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[0xd];
            iVar41 = param_1[0xd];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[0xe];
            iVar41 = param_1[0xe];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[0xf];
            iVar41 = param_1[0xf];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            param_2 = param_2 + 0x10;
            param_1 = param_1 + 0x10;
          }
          goto LAB_00753900;
        }
        if (uVar1 < 0x20) goto LAB_00753100;
        if (0x2f < uVar1) {
LAB_00752cb0:
          while( true ) {
            iVar12 = *param_2;
            iVar41 = *param_1;
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[1];
            iVar41 = param_1[1];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[2];
            iVar41 = param_1[2];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = param_2[3];
            iVar41 = param_1[3];
            bVar5 = SBORROW4(iVar41,iVar12);
            bVar4 = iVar41 - iVar12 < 0;
            bVar3 = iVar41 == iVar12;
            if (!bVar3) break;
            if (iVar12 == 0) {
              return 0;
            }
            iVar6 = -(uint)(iVar6 == param_1[4]);
            iVar9 = -(uint)(iVar9 == param_1[5]);
            iVar10 = -(uint)(iVar10 == param_1[6]);
            iVar11 = -(uint)(iVar11 == param_1[7]);
            iVar12 = -(uint)(param_1[4] == param_2[4]);
            iVar41 = -(uint)(param_1[5] == param_2[5]);
            iVar42 = -(uint)(param_1[6] == param_2[6]);
            iVar43 = -(uint)(param_1[7] == param_2[7]);
            auVar13[0] = (char)iVar12 - (char)iVar6;
            auVar13[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
            auVar13[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
            auVar13[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
            auVar13[4] = (char)iVar41 - (char)iVar9;
            auVar13[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
            auVar13[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
            auVar13[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
            auVar13[8] = (char)iVar42 - (char)iVar10;
            auVar13[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
            auVar13[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
            auVar13[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
            auVar13[0xc] = (char)iVar43 - (char)iVar11;
            auVar13[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
            auVar13[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
            auVar13[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
            uVar1 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar13[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar1 != 0) goto LAB_00753800;
            iVar6 = -(uint)(iVar6 == param_1[8]);
            iVar9 = -(uint)(iVar9 == param_1[9]);
            iVar10 = -(uint)(iVar10 == param_1[10]);
            iVar11 = -(uint)(iVar11 == param_1[0xb]);
            iVar12 = -(uint)(param_1[8] == param_2[8]);
            iVar41 = -(uint)(param_1[9] == param_2[9]);
            iVar42 = -(uint)(param_1[10] == param_2[10]);
            iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
            auVar14[0] = (char)iVar12 - (char)iVar6;
            auVar14[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
            auVar14[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
            auVar14[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
            auVar14[4] = (char)iVar41 - (char)iVar9;
            auVar14[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
            auVar14[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
            auVar14[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
            auVar14[8] = (char)iVar42 - (char)iVar10;
            auVar14[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
            auVar14[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
            auVar14[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
            auVar14[0xc] = (char)iVar43 - (char)iVar11;
            auVar14[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
            auVar14[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
            auVar14[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
            uVar1 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar14[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar1 != 0) goto LAB_00753860;
            iVar6 = -(uint)(iVar6 == param_1[0xc]);
            iVar9 = -(uint)(iVar9 == param_1[0xd]);
            iVar10 = -(uint)(iVar10 == param_1[0xe]);
            iVar11 = -(uint)(iVar11 == param_1[0xf]);
            iVar12 = -(uint)(param_1[0xc] == param_2[0xc]);
            iVar41 = -(uint)(param_1[0xd] == param_2[0xd]);
            iVar42 = -(uint)(param_1[0xe] == param_2[0xe]);
            iVar43 = -(uint)(param_1[0xf] == param_2[0xf]);
            auVar15[0] = (char)iVar12 - (char)iVar6;
            auVar15[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
            auVar15[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
            auVar15[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
            auVar15[4] = (char)iVar41 - (char)iVar9;
            auVar15[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
            auVar15[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
            auVar15[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
            auVar15[8] = (char)iVar42 - (char)iVar10;
            auVar15[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
            auVar15[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
            auVar15[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
            auVar15[0xc] = (char)iVar43 - (char)iVar11;
            auVar15[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
            auVar15[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
            auVar15[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
            uVar1 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar15[0xf] >> 7) << 0xf) - 0xffff;
            if (uVar1 != 0) goto LAB_007538b0;
            param_2 = param_2 + 0x10;
            param_1 = param_1 + 0x10;
          }
          goto LAB_00753900;
        }
LAB_00752fd0:
        while( true ) {
          iVar12 = *param_2;
          iVar41 = *param_1;
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[1];
          iVar41 = param_1[1];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[2];
          iVar41 = param_1[2];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[3];
          iVar41 = param_1[3];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[4];
          iVar41 = param_1[4];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[5];
          iVar41 = param_1[5];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[6];
          iVar41 = param_1[6];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar12 = param_2[7];
          iVar41 = param_1[7];
          bVar5 = SBORROW4(iVar41,iVar12);
          bVar4 = iVar41 - iVar12 < 0;
          bVar3 = iVar41 == iVar12;
          if (!bVar3) break;
          if (iVar12 == 0) {
            return 0;
          }
          iVar6 = -(uint)(iVar6 == param_1[8]);
          iVar9 = -(uint)(iVar9 == param_1[9]);
          iVar10 = -(uint)(iVar10 == param_1[10]);
          iVar11 = -(uint)(iVar11 == param_1[0xb]);
          iVar12 = -(uint)(param_1[8] == param_2[8]);
          iVar41 = -(uint)(param_1[9] == param_2[9]);
          iVar42 = -(uint)(param_1[10] == param_2[10]);
          iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
          auVar18[0] = (char)iVar12 - (char)iVar6;
          auVar18[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
          auVar18[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
          auVar18[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
          auVar18[4] = (char)iVar41 - (char)iVar9;
          auVar18[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
          auVar18[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
          auVar18[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
          auVar18[8] = (char)iVar42 - (char)iVar10;
          auVar18[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
          auVar18[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
          auVar18[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
          auVar18[0xc] = (char)iVar43 - (char)iVar11;
          auVar18[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
          auVar18[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
          auVar18[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
          uVar1 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar18[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar1 != 0) goto LAB_00753860;
          iVar6 = -(uint)(iVar6 == param_1[0xc]);
          iVar9 = -(uint)(iVar9 == param_1[0xd]);
          iVar10 = -(uint)(iVar10 == param_1[0xe]);
          iVar11 = -(uint)(iVar11 == param_1[0xf]);
          iVar12 = -(uint)(param_1[0xc] == param_2[0xc]);
          iVar41 = -(uint)(param_1[0xd] == param_2[0xd]);
          iVar42 = -(uint)(param_1[0xe] == param_2[0xe]);
          iVar43 = -(uint)(param_1[0xf] == param_2[0xf]);
          auVar19[0] = (char)iVar12 - (char)iVar6;
          auVar19[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
          auVar19[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
          auVar19[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
          auVar19[4] = (char)iVar41 - (char)iVar9;
          auVar19[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
          auVar19[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
          auVar19[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
          auVar19[8] = (char)iVar42 - (char)iVar10;
          auVar19[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
          auVar19[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
          auVar19[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
          auVar19[0xc] = (char)iVar43 - (char)iVar11;
          auVar19[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
          auVar19[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
          auVar19[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
          uVar1 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar19[0xf] >> 7) << 0xf) - 0xffff;
          if (uVar1 != 0) goto LAB_007538b0;
          param_2 = param_2 + 0x10;
          param_1 = param_1 + 0x10;
        }
        goto LAB_00753900;
      }
LAB_007533a0:
      while( true ) {
        auVar8._0_4_ = -(uint)(iVar6 == *param_2);
        auVar8._4_4_ = -(uint)(iVar9 == param_2[1]);
        auVar8._8_4_ = -(uint)(iVar10 == param_2[2]);
        auVar8._12_4_ = -(uint)(iVar11 == param_2[3]);
        iVar6 = *param_1;
        if ((((((((((((((((auVar8 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar8 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar8 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar8 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar8 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar8 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar8 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar8 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar8 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar8 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar8 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar8 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar8._12_4_ >> 7 & 1) != 0) || (auVar8._12_4_ >> 0xf & 1) != 0) ||
            (auVar8._12_4_ >> 0x17 & 1) != 0) || (iVar11 == param_2[3]) != 0) break;
        iVar9 = *param_2;
        bVar5 = SBORROW4(iVar6,iVar9);
        bVar4 = iVar6 - iVar9 < 0;
        bVar3 = iVar6 == iVar9;
        if (!bVar3) goto LAB_00753900;
        iVar9 = param_1[1];
        iVar6 = param_2[1];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (!bVar3) goto LAB_00753900;
        iVar9 = param_1[2];
        iVar6 = param_2[2];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (!bVar3) goto LAB_00753900;
        iVar9 = param_1[3];
        iVar6 = param_2[3];
        bVar5 = SBORROW4(iVar9,iVar6);
        bVar4 = iVar9 - iVar6 < 0;
        bVar3 = iVar9 == iVar6;
        if (!bVar3) goto LAB_00753900;
        iVar6 = -(uint)(auVar8._0_4_ == param_1[4]);
        iVar9 = -(uint)(auVar8._4_4_ == param_1[5]);
        iVar10 = -(uint)(auVar8._8_4_ == param_1[6]);
        iVar11 = -(uint)(auVar8._12_4_ == param_1[7]);
        iVar12 = -(uint)(param_1[4] == param_2[4]);
        iVar41 = -(uint)(param_1[5] == param_2[5]);
        iVar42 = -(uint)(param_1[6] == param_2[6]);
        iVar43 = -(uint)(param_1[7] == param_2[7]);
        auVar24[0] = (char)iVar12 - (char)iVar6;
        auVar24[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar24[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar24[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar24[4] = (char)iVar41 - (char)iVar9;
        auVar24[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar24[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar24[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar24[8] = (char)iVar42 - (char)iVar10;
        auVar24[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar24[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar24[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar24[0xc] = (char)iVar43 - (char)iVar11;
        auVar24[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar24[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar24[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar24[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753800;
        iVar6 = -(uint)(iVar6 == param_1[8]);
        iVar9 = -(uint)(iVar9 == param_1[9]);
        iVar10 = -(uint)(iVar10 == param_1[10]);
        iVar11 = -(uint)(iVar11 == param_1[0xb]);
        iVar12 = -(uint)(param_1[8] == param_2[8]);
        iVar41 = -(uint)(param_1[9] == param_2[9]);
        iVar42 = -(uint)(param_1[10] == param_2[10]);
        iVar43 = -(uint)(param_1[0xb] == param_2[0xb]);
        auVar25[0] = (char)iVar12 - (char)iVar6;
        auVar25[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar25[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar25[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar25[4] = (char)iVar41 - (char)iVar9;
        auVar25[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar25[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar25[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar25[8] = (char)iVar42 - (char)iVar10;
        auVar25[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar25[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar25[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar25[0xc] = (char)iVar43 - (char)iVar11;
        auVar25[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar25[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar25[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar25[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_00753860;
        iVar6 = -(uint)(iVar6 == param_1[0xc]);
        iVar9 = -(uint)(iVar9 == param_1[0xd]);
        iVar10 = -(uint)(iVar10 == param_1[0xe]);
        iVar11 = -(uint)(iVar11 == param_1[0xf]);
        iVar12 = -(uint)(param_1[0xc] == param_2[0xc]);
        iVar41 = -(uint)(param_1[0xd] == param_2[0xd]);
        iVar42 = -(uint)(param_1[0xe] == param_2[0xe]);
        iVar43 = -(uint)(param_1[0xf] == param_2[0xf]);
        auVar26[0] = (char)iVar12 - (char)iVar6;
        auVar26[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
        auVar26[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
        auVar26[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
        auVar26[4] = (char)iVar41 - (char)iVar9;
        auVar26[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
        auVar26[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
        auVar26[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
        auVar26[8] = (char)iVar42 - (char)iVar10;
        auVar26[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
        auVar26[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
        auVar26[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
        auVar26[0xc] = (char)iVar43 - (char)iVar11;
        auVar26[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
        auVar26[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
        auVar26[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
        uVar1 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar26[0xf] >> 7) << 0xf) - 0xffff;
        if (uVar1 != 0) goto LAB_007538b0;
        param_2 = param_2 + 0x10;
        param_1 = param_1 + 0x10;
      }
      goto LAB_00753750;
    }
    if (((ulong)param_2 & 0xf) == 0) {
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar27[0] = (char)iVar12 - (char)iVar6;
      auVar27[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar27[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar27[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar27[4] = (char)iVar41 - (char)iVar9;
      auVar27[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar27[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar27[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar27[8] = (char)iVar42 - (char)iVar10;
      auVar27[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar27[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar27[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar27[0xc] = (char)iVar43 - (char)iVar11;
      auVar27[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar27[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar27[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar27[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        goto LAB_007533a0;
      }
    }
    else {
      if (uVar1 < 0x10) goto LAB_007536e0;
      if (uVar1 < 0x20) goto LAB_00753720;
      if (0x2f < uVar1) goto LAB_00752fd0;
      iVar6 = -(uint)(*param_1 == 0);
      iVar9 = -(uint)(param_1[1] == 0);
      iVar10 = -(uint)(param_1[2] == 0);
      iVar11 = -(uint)(param_1[3] == 0);
      iVar12 = -(uint)(*param_1 == *param_2);
      iVar41 = -(uint)(param_1[1] == param_2[1]);
      iVar42 = -(uint)(param_1[2] == param_2[2]);
      iVar43 = -(uint)(param_1[3] == param_2[3]);
      auVar33[0] = (char)iVar12 - (char)iVar6;
      auVar33[1] = (char)((uint)iVar12 >> 8) - (char)((uint)iVar6 >> 8);
      auVar33[2] = (char)((uint)iVar12 >> 0x10) - (char)((uint)iVar6 >> 0x10);
      auVar33[3] = (char)((uint)iVar12 >> 0x18) - (char)((uint)iVar6 >> 0x18);
      auVar33[4] = (char)iVar41 - (char)iVar9;
      auVar33[5] = (char)((uint)iVar41 >> 8) - (char)((uint)iVar9 >> 8);
      auVar33[6] = (char)((uint)iVar41 >> 0x10) - (char)((uint)iVar9 >> 0x10);
      auVar33[7] = (char)((uint)iVar41 >> 0x18) - (char)((uint)iVar9 >> 0x18);
      auVar33[8] = (char)iVar42 - (char)iVar10;
      auVar33[9] = (char)((uint)iVar42 >> 8) - (char)((uint)iVar10 >> 8);
      auVar33[10] = (char)((uint)iVar42 >> 0x10) - (char)((uint)iVar10 >> 0x10);
      auVar33[0xb] = (char)((uint)iVar42 >> 0x18) - (char)((uint)iVar10 >> 0x18);
      auVar33[0xc] = (char)iVar43 - (char)iVar11;
      auVar33[0xd] = (char)((uint)iVar43 >> 8) - (char)((uint)iVar11 >> 8);
      auVar33[0xe] = (char)((uint)iVar43 >> 0x10) - (char)((uint)iVar11 >> 0x10);
      auVar33[0xf] = (char)((uint)iVar43 >> 0x18) - (char)((uint)iVar11 >> 0x18);
      uVar1 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar33[0xf] >> 7) << 0xf) - 0xffff;
      if (uVar1 == 0) {
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        goto LAB_00752cb0;
      }
    }
  }
LAB_007537a0:
  if ((char)uVar1 == '\0') {
    if ((uVar1 & 0xf00) == 0) {
      iVar9 = param_1[3];
      iVar6 = param_2[3];
      bVar5 = SBORROW4(iVar9,iVar6);
      bVar4 = iVar9 - iVar6 < 0;
      bVar3 = iVar9 == iVar6;
      if (bVar3) {
        return iVar9;
      }
    }
    else {
      iVar9 = param_1[2];
      iVar6 = param_2[2];
      bVar5 = SBORROW4(iVar9,iVar6);
      bVar4 = iVar9 - iVar6 < 0;
      bVar3 = iVar9 == iVar6;
      if (bVar3) {
        return iVar9;
      }
    }
  }
  else if ((uVar1 & 0xf) == 0) {
    iVar9 = param_1[1];
    iVar6 = param_2[1];
    bVar5 = SBORROW4(iVar9,iVar6);
    bVar4 = iVar9 - iVar6 < 0;
    bVar3 = iVar9 == iVar6;
    if (bVar3) {
      return iVar9;
    }
  }
  else {
    iVar9 = *param_1;
    iVar6 = *param_2;
    bVar5 = SBORROW4(iVar9,iVar6);
    bVar4 = iVar9 - iVar6 < 0;
    bVar3 = iVar9 == iVar6;
    if (bVar3) {
      return iVar9;
    }
  }
LAB_00753900:
  iVar6 = 1;
  if (bVar3 || bVar5 != bVar4) {
    iVar6 = -1;
  }
  return iVar6;
LAB_007538b0:
  if ((char)uVar1 == '\0') {
    if ((uVar1 & 0xf00) == 0) {
      iVar9 = param_1[0xf];
      iVar6 = param_2[0xf];
      bVar5 = SBORROW4(iVar9,iVar6);
      bVar4 = iVar9 - iVar6 < 0;
      bVar3 = iVar9 == iVar6;
      if (bVar3) {
        return iVar9;
      }
    }
    else {
      iVar9 = param_1[0xe];
      iVar6 = param_2[0xe];
      bVar5 = SBORROW4(iVar9,iVar6);
      bVar4 = iVar9 - iVar6 < 0;
      bVar3 = iVar9 == iVar6;
      if (bVar3) {
        return iVar9;
      }
    }
  }
  else if ((uVar1 & 0xf) == 0) {
    iVar9 = param_1[0xd];
    iVar6 = param_2[0xd];
    bVar5 = SBORROW4(iVar9,iVar6);
    bVar4 = iVar9 - iVar6 < 0;
    bVar3 = iVar9 == iVar6;
    if (bVar3) {
      return iVar9;
    }
  }
  else {
    iVar9 = param_1[0xc];
    iVar6 = param_2[0xc];
    bVar5 = SBORROW4(iVar9,iVar6);
    bVar4 = iVar9 - iVar6 < 0;
    bVar3 = iVar9 == iVar6;
    if (bVar3) {
      return iVar9;
    }
  }
  goto LAB_00753900;
}

