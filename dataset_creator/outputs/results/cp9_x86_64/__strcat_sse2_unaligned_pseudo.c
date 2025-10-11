
void __strcat_sse2_unaligned(char *param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [11];
  undefined1 auVar8 [12];
  undefined1 auVar9 [13];
  undefined1 auVar10 [14];
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined8 uVar26;
  long lVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  char *pcVar33;
  ulong uVar34;
  byte *pbVar35;
  byte *pbVar36;
  undefined1 (*pauVar37) [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  byte bVar63;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  byte bVar83;
  byte bVar84;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  byte bVar106;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  char cVar124;
  byte bVar125;
  byte bVar126;
  char cVar127;
  byte bVar128;
  byte bVar129;
  char cVar130;
  byte bVar131;
  byte bVar132;
  char cVar133;
  byte bVar134;
  byte bVar135;
  char cVar136;
  byte bVar137;
  byte bVar138;
  char cVar139;
  byte bVar140;
  byte bVar141;
  char cVar142;
  byte bVar143;
  byte bVar144;
  char cVar145;
  byte bVar146;
  byte bVar147;
  char cVar148;
  byte bVar149;
  byte bVar150;
  char cVar151;
  byte bVar152;
  byte bVar153;
  char cVar154;
  byte bVar155;
  byte bVar156;
  char cVar157;
  byte bVar158;
  byte bVar159;
  char cVar160;
  byte bVar161;
  byte bVar162;
  char cVar163;
  byte bVar164;
  byte bVar165;
  char cVar166;
  byte bVar167;
  byte bVar168;
  char cVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  
  lVar27 = 0;
  uVar30 = (uint)param_1 & 0x3f;
  if (0x30 < uVar30) {
    pbVar29 = (byte *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar39[0] = -(*pbVar29 == 0);
    auVar39[1] = -(pbVar29[1] == 0);
    auVar39[2] = -(pbVar29[2] == 0);
    auVar39[3] = -(pbVar29[3] == 0);
    auVar39[4] = -(pbVar29[4] == 0);
    auVar39[5] = -(pbVar29[5] == 0);
    auVar39[6] = -(pbVar29[6] == 0);
    auVar39[7] = -(pbVar29[7] == 0);
    auVar39[8] = -(pbVar29[8] == 0);
    auVar39[9] = -(pbVar29[9] == 0);
    auVar39[10] = -(pbVar29[10] == 0);
    auVar39[0xb] = -(pbVar29[0xb] == 0);
    auVar39[0xc] = -(pbVar29[0xc] == 0);
    auVar39[0xd] = -(pbVar29[0xd] == 0);
    auVar39[0xe] = -(pbVar29[0xe] == 0);
    auVar39[0xf] = -(pbVar29[0xf] == 0);
    uVar30 = (uint)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
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
                           (ushort)(auVar39[0xf] >> 7) << 0xf) &
             -1 << ((char)uVar30 - (char)pbVar29 & 0x1fU);
    uVar31 = (ulong)uVar30;
    if (uVar30 == 0) goto LAB_0073fc39;
    goto LAB_0073fe50;
  }
  auVar38[0] = -(*param_1 == '\0');
  auVar38[1] = -(param_1[1] == '\0');
  auVar38[2] = -(param_1[2] == '\0');
  auVar38[3] = -(param_1[3] == '\0');
  auVar38[4] = -(param_1[4] == '\0');
  auVar38[5] = -(param_1[5] == '\0');
  auVar38[6] = -(param_1[6] == '\0');
  auVar38[7] = -(param_1[7] == '\0');
  auVar38[8] = -(param_1[8] == '\0');
  auVar38[9] = -(param_1[9] == '\0');
  auVar38[10] = -(param_1[10] == '\0');
  auVar38[0xb] = -(param_1[0xb] == '\0');
  auVar38[0xc] = -(param_1[0xc] == '\0');
  auVar38[0xd] = -(param_1[0xd] == '\0');
  auVar38[0xe] = -(param_1[0xe] == '\0');
  auVar38[0xf] = -(param_1[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar31 = (ulong)uVar3;
  if (uVar3 == 0) {
LAB_0073fc39:
    pbVar28 = (byte *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar40[0] = -(pbVar28[0x10] == 0);
    auVar40[1] = -(pbVar28[0x11] == 0);
    auVar40[2] = -(pbVar28[0x12] == 0);
    auVar40[3] = -(pbVar28[0x13] == 0);
    auVar40[4] = -(pbVar28[0x14] == 0);
    auVar40[5] = -(pbVar28[0x15] == 0);
    auVar40[6] = -(pbVar28[0x16] == 0);
    auVar40[7] = -(pbVar28[0x17] == 0);
    auVar40[8] = -(pbVar28[0x18] == 0);
    auVar40[9] = -(pbVar28[0x19] == 0);
    auVar40[10] = -(pbVar28[0x1a] == 0);
    auVar40[0xb] = -(pbVar28[0x1b] == 0);
    auVar40[0xc] = -(pbVar28[0x1c] == 0);
    auVar40[0xd] = -(pbVar28[0x1d] == 0);
    auVar40[0xe] = -(pbVar28[0x1e] == 0);
    auVar40[0xf] = -(pbVar28[0x1f] == 0);
    uVar3 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
    uVar31 = (ulong)uVar3;
    pbVar29 = pbVar28;
    if (uVar3 == 0) {
      auVar55[0] = -(pbVar28[0x20] == 0);
      auVar55[1] = -(pbVar28[0x21] == 0);
      auVar55[2] = -(pbVar28[0x22] == 0);
      auVar55[3] = -(pbVar28[0x23] == 0);
      auVar55[4] = -(pbVar28[0x24] == 0);
      auVar55[5] = -(pbVar28[0x25] == 0);
      auVar55[6] = -(pbVar28[0x26] == 0);
      auVar55[7] = -(pbVar28[0x27] == 0);
      auVar55[8] = -(pbVar28[0x28] == 0);
      auVar55[9] = -(pbVar28[0x29] == 0);
      auVar55[10] = -(pbVar28[0x2a] == 0);
      auVar55[0xb] = -(pbVar28[0x2b] == 0);
      auVar55[0xc] = -(pbVar28[0x2c] == 0);
      auVar55[0xd] = -(pbVar28[0x2d] == 0);
      auVar55[0xe] = -(pbVar28[0x2e] == 0);
      auVar55[0xf] = -(pbVar28[0x2f] == 0);
      uVar3 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
      uVar31 = (ulong)uVar3;
      if (uVar3 == 0) {
        auVar64[0] = -(pbVar28[0x30] == 0);
        auVar64[1] = -(pbVar28[0x31] == 0);
        auVar64[2] = -(pbVar28[0x32] == 0);
        auVar64[3] = -(pbVar28[0x33] == 0);
        auVar64[4] = -(pbVar28[0x34] == 0);
        auVar64[5] = -(pbVar28[0x35] == 0);
        auVar64[6] = -(pbVar28[0x36] == 0);
        auVar64[7] = -(pbVar28[0x37] == 0);
        auVar64[8] = -(pbVar28[0x38] == 0);
        auVar64[9] = -(pbVar28[0x39] == 0);
        auVar64[10] = -(pbVar28[0x3a] == 0);
        auVar64[0xb] = -(pbVar28[0x3b] == 0);
        auVar64[0xc] = -(pbVar28[0x3c] == 0);
        auVar64[0xd] = -(pbVar28[0x3d] == 0);
        auVar64[0xe] = -(pbVar28[0x3e] == 0);
        auVar64[0xf] = -(pbVar28[0x3f] == 0);
        uVar3 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
        uVar31 = (ulong)uVar3;
        if (uVar3 == 0) {
          auVar85[0] = -(pbVar28[0x40] == 0);
          auVar85[1] = -(pbVar28[0x41] == 0);
          auVar85[2] = -(pbVar28[0x42] == 0);
          auVar85[3] = -(pbVar28[0x43] == 0);
          auVar85[4] = -(pbVar28[0x44] == 0);
          auVar85[5] = -(pbVar28[0x45] == 0);
          auVar85[6] = -(pbVar28[0x46] == 0);
          auVar85[7] = -(pbVar28[0x47] == 0);
          auVar85[8] = -(pbVar28[0x48] == 0);
          auVar85[9] = -(pbVar28[0x49] == 0);
          auVar85[10] = -(pbVar28[0x4a] == 0);
          auVar85[0xb] = -(pbVar28[0x4b] == 0);
          auVar85[0xc] = -(pbVar28[0x4c] == 0);
          auVar85[0xd] = -(pbVar28[0x4d] == 0);
          auVar85[0xe] = -(pbVar28[0x4e] == 0);
          auVar85[0xf] = -(pbVar28[0x4f] == 0);
          uVar3 = (ushort)(SUB161(auVar85 >> 7,0) & 1) | (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar85[0xf] >> 7) << 0xf;
          uVar31 = (ulong)uVar3;
          if (uVar3 == 0) {
            auVar41[0] = -(auVar40[0] == pbVar28[0x50]);
            auVar41[1] = -(auVar40[1] == pbVar28[0x51]);
            auVar41[2] = -(auVar40[2] == pbVar28[0x52]);
            auVar41[3] = -(auVar40[3] == pbVar28[0x53]);
            auVar41[4] = -(auVar40[4] == pbVar28[0x54]);
            auVar41[5] = -(auVar40[5] == pbVar28[0x55]);
            auVar41[6] = -(auVar40[6] == pbVar28[0x56]);
            auVar41[7] = -(auVar40[7] == pbVar28[0x57]);
            auVar41[8] = -(auVar40[8] == pbVar28[0x58]);
            auVar41[9] = -(auVar40[9] == pbVar28[0x59]);
            auVar41[10] = -(auVar40[10] == pbVar28[0x5a]);
            auVar41[0xb] = -(auVar40[0xb] == pbVar28[0x5b]);
            auVar41[0xc] = -(auVar40[0xc] == pbVar28[0x5c]);
            auVar41[0xd] = -(auVar40[0xd] == pbVar28[0x5d]);
            auVar41[0xe] = -(auVar40[0xe] == pbVar28[0x5e]);
            auVar41[0xf] = -(auVar40[0xf] == pbVar28[0x5f]);
            pbVar29 = pbVar28 + 0x40;
            uVar3 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar41[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe60;
            auVar56[0] = -(auVar55[0] == pbVar28[0x60]);
            auVar56[1] = -(auVar55[1] == pbVar28[0x61]);
            auVar56[2] = -(auVar55[2] == pbVar28[0x62]);
            auVar56[3] = -(auVar55[3] == pbVar28[99]);
            auVar56[4] = -(auVar55[4] == pbVar28[100]);
            auVar56[5] = -(auVar55[5] == pbVar28[0x65]);
            auVar56[6] = -(auVar55[6] == pbVar28[0x66]);
            auVar56[7] = -(auVar55[7] == pbVar28[0x67]);
            auVar56[8] = -(auVar55[8] == pbVar28[0x68]);
            auVar56[9] = -(auVar55[9] == pbVar28[0x69]);
            auVar56[10] = -(auVar55[10] == pbVar28[0x6a]);
            auVar56[0xb] = -(auVar55[0xb] == pbVar28[0x6b]);
            auVar56[0xc] = -(auVar55[0xc] == pbVar28[0x6c]);
            auVar56[0xd] = -(auVar55[0xd] == pbVar28[0x6d]);
            auVar56[0xe] = -(auVar55[0xe] == pbVar28[0x6e]);
            auVar56[0xf] = -(auVar55[0xf] == pbVar28[0x6f]);
            uVar3 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
                    (ushort)(auVar56[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe70;
            auVar65[0] = -(auVar64[0] == pbVar28[0x70]);
            auVar65[1] = -(auVar64[1] == pbVar28[0x71]);
            auVar65[2] = -(auVar64[2] == pbVar28[0x72]);
            auVar65[3] = -(auVar64[3] == pbVar28[0x73]);
            auVar65[4] = -(auVar64[4] == pbVar28[0x74]);
            auVar65[5] = -(auVar64[5] == pbVar28[0x75]);
            auVar65[6] = -(auVar64[6] == pbVar28[0x76]);
            auVar65[7] = -(auVar64[7] == pbVar28[0x77]);
            auVar65[8] = -(auVar64[8] == pbVar28[0x78]);
            auVar65[9] = -(auVar64[9] == pbVar28[0x79]);
            auVar65[10] = -(auVar64[10] == pbVar28[0x7a]);
            auVar65[0xb] = -(auVar64[0xb] == pbVar28[0x7b]);
            auVar65[0xc] = -(auVar64[0xc] == pbVar28[0x7c]);
            auVar65[0xd] = -(auVar64[0xd] == pbVar28[0x7d]);
            auVar65[0xe] = -(auVar64[0xe] == pbVar28[0x7e]);
            auVar65[0xf] = -(auVar64[0xf] == pbVar28[0x7f]);
            uVar3 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar65[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe80;
            auVar86[0] = -(auVar85[0] == pbVar28[0x80]);
            auVar86[1] = -(auVar85[1] == pbVar28[0x81]);
            auVar86[2] = -(auVar85[2] == pbVar28[0x82]);
            auVar86[3] = -(auVar85[3] == pbVar28[0x83]);
            auVar86[4] = -(auVar85[4] == pbVar28[0x84]);
            auVar86[5] = -(auVar85[5] == pbVar28[0x85]);
            auVar86[6] = -(auVar85[6] == pbVar28[0x86]);
            auVar86[7] = -(auVar85[7] == pbVar28[0x87]);
            auVar86[8] = -(auVar85[8] == pbVar28[0x88]);
            auVar86[9] = -(auVar85[9] == pbVar28[0x89]);
            auVar86[10] = -(auVar85[10] == pbVar28[0x8a]);
            auVar86[0xb] = -(auVar85[0xb] == pbVar28[0x8b]);
            auVar86[0xc] = -(auVar85[0xc] == pbVar28[0x8c]);
            auVar86[0xd] = -(auVar85[0xd] == pbVar28[0x8d]);
            auVar86[0xe] = -(auVar85[0xe] == pbVar28[0x8e]);
            auVar86[0xf] = -(auVar85[0xf] == pbVar28[0x8f]);
            uVar3 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar86[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe90;
            auVar42[0] = -(auVar41[0] == pbVar28[0x90]);
            auVar42[1] = -(auVar41[1] == pbVar28[0x91]);
            auVar42[2] = -(auVar41[2] == pbVar28[0x92]);
            auVar42[3] = -(auVar41[3] == pbVar28[0x93]);
            auVar42[4] = -(auVar41[4] == pbVar28[0x94]);
            auVar42[5] = -(auVar41[5] == pbVar28[0x95]);
            auVar42[6] = -(auVar41[6] == pbVar28[0x96]);
            auVar42[7] = -(auVar41[7] == pbVar28[0x97]);
            auVar42[8] = -(auVar41[8] == pbVar28[0x98]);
            auVar42[9] = -(auVar41[9] == pbVar28[0x99]);
            auVar42[10] = -(auVar41[10] == pbVar28[0x9a]);
            auVar42[0xb] = -(auVar41[0xb] == pbVar28[0x9b]);
            auVar42[0xc] = -(auVar41[0xc] == pbVar28[0x9c]);
            auVar42[0xd] = -(auVar41[0xd] == pbVar28[0x9d]);
            auVar42[0xe] = -(auVar41[0xe] == pbVar28[0x9e]);
            auVar42[0xf] = -(auVar41[0xf] == pbVar28[0x9f]);
            pbVar29 = pbVar28 + 0x80;
            uVar3 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar42[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe60;
            auVar57[0] = -(auVar56[0] == pbVar28[0xa0]);
            auVar57[1] = -(auVar56[1] == pbVar28[0xa1]);
            auVar57[2] = -(auVar56[2] == pbVar28[0xa2]);
            auVar57[3] = -(auVar56[3] == pbVar28[0xa3]);
            auVar57[4] = -(auVar56[4] == pbVar28[0xa4]);
            auVar57[5] = -(auVar56[5] == pbVar28[0xa5]);
            auVar57[6] = -(auVar56[6] == pbVar28[0xa6]);
            auVar57[7] = -(auVar56[7] == pbVar28[0xa7]);
            auVar57[8] = -(auVar56[8] == pbVar28[0xa8]);
            auVar57[9] = -(auVar56[9] == pbVar28[0xa9]);
            auVar57[10] = -(auVar56[10] == pbVar28[0xaa]);
            auVar57[0xb] = -(auVar56[0xb] == pbVar28[0xab]);
            auVar57[0xc] = -(auVar56[0xc] == pbVar28[0xac]);
            auVar57[0xd] = -(auVar56[0xd] == pbVar28[0xad]);
            auVar57[0xe] = -(auVar56[0xe] == pbVar28[0xae]);
            auVar57[0xf] = -(auVar56[0xf] == pbVar28[0xaf]);
            uVar3 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar57[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe70;
            auVar66[0] = -(auVar65[0] == pbVar28[0xb0]);
            auVar66[1] = -(auVar65[1] == pbVar28[0xb1]);
            auVar66[2] = -(auVar65[2] == pbVar28[0xb2]);
            auVar66[3] = -(auVar65[3] == pbVar28[0xb3]);
            auVar66[4] = -(auVar65[4] == pbVar28[0xb4]);
            auVar66[5] = -(auVar65[5] == pbVar28[0xb5]);
            auVar66[6] = -(auVar65[6] == pbVar28[0xb6]);
            auVar66[7] = -(auVar65[7] == pbVar28[0xb7]);
            auVar66[8] = -(auVar65[8] == pbVar28[0xb8]);
            auVar66[9] = -(auVar65[9] == pbVar28[0xb9]);
            auVar66[10] = -(auVar65[10] == pbVar28[0xba]);
            auVar66[0xb] = -(auVar65[0xb] == pbVar28[0xbb]);
            auVar66[0xc] = -(auVar65[0xc] == pbVar28[0xbc]);
            auVar66[0xd] = -(auVar65[0xd] == pbVar28[0xbd]);
            auVar66[0xe] = -(auVar65[0xe] == pbVar28[0xbe]);
            auVar66[0xf] = -(auVar65[0xf] == pbVar28[0xbf]);
            uVar3 = (ushort)(SUB161(auVar66 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar66[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe80;
            auVar87[0] = -(auVar86[0] == pbVar28[0xc0]);
            auVar87[1] = -(auVar86[1] == pbVar28[0xc1]);
            auVar87[2] = -(auVar86[2] == pbVar28[0xc2]);
            auVar87[3] = -(auVar86[3] == pbVar28[0xc3]);
            auVar87[4] = -(auVar86[4] == pbVar28[0xc4]);
            auVar87[5] = -(auVar86[5] == pbVar28[0xc5]);
            auVar87[6] = -(auVar86[6] == pbVar28[0xc6]);
            auVar87[7] = -(auVar86[7] == pbVar28[199]);
            auVar87[8] = -(auVar86[8] == pbVar28[200]);
            auVar87[9] = -(auVar86[9] == pbVar28[0xc9]);
            auVar87[10] = -(auVar86[10] == pbVar28[0xca]);
            auVar87[0xb] = -(auVar86[0xb] == pbVar28[0xcb]);
            auVar87[0xc] = -(auVar86[0xc] == pbVar28[0xcc]);
            auVar87[0xd] = -(auVar86[0xd] == pbVar28[0xcd]);
            auVar87[0xe] = -(auVar86[0xe] == pbVar28[0xce]);
            auVar87[0xf] = -(auVar86[0xf] == pbVar28[0xcf]);
            uVar3 = (ushort)(SUB161(auVar87 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar87[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe90;
            auVar43[0] = -(auVar42[0] == pbVar28[0xd0]);
            auVar43[1] = -(auVar42[1] == pbVar28[0xd1]);
            auVar43[2] = -(auVar42[2] == pbVar28[0xd2]);
            auVar43[3] = -(auVar42[3] == pbVar28[0xd3]);
            auVar43[4] = -(auVar42[4] == pbVar28[0xd4]);
            auVar43[5] = -(auVar42[5] == pbVar28[0xd5]);
            auVar43[6] = -(auVar42[6] == pbVar28[0xd6]);
            auVar43[7] = -(auVar42[7] == pbVar28[0xd7]);
            auVar43[8] = -(auVar42[8] == pbVar28[0xd8]);
            auVar43[9] = -(auVar42[9] == pbVar28[0xd9]);
            auVar43[10] = -(auVar42[10] == pbVar28[0xda]);
            auVar43[0xb] = -(auVar42[0xb] == pbVar28[0xdb]);
            auVar43[0xc] = -(auVar42[0xc] == pbVar28[0xdc]);
            auVar43[0xd] = -(auVar42[0xd] == pbVar28[0xdd]);
            auVar43[0xe] = -(auVar42[0xe] == pbVar28[0xde]);
            auVar43[0xf] = -(auVar42[0xf] == pbVar28[0xdf]);
            pbVar29 = pbVar28 + 0xc0;
            uVar3 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar43[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe60;
            auVar58[0] = -(auVar57[0] == pbVar28[0xe0]);
            auVar58[1] = -(auVar57[1] == pbVar28[0xe1]);
            auVar58[2] = -(auVar57[2] == pbVar28[0xe2]);
            auVar58[3] = -(auVar57[3] == pbVar28[0xe3]);
            auVar58[4] = -(auVar57[4] == pbVar28[0xe4]);
            auVar58[5] = -(auVar57[5] == pbVar28[0xe5]);
            auVar58[6] = -(auVar57[6] == pbVar28[0xe6]);
            auVar58[7] = -(auVar57[7] == pbVar28[0xe7]);
            auVar58[8] = -(auVar57[8] == pbVar28[0xe8]);
            auVar58[9] = -(auVar57[9] == pbVar28[0xe9]);
            auVar58[10] = -(auVar57[10] == pbVar28[0xea]);
            auVar58[0xb] = -(auVar57[0xb] == pbVar28[0xeb]);
            auVar58[0xc] = -(auVar57[0xc] == pbVar28[0xec]);
            auVar58[0xd] = -(auVar57[0xd] == pbVar28[0xed]);
            auVar58[0xe] = -(auVar57[0xe] == pbVar28[0xee]);
            auVar58[0xf] = -(auVar57[0xf] == pbVar28[0xef]);
            uVar3 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar58[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe70;
            auVar67[0] = -(auVar66[0] == pbVar28[0xf0]);
            auVar67[1] = -(auVar66[1] == pbVar28[0xf1]);
            auVar67[2] = -(auVar66[2] == pbVar28[0xf2]);
            auVar67[3] = -(auVar66[3] == pbVar28[0xf3]);
            auVar67[4] = -(auVar66[4] == pbVar28[0xf4]);
            auVar67[5] = -(auVar66[5] == pbVar28[0xf5]);
            auVar67[6] = -(auVar66[6] == pbVar28[0xf6]);
            auVar67[7] = -(auVar66[7] == pbVar28[0xf7]);
            auVar67[8] = -(auVar66[8] == pbVar28[0xf8]);
            auVar67[9] = -(auVar66[9] == pbVar28[0xf9]);
            auVar67[10] = -(auVar66[10] == pbVar28[0xfa]);
            auVar67[0xb] = -(auVar66[0xb] == pbVar28[0xfb]);
            auVar67[0xc] = -(auVar66[0xc] == pbVar28[0xfc]);
            auVar67[0xd] = -(auVar66[0xd] == pbVar28[0xfd]);
            auVar67[0xe] = -(auVar66[0xe] == pbVar28[0xfe]);
            auVar67[0xf] = -(auVar66[0xf] == pbVar28[0xff]);
            uVar3 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar67[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe80;
            auVar88[0] = -(auVar87[0] == pbVar28[0x100]);
            auVar88[1] = -(auVar87[1] == pbVar28[0x101]);
            auVar88[2] = -(auVar87[2] == pbVar28[0x102]);
            auVar88[3] = -(auVar87[3] == pbVar28[0x103]);
            auVar88[4] = -(auVar87[4] == pbVar28[0x104]);
            auVar88[5] = -(auVar87[5] == pbVar28[0x105]);
            auVar88[6] = -(auVar87[6] == pbVar28[0x106]);
            auVar88[7] = -(auVar87[7] == pbVar28[0x107]);
            auVar88[8] = -(auVar87[8] == pbVar28[0x108]);
            auVar88[9] = -(auVar87[9] == pbVar28[0x109]);
            auVar88[10] = -(auVar87[10] == pbVar28[0x10a]);
            auVar88[0xb] = -(auVar87[0xb] == pbVar28[0x10b]);
            auVar88[0xc] = -(auVar87[0xc] == pbVar28[0x10c]);
            auVar88[0xd] = -(auVar87[0xd] == pbVar28[0x10d]);
            auVar88[0xe] = -(auVar87[0xe] == pbVar28[0x10e]);
            auVar88[0xf] = -(auVar87[0xf] == pbVar28[0x10f]);
            uVar3 = (ushort)(SUB161(auVar88 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar88 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar88 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar88 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar88[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe90;
            if (((ulong)pbVar29 & 0x3f) != 0) {
              auVar43[0] = -(auVar43[0] == pbVar28[0x110]);
              auVar43[1] = -(auVar43[1] == pbVar28[0x111]);
              auVar43[2] = -(auVar43[2] == pbVar28[0x112]);
              auVar43[3] = -(auVar43[3] == pbVar28[0x113]);
              auVar43[4] = -(auVar43[4] == pbVar28[0x114]);
              auVar43[5] = -(auVar43[5] == pbVar28[0x115]);
              auVar43[6] = -(auVar43[6] == pbVar28[0x116]);
              auVar43[7] = -(auVar43[7] == pbVar28[0x117]);
              auVar43[8] = -(auVar43[8] == pbVar28[0x118]);
              auVar43[9] = -(auVar43[9] == pbVar28[0x119]);
              auVar43[10] = -(auVar43[10] == pbVar28[0x11a]);
              auVar43[0xb] = -(auVar43[0xb] == pbVar28[0x11b]);
              auVar43[0xc] = -(auVar43[0xc] == pbVar28[0x11c]);
              auVar43[0xd] = -(auVar43[0xd] == pbVar28[0x11d]);
              auVar43[0xe] = -(auVar43[0xe] == pbVar28[0x11e]);
              auVar43[0xf] = -(auVar43[0xf] == pbVar28[0x11f]);
              pbVar29 = pbVar28 + 0x110;
              uVar3 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar43[0xf] >> 7) << 0xf;
              uVar31 = (ulong)uVar3;
              if (uVar3 != 0) {
LAB_0073fe50:
                lVar27 = (long)pbVar29 - (long)param_1;
                goto LAB_0073fe53;
              }
              if (((ulong)pbVar29 & 0x3f) != 0) {
                auVar58[0] = -(auVar58[0] == pbVar28[0x120]);
                auVar58[1] = -(auVar58[1] == pbVar28[0x121]);
                auVar58[2] = -(auVar58[2] == pbVar28[0x122]);
                auVar58[3] = -(auVar58[3] == pbVar28[0x123]);
                auVar58[4] = -(auVar58[4] == pbVar28[0x124]);
                auVar58[5] = -(auVar58[5] == pbVar28[0x125]);
                auVar58[6] = -(auVar58[6] == pbVar28[0x126]);
                auVar58[7] = -(auVar58[7] == pbVar28[0x127]);
                auVar58[8] = -(auVar58[8] == pbVar28[0x128]);
                auVar58[9] = -(auVar58[9] == pbVar28[0x129]);
                auVar58[10] = -(auVar58[10] == pbVar28[0x12a]);
                auVar58[0xb] = -(auVar58[0xb] == pbVar28[299]);
                auVar58[0xc] = -(auVar58[0xc] == pbVar28[300]);
                auVar58[0xd] = -(auVar58[0xd] == pbVar28[0x12d]);
                auVar58[0xe] = -(auVar58[0xe] == pbVar28[0x12e]);
                auVar58[0xf] = -(auVar58[0xf] == pbVar28[0x12f]);
                pbVar29 = pbVar28 + 0x120;
                uVar3 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar58[0xf] >> 7) << 0xf;
                uVar31 = (ulong)uVar3;
                if (uVar3 != 0) goto LAB_0073fe50;
                if (((ulong)pbVar29 & 0x3f) != 0) {
                  auVar67[0] = -(auVar67[0] == pbVar28[0x130]);
                  auVar67[1] = -(auVar67[1] == pbVar28[0x131]);
                  auVar67[2] = -(auVar67[2] == pbVar28[0x132]);
                  auVar67[3] = -(auVar67[3] == pbVar28[0x133]);
                  auVar67[4] = -(auVar67[4] == pbVar28[0x134]);
                  auVar67[5] = -(auVar67[5] == pbVar28[0x135]);
                  auVar67[6] = -(auVar67[6] == pbVar28[0x136]);
                  auVar67[7] = -(auVar67[7] == pbVar28[0x137]);
                  auVar67[8] = -(auVar67[8] == pbVar28[0x138]);
                  auVar67[9] = -(auVar67[9] == pbVar28[0x139]);
                  auVar67[10] = -(auVar67[10] == pbVar28[0x13a]);
                  auVar67[0xb] = -(auVar67[0xb] == pbVar28[0x13b]);
                  auVar67[0xc] = -(auVar67[0xc] == pbVar28[0x13c]);
                  auVar67[0xd] = -(auVar67[0xd] == pbVar28[0x13d]);
                  auVar67[0xe] = -(auVar67[0xe] == pbVar28[0x13e]);
                  auVar67[0xf] = -(auVar67[0xf] == pbVar28[0x13f]);
                  pbVar29 = pbVar28 + 0x130;
                  uVar3 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar67[0xf] >> 7) << 0xf;
                  uVar31 = (ulong)uVar3;
                  if (uVar3 != 0) goto LAB_0073fe50;
                  if (((ulong)pbVar29 & 0x3f) != 0) {
                    auVar88[0] = -(auVar88[0] == pbVar28[0x140]);
                    auVar88[1] = -(auVar88[1] == pbVar28[0x141]);
                    auVar88[2] = -(auVar88[2] == pbVar28[0x142]);
                    auVar88[3] = -(auVar88[3] == pbVar28[0x143]);
                    auVar88[4] = -(auVar88[4] == pbVar28[0x144]);
                    auVar88[5] = -(auVar88[5] == pbVar28[0x145]);
                    auVar88[6] = -(auVar88[6] == pbVar28[0x146]);
                    auVar88[7] = -(auVar88[7] == pbVar28[0x147]);
                    auVar88[8] = -(auVar88[8] == pbVar28[0x148]);
                    auVar88[9] = -(auVar88[9] == pbVar28[0x149]);
                    auVar88[10] = -(auVar88[10] == pbVar28[0x14a]);
                    auVar88[0xb] = -(auVar88[0xb] == pbVar28[0x14b]);
                    auVar88[0xc] = -(auVar88[0xc] == pbVar28[0x14c]);
                    auVar88[0xd] = -(auVar88[0xd] == pbVar28[0x14d]);
                    auVar88[0xe] = -(auVar88[0xe] == pbVar28[0x14e]);
                    auVar88[0xf] = -(auVar88[0xf] == pbVar28[0x14f]);
                    pbVar29 = pbVar28 + 0x140;
                    uVar3 = (ushort)(SUB161(auVar88 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar88 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar88 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar88 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar88[0xf] >> 7) << 0xf;
                    uVar31 = (ulong)uVar3;
                    if (uVar3 != 0) goto LAB_0073fe50;
                    pbVar29 = pbVar28 + 0x150;
                  }
                }
              }
            }
            do {
              pbVar28 = pbVar29;
              bVar123 = *pbVar28;
              bVar126 = pbVar28[1];
              bVar129 = pbVar28[2];
              bVar132 = pbVar28[3];
              bVar135 = pbVar28[4];
              bVar138 = pbVar28[5];
              bVar141 = pbVar28[6];
              bVar144 = pbVar28[7];
              bVar147 = pbVar28[8];
              bVar150 = pbVar28[9];
              bVar153 = pbVar28[10];
              bVar156 = pbVar28[0xb];
              bVar159 = pbVar28[0xc];
              bVar162 = pbVar28[0xd];
              bVar165 = pbVar28[0xe];
              bVar168 = pbVar28[0xf];
              bVar125 = pbVar28[0x10];
              bVar128 = pbVar28[0x11];
              bVar131 = pbVar28[0x12];
              bVar134 = pbVar28[0x13];
              bVar137 = pbVar28[0x14];
              bVar140 = pbVar28[0x15];
              bVar143 = pbVar28[0x16];
              bVar146 = pbVar28[0x17];
              bVar149 = pbVar28[0x18];
              bVar152 = pbVar28[0x19];
              bVar155 = pbVar28[0x1a];
              bVar158 = pbVar28[0x1b];
              bVar161 = pbVar28[0x1c];
              bVar164 = pbVar28[0x1d];
              bVar167 = pbVar28[0x1e];
              bVar170 = pbVar28[0x1f];
              bVar107 = (bVar125 < bVar123) * bVar125 | (bVar125 >= bVar123) * bVar123;
              bVar108 = (bVar128 < bVar126) * bVar128 | (bVar128 >= bVar126) * bVar126;
              bVar109 = (bVar131 < bVar129) * bVar131 | (bVar131 >= bVar129) * bVar129;
              bVar110 = (bVar134 < bVar132) * bVar134 | (bVar134 >= bVar132) * bVar132;
              bVar111 = (bVar137 < bVar135) * bVar137 | (bVar137 >= bVar135) * bVar135;
              bVar112 = (bVar140 < bVar138) * bVar140 | (bVar140 >= bVar138) * bVar138;
              bVar113 = (bVar143 < bVar141) * bVar143 | (bVar143 >= bVar141) * bVar141;
              bVar114 = (bVar146 < bVar144) * bVar146 | (bVar146 >= bVar144) * bVar144;
              bVar115 = (bVar149 < bVar147) * bVar149 | (bVar149 >= bVar147) * bVar147;
              bVar116 = (bVar152 < bVar150) * bVar152 | (bVar152 >= bVar150) * bVar150;
              bVar117 = (bVar155 < bVar153) * bVar155 | (bVar155 >= bVar153) * bVar153;
              bVar118 = (bVar158 < bVar156) * bVar158 | (bVar158 >= bVar156) * bVar156;
              bVar119 = (bVar161 < bVar159) * bVar161 | (bVar161 >= bVar159) * bVar159;
              bVar120 = (bVar164 < bVar162) * bVar164 | (bVar164 >= bVar162) * bVar162;
              bVar121 = (bVar167 < bVar165) * bVar167 | (bVar167 >= bVar165) * bVar165;
              bVar122 = (bVar170 < bVar168) * bVar170 | (bVar170 >= bVar168) * bVar168;
              bVar123 = pbVar28[0x20];
              bVar126 = pbVar28[0x21];
              bVar129 = pbVar28[0x22];
              bVar132 = pbVar28[0x23];
              bVar135 = pbVar28[0x24];
              bVar138 = pbVar28[0x25];
              bVar141 = pbVar28[0x26];
              bVar144 = pbVar28[0x27];
              bVar147 = pbVar28[0x28];
              bVar150 = pbVar28[0x29];
              bVar153 = pbVar28[0x2a];
              bVar156 = pbVar28[0x2b];
              bVar159 = pbVar28[0x2c];
              bVar162 = pbVar28[0x2d];
              bVar165 = pbVar28[0x2e];
              bVar168 = pbVar28[0x2f];
              bVar125 = pbVar28[0x30];
              bVar128 = pbVar28[0x31];
              bVar131 = pbVar28[0x32];
              bVar134 = pbVar28[0x33];
              bVar137 = pbVar28[0x34];
              bVar140 = pbVar28[0x35];
              bVar143 = pbVar28[0x36];
              bVar146 = pbVar28[0x37];
              bVar149 = pbVar28[0x38];
              bVar152 = pbVar28[0x39];
              bVar155 = pbVar28[0x3a];
              bVar158 = pbVar28[0x3b];
              bVar161 = pbVar28[0x3c];
              bVar164 = pbVar28[0x3d];
              bVar167 = pbVar28[0x3e];
              bVar170 = pbVar28[0x3f];
              bVar123 = (bVar125 < bVar123) * bVar125 | (bVar125 >= bVar123) * bVar123;
              bVar126 = (bVar128 < bVar126) * bVar128 | (bVar128 >= bVar126) * bVar126;
              bVar129 = (bVar131 < bVar129) * bVar131 | (bVar131 >= bVar129) * bVar129;
              bVar132 = (bVar134 < bVar132) * bVar134 | (bVar134 >= bVar132) * bVar132;
              bVar135 = (bVar137 < bVar135) * bVar137 | (bVar137 >= bVar135) * bVar135;
              bVar138 = (bVar140 < bVar138) * bVar140 | (bVar140 >= bVar138) * bVar138;
              bVar141 = (bVar143 < bVar141) * bVar143 | (bVar143 >= bVar141) * bVar141;
              bVar144 = (bVar146 < bVar144) * bVar146 | (bVar146 >= bVar144) * bVar144;
              bVar147 = (bVar149 < bVar147) * bVar149 | (bVar149 >= bVar147) * bVar147;
              bVar150 = (bVar152 < bVar150) * bVar152 | (bVar152 >= bVar150) * bVar150;
              bVar153 = (bVar155 < bVar153) * bVar155 | (bVar155 >= bVar153) * bVar153;
              bVar156 = (bVar158 < bVar156) * bVar158 | (bVar158 >= bVar156) * bVar156;
              bVar159 = (bVar161 < bVar159) * bVar161 | (bVar161 >= bVar159) * bVar159;
              bVar162 = (bVar164 < bVar162) * bVar164 | (bVar164 >= bVar162) * bVar162;
              bVar165 = (bVar167 < bVar165) * bVar167 | (bVar167 >= bVar165) * bVar165;
              bVar168 = (bVar170 < bVar168) * bVar170 | (bVar170 >= bVar168) * bVar168;
              cVar124 = -((byte)((bVar107 < bVar123) * bVar107 | (bVar107 >= bVar123) * bVar123) ==
                         auVar43[0]);
              cVar127 = -((byte)((bVar108 < bVar126) * bVar108 | (bVar108 >= bVar126) * bVar126) ==
                         auVar43[1]);
              cVar130 = -((byte)((bVar109 < bVar129) * bVar109 | (bVar109 >= bVar129) * bVar129) ==
                         auVar43[2]);
              cVar133 = -((byte)((bVar110 < bVar132) * bVar110 | (bVar110 >= bVar132) * bVar132) ==
                         auVar43[3]);
              cVar136 = -((byte)((bVar111 < bVar135) * bVar111 | (bVar111 >= bVar135) * bVar135) ==
                         auVar43[4]);
              cVar139 = -((byte)((bVar112 < bVar138) * bVar112 | (bVar112 >= bVar138) * bVar138) ==
                         auVar43[5]);
              cVar142 = -((byte)((bVar113 < bVar141) * bVar113 | (bVar113 >= bVar141) * bVar141) ==
                         auVar43[6]);
              cVar145 = -((byte)((bVar114 < bVar144) * bVar114 | (bVar114 >= bVar144) * bVar144) ==
                         auVar43[7]);
              cVar148 = -((byte)((bVar115 < bVar147) * bVar115 | (bVar115 >= bVar147) * bVar147) ==
                         auVar43[8]);
              cVar151 = -((byte)((bVar116 < bVar150) * bVar116 | (bVar116 >= bVar150) * bVar150) ==
                         auVar43[9]);
              cVar154 = -((byte)((bVar117 < bVar153) * bVar117 | (bVar117 >= bVar153) * bVar153) ==
                         auVar43[10]);
              cVar157 = -((byte)((bVar118 < bVar156) * bVar118 | (bVar118 >= bVar156) * bVar156) ==
                         auVar43[0xb]);
              cVar160 = -((byte)((bVar119 < bVar159) * bVar119 | (bVar119 >= bVar159) * bVar159) ==
                         auVar43[0xc]);
              cVar163 = -((byte)((bVar120 < bVar162) * bVar120 | (bVar120 >= bVar162) * bVar162) ==
                         auVar43[0xd]);
              cVar166 = -((byte)((bVar121 < bVar165) * bVar121 | (bVar121 >= bVar165) * bVar165) ==
                         auVar43[0xe]);
              cVar169 = -((byte)((bVar122 < bVar168) * bVar122 | (bVar122 >= bVar168) * bVar168) ==
                         auVar43[0xf]);
              auVar5[1] = cVar127;
              auVar5[0] = cVar124;
              auVar5[2] = cVar130;
              auVar5[3] = cVar133;
              auVar5[4] = cVar136;
              auVar5[5] = cVar139;
              auVar5[6] = cVar142;
              auVar5[7] = cVar145;
              auVar5[8] = cVar148;
              auVar5[9] = cVar151;
              auVar5[10] = cVar154;
              auVar5[0xb] = cVar157;
              auVar5[0xc] = cVar160;
              auVar5[0xd] = cVar163;
              auVar5[0xe] = cVar166;
              auVar5[0xf] = cVar169;
              auVar6[1] = cVar127;
              auVar6[0] = cVar124;
              auVar6[2] = cVar130;
              auVar6[3] = cVar133;
              auVar6[4] = cVar136;
              auVar6[5] = cVar139;
              auVar6[6] = cVar142;
              auVar6[7] = cVar145;
              auVar6[8] = cVar148;
              auVar6[9] = cVar151;
              auVar6[10] = cVar154;
              auVar6[0xb] = cVar157;
              auVar6[0xc] = cVar160;
              auVar6[0xd] = cVar163;
              auVar6[0xe] = cVar166;
              auVar6[0xf] = cVar169;
              auVar10[1] = cVar133;
              auVar10[0] = cVar130;
              auVar10[2] = cVar136;
              auVar10[3] = cVar139;
              auVar10[4] = cVar142;
              auVar10[5] = cVar145;
              auVar10[6] = cVar148;
              auVar10[7] = cVar151;
              auVar10[8] = cVar154;
              auVar10[9] = cVar157;
              auVar10[10] = cVar160;
              auVar10[0xb] = cVar163;
              auVar10[0xc] = cVar166;
              auVar10[0xd] = cVar169;
              auVar9[1] = cVar136;
              auVar9[0] = cVar133;
              auVar9[2] = cVar139;
              auVar9[3] = cVar142;
              auVar9[4] = cVar145;
              auVar9[5] = cVar148;
              auVar9[6] = cVar151;
              auVar9[7] = cVar154;
              auVar9[8] = cVar157;
              auVar9[9] = cVar160;
              auVar9[10] = cVar163;
              auVar9[0xb] = cVar166;
              auVar9[0xc] = cVar169;
              auVar8[1] = cVar139;
              auVar8[0] = cVar136;
              auVar8[2] = cVar142;
              auVar8[3] = cVar145;
              auVar8[4] = cVar148;
              auVar8[5] = cVar151;
              auVar8[6] = cVar154;
              auVar8[7] = cVar157;
              auVar8[8] = cVar160;
              auVar8[9] = cVar163;
              auVar8[10] = cVar166;
              auVar8[0xb] = cVar169;
              auVar7[1] = cVar142;
              auVar7[0] = cVar139;
              auVar7[2] = cVar145;
              auVar7[3] = cVar148;
              auVar7[4] = cVar151;
              auVar7[5] = cVar154;
              auVar7[6] = cVar157;
              auVar7[7] = cVar160;
              auVar7[8] = cVar163;
              auVar7[9] = cVar166;
              auVar7[10] = cVar169;
              pbVar29 = pbVar28 + 0x40;
            } while (((((((((auVar5 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                           (auVar6 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar10 >> 7 & (undefined1  [14])0x1) == (undefined1  [14])0x0) &&
                         (auVar9 >> 7 & (undefined1  [13])0x1) == (undefined1  [13])0x0) &&
                        (auVar8 >> 7 & (undefined1  [12])0x1) == (undefined1  [12])0x0) &&
                       (auVar7 >> 7 & (undefined1  [11])0x1) == (undefined1  [11])0x0) &&
                      (CONCAT19(cVar169,CONCAT18(cVar166,CONCAT17(cVar163,CONCAT16(cVar160,CONCAT15(
                                                  cVar157,CONCAT14(cVar154,CONCAT13(cVar151,CONCAT12
                                                  (cVar148,CONCAT11(cVar145,cVar142))))))))) >> 7 &
                      1) == 0) &&
                     (CONCAT18(cVar169,CONCAT17(cVar166,CONCAT16(cVar163,CONCAT15(cVar160,CONCAT14(
                                                  cVar157,CONCAT13(cVar154,CONCAT12(cVar151,CONCAT11
                                                  (cVar148,cVar145)))))))) >> 7 & 1) == 0) &&
                     -1 < cVar169);
            auVar44[0] = -(auVar43[0] == *pbVar28);
            auVar44[1] = -(auVar43[1] == pbVar28[1]);
            auVar44[2] = -(auVar43[2] == pbVar28[2]);
            auVar44[3] = -(auVar43[3] == pbVar28[3]);
            auVar44[4] = -(auVar43[4] == pbVar28[4]);
            auVar44[5] = -(auVar43[5] == pbVar28[5]);
            auVar44[6] = -(auVar43[6] == pbVar28[6]);
            auVar44[7] = -(auVar43[7] == pbVar28[7]);
            auVar44[8] = -(auVar43[8] == pbVar28[8]);
            auVar44[9] = -(auVar43[9] == pbVar28[9]);
            auVar44[10] = -(auVar43[10] == pbVar28[10]);
            auVar44[0xb] = -(auVar43[0xb] == pbVar28[0xb]);
            auVar44[0xc] = -(auVar43[0xc] == pbVar28[0xc]);
            auVar44[0xd] = -(auVar43[0xd] == pbVar28[0xd]);
            auVar44[0xe] = -(auVar43[0xe] == pbVar28[0xe]);
            auVar44[0xf] = -(auVar43[0xf] == pbVar28[0xf]);
            pbVar29 = pbVar28 + -0x10;
            uVar3 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                    (ushort)(auVar44[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe60;
            auVar59[0] = -(auVar58[0] == pbVar28[0x10]);
            auVar59[1] = -(auVar58[1] == pbVar28[0x11]);
            auVar59[2] = -(auVar58[2] == pbVar28[0x12]);
            auVar59[3] = -(auVar58[3] == pbVar28[0x13]);
            auVar59[4] = -(auVar58[4] == pbVar28[0x14]);
            auVar59[5] = -(auVar58[5] == pbVar28[0x15]);
            auVar59[6] = -(auVar58[6] == pbVar28[0x16]);
            auVar59[7] = -(auVar58[7] == pbVar28[0x17]);
            auVar59[8] = -(auVar58[8] == pbVar28[0x18]);
            auVar59[9] = -(auVar58[9] == pbVar28[0x19]);
            auVar59[10] = -(auVar58[10] == pbVar28[0x1a]);
            auVar59[0xb] = -(auVar58[0xb] == pbVar28[0x1b]);
            auVar59[0xc] = -(auVar58[0xc] == pbVar28[0x1c]);
            auVar59[0xd] = -(auVar58[0xd] == pbVar28[0x1d]);
            auVar59[0xe] = -(auVar58[0xe] == pbVar28[0x1e]);
            auVar59[0xf] = -(auVar58[0xf] == pbVar28[0x1f]);
            uVar3 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar59[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe70;
            auVar68[0] = -(auVar67[0] == pbVar28[0x20]);
            auVar68[1] = -(auVar67[1] == pbVar28[0x21]);
            auVar68[2] = -(auVar67[2] == pbVar28[0x22]);
            auVar68[3] = -(auVar67[3] == pbVar28[0x23]);
            auVar68[4] = -(auVar67[4] == pbVar28[0x24]);
            auVar68[5] = -(auVar67[5] == pbVar28[0x25]);
            auVar68[6] = -(auVar67[6] == pbVar28[0x26]);
            auVar68[7] = -(auVar67[7] == pbVar28[0x27]);
            auVar68[8] = -(auVar67[8] == pbVar28[0x28]);
            auVar68[9] = -(auVar67[9] == pbVar28[0x29]);
            auVar68[10] = -(auVar67[10] == pbVar28[0x2a]);
            auVar68[0xb] = -(auVar67[0xb] == pbVar28[0x2b]);
            auVar68[0xc] = -(auVar67[0xc] == pbVar28[0x2c]);
            auVar68[0xd] = -(auVar67[0xd] == pbVar28[0x2d]);
            auVar68[0xe] = -(auVar67[0xe] == pbVar28[0x2e]);
            auVar68[0xf] = -(auVar67[0xf] == pbVar28[0x2f]);
            uVar3 = (ushort)(SUB161(auVar68 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar68[0xf] >> 7) << 0xf;
            uVar31 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_0073fe80;
            auVar89[0] = -(auVar88[0] == pbVar28[0x30]);
            auVar89[1] = -(auVar88[1] == pbVar28[0x31]);
            auVar89[2] = -(auVar88[2] == pbVar28[0x32]);
            auVar89[3] = -(auVar88[3] == pbVar28[0x33]);
            auVar89[4] = -(auVar88[4] == pbVar28[0x34]);
            auVar89[5] = -(auVar88[5] == pbVar28[0x35]);
            auVar89[6] = -(auVar88[6] == pbVar28[0x36]);
            auVar89[7] = -(auVar88[7] == pbVar28[0x37]);
            auVar89[8] = -(auVar88[8] == pbVar28[0x38]);
            auVar89[9] = -(auVar88[9] == pbVar28[0x39]);
            auVar89[10] = -(auVar88[10] == pbVar28[0x3a]);
            auVar89[0xb] = -(auVar88[0xb] == pbVar28[0x3b]);
            auVar89[0xc] = -(auVar88[0xc] == pbVar28[0x3c]);
            auVar89[0xd] = -(auVar88[0xd] == pbVar28[0x3d]);
            auVar89[0xe] = -(auVar88[0xe] == pbVar28[0x3e]);
            auVar89[0xf] = -(auVar88[0xf] == pbVar28[0x3f]);
            uVar3 = (ushort)(SUB161(auVar89 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar89[0xf] >> 7) << 0xf;
            lVar27 = 0;
            if (uVar3 != 0) {
              for (; (uVar3 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
              }
            }
            pbVar29 = pbVar29 + (lVar27 - (long)param_1) + 0x40;
          }
          else {
LAB_0073fe90:
            lVar27 = 0;
            if (uVar31 != 0) {
              for (; (uVar31 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
              }
            }
            pbVar29 = pbVar29 + (lVar27 - (long)param_1) + 0x40;
          }
        }
        else {
LAB_0073fe80:
          lVar27 = 0;
          if (uVar31 != 0) {
            for (; (uVar31 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
            }
          }
          pbVar29 = pbVar29 + (lVar27 - (long)param_1) + 0x30;
        }
      }
      else {
LAB_0073fe70:
        lVar27 = 0;
        if (uVar31 != 0) {
          for (; (uVar31 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
          }
        }
        pbVar29 = pbVar29 + (lVar27 - (long)param_1) + 0x20;
      }
    }
    else {
LAB_0073fe60:
      lVar27 = 0;
      if (uVar31 != 0) {
        for (; (uVar31 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
        }
      }
      pbVar29 = pbVar29 + (lVar27 - (long)param_1) + 0x10;
    }
  }
  else {
LAB_0073fe53:
    lVar1 = 0;
    if (uVar31 != 0) {
      for (; (uVar31 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
      }
    }
    pbVar29 = (byte *)(lVar27 + lVar1);
  }
  pauVar37 = (undefined1 (*) [16])(param_1 + (long)pbVar29);
  if (((ulong)param_2 & 0x3f) < 0x21) {
    auVar39 = *param_2;
    auVar38 = param_2[1];
    auVar54[0] = -(auVar39[0] == '\0');
    auVar54[1] = -(auVar39[1] == '\0');
    auVar54[2] = -(auVar39[2] == '\0');
    auVar54[3] = -(auVar39[3] == '\0');
    auVar54[4] = -(auVar39[4] == '\0');
    auVar54[5] = -(auVar39[5] == '\0');
    auVar54[6] = -(auVar39[6] == '\0');
    auVar54[7] = -(auVar39[7] == '\0');
    auVar54[8] = -(auVar39[8] == '\0');
    auVar54[9] = -(auVar39[9] == '\0');
    auVar54[10] = -(auVar39[10] == '\0');
    auVar54[0xb] = -(auVar39[0xb] == '\0');
    auVar54[0xc] = -(auVar39[0xc] == '\0');
    auVar54[0xd] = -(auVar39[0xd] == '\0');
    auVar54[0xe] = -(auVar39[0xe] == '\0');
    auVar54[0xf] = -(auVar39[0xf] == '\0');
    uVar31 = (ulong)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                            (ushort)(auVar54[0xf] >> 7) << 0xf);
    if (uVar31 == 0) {
      auVar45[0] = -(auVar54[0] == auVar38[0]);
      auVar45[1] = -(auVar54[1] == auVar38[1]);
      auVar45[2] = -(auVar54[2] == auVar38[2]);
      auVar45[3] = -(auVar54[3] == auVar38[3]);
      auVar45[4] = -(auVar54[4] == auVar38[4]);
      auVar45[5] = -(auVar54[5] == auVar38[5]);
      auVar45[6] = -(auVar54[6] == auVar38[6]);
      auVar45[7] = -(auVar54[7] == auVar38[7]);
      auVar45[8] = -(auVar54[8] == auVar38[8]);
      auVar45[9] = -(auVar54[9] == auVar38[9]);
      auVar45[10] = -(auVar54[10] == auVar38[10]);
      auVar45[0xb] = -(auVar54[0xb] == auVar38[0xb]);
      auVar45[0xc] = -(auVar54[0xc] == auVar38[0xc]);
      auVar45[0xd] = -(auVar54[0xd] == auVar38[0xd]);
      auVar45[0xe] = -(auVar54[0xe] == auVar38[0xe]);
      auVar45[0xf] = -(auVar54[0xf] == auVar38[0xf]);
      *pauVar37 = auVar39;
      uVar31 = (ulong)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                              (ushort)(auVar45[0xf] >> 7) << 0xf);
      if (uVar31 == 0) goto LAB_0073ff00;
      param_2 = param_2 + 1;
      pauVar37 = pauVar37 + 1;
    }
    lVar27 = 0;
    if (uVar31 != 0) {
      for (; (uVar31 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0074015b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))
              (pauVar37,param_2,lVar27,&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4));
    return;
  }
  pcVar33 = (char *)((ulong)param_2 & 0xfffffffffffffff0);
  uVar31 = (ulong)param_2 & 0xf;
  auVar60[0] = -(*pcVar33 == '\0');
  auVar60[1] = -(pcVar33[1] == '\0');
  auVar60[2] = -(pcVar33[2] == '\0');
  auVar60[3] = -(pcVar33[3] == '\0');
  auVar60[4] = -(pcVar33[4] == '\0');
  auVar60[5] = -(pcVar33[5] == '\0');
  auVar60[6] = -(pcVar33[6] == '\0');
  auVar60[7] = -(pcVar33[7] == '\0');
  auVar60[8] = -(pcVar33[8] == '\0');
  auVar60[9] = -(pcVar33[9] == '\0');
  auVar60[10] = -(pcVar33[10] == '\0');
  auVar60[0xb] = -(pcVar33[0xb] == '\0');
  auVar60[0xc] = -(pcVar33[0xc] == '\0');
  auVar60[0xd] = -(pcVar33[0xd] == '\0');
  auVar60[0xe] = -(pcVar33[0xe] == '\0');
  auVar60[0xf] = -(pcVar33[0xf] == '\0');
  uVar3 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar60[0xf] >> 7) << 0xf) >> (sbyte)uVar31;
  if (uVar3 != 0) {
    lVar27 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00740136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))
              (pauVar37,pcVar33 + uVar31,lVar27,&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)
              );
    return;
  }
  auVar45[0] = -(pcVar33[0x10] == '\0');
  auVar45[1] = -(pcVar33[0x11] == '\0');
  auVar45[2] = -(pcVar33[0x12] == '\0');
  auVar45[3] = -(pcVar33[0x13] == '\0');
  auVar45[4] = -(pcVar33[0x14] == '\0');
  auVar45[5] = -(pcVar33[0x15] == '\0');
  auVar45[6] = -(pcVar33[0x16] == '\0');
  auVar45[7] = -(pcVar33[0x17] == '\0');
  auVar45[8] = -(pcVar33[0x18] == '\0');
  auVar45[9] = -(pcVar33[0x19] == '\0');
  auVar45[10] = -(pcVar33[0x1a] == '\0');
  auVar45[0xb] = -(pcVar33[0x1b] == '\0');
  auVar45[0xc] = -(pcVar33[0x1c] == '\0');
  auVar45[0xd] = -(pcVar33[0x1d] == '\0');
  auVar45[0xe] = -(pcVar33[0x1e] == '\0');
  auVar45[0xf] = -(pcVar33[0x1f] == '\0');
  uVar3 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    lVar27 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
      }
    }
    lVar27 = (lVar27 + 0x10) - uVar31;
                    /* WARNING: Could not recover jumptable at 0x0074017d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))
              (pauVar37,pcVar33 + uVar31,lVar27,&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)
              );
    return;
  }
  uVar26 = *(undefined8 *)(pcVar33 + uVar31 + 8);
  *(undefined8 *)*pauVar37 = *(undefined8 *)(pcVar33 + uVar31);
  *(undefined8 *)(*pauVar37 + 8) = uVar26;
LAB_0073ff00:
  uVar31 = (ulong)param_2 & 0xf;
  uVar34 = (ulong)param_2 & 0xfffffffffffffff0;
  uVar26 = *(undefined8 *)(uVar34 + 0x18);
  cVar124 = *(char *)(uVar34 + 0x20);
  cVar127 = *(char *)(uVar34 + 0x21);
  cVar130 = *(char *)(uVar34 + 0x22);
  cVar133 = *(char *)(uVar34 + 0x23);
  cVar136 = *(char *)(uVar34 + 0x24);
  cVar139 = *(char *)(uVar34 + 0x25);
  cVar142 = *(char *)(uVar34 + 0x26);
  cVar145 = *(char *)(uVar34 + 0x27);
  cVar148 = *(char *)(uVar34 + 0x28);
  cVar151 = *(char *)(uVar34 + 0x29);
  cVar154 = *(char *)(uVar34 + 0x2a);
  cVar157 = *(char *)(uVar34 + 0x2b);
  cVar160 = *(char *)(uVar34 + 0x2c);
  cVar163 = *(char *)(uVar34 + 0x2d);
  cVar166 = *(char *)(uVar34 + 0x2e);
  cVar169 = *(char *)(uVar34 + 0x2f);
  *(undefined8 *)((long)pauVar37 + (0x10 - uVar31)) = *(undefined8 *)(uVar34 + 0x10);
  *(undefined8 *)((long)pauVar37 + (0x18 - uVar31)) = uVar26;
  auVar46[0] = -(auVar45[0] == cVar124);
  auVar46[1] = -(auVar45[1] == cVar127);
  auVar46[2] = -(auVar45[2] == cVar130);
  auVar46[3] = -(auVar45[3] == cVar133);
  auVar46[4] = -(auVar45[4] == cVar136);
  auVar46[5] = -(auVar45[5] == cVar139);
  auVar46[6] = -(auVar45[6] == cVar142);
  auVar46[7] = -(auVar45[7] == cVar145);
  auVar46[8] = -(auVar45[8] == cVar148);
  auVar46[9] = -(auVar45[9] == cVar151);
  auVar46[10] = -(auVar45[10] == cVar154);
  auVar46[0xb] = -(auVar45[0xb] == cVar157);
  auVar46[0xc] = -(auVar45[0xc] == cVar160);
  auVar46[0xd] = -(auVar45[0xd] == cVar163);
  auVar46[0xe] = -(auVar45[0xe] == cVar166);
  auVar46[0xf] = -(auVar45[0xf] == cVar169);
  uVar32 = (ulong)(ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
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
                          (ushort)(auVar46[0xf] >> 7) << 0xf);
  lVar27 = 0x20;
  if (uVar32 == 0) {
    cVar11 = *(char *)(uVar34 + 0x30);
    cVar12 = *(char *)(uVar34 + 0x31);
    cVar13 = *(char *)(uVar34 + 0x32);
    cVar14 = *(char *)(uVar34 + 0x33);
    cVar15 = *(char *)(uVar34 + 0x34);
    cVar16 = *(char *)(uVar34 + 0x35);
    cVar17 = *(char *)(uVar34 + 0x36);
    cVar18 = *(char *)(uVar34 + 0x37);
    cVar19 = *(char *)(uVar34 + 0x38);
    cVar20 = *(char *)(uVar34 + 0x39);
    cVar21 = *(char *)(uVar34 + 0x3a);
    cVar22 = *(char *)(uVar34 + 0x3b);
    cVar23 = *(char *)(uVar34 + 0x3c);
    cVar24 = *(char *)(uVar34 + 0x3d);
    cVar25 = *(char *)(uVar34 + 0x3e);
    bVar123 = *(byte *)(uVar34 + 0x3f);
    *(char *)((long)pauVar37 + (0x20 - uVar31)) = cVar124;
    *(char *)((long)pauVar37 + (0x21 - uVar31)) = cVar127;
    *(char *)((long)pauVar37 + (0x22 - uVar31)) = cVar130;
    *(char *)((long)pauVar37 + (0x23 - uVar31)) = cVar133;
    *(char *)((long)pauVar37 + (0x24 - uVar31)) = cVar136;
    *(char *)((long)pauVar37 + (0x25 - uVar31)) = cVar139;
    *(char *)((long)pauVar37 + (0x26 - uVar31)) = cVar142;
    *(char *)((long)pauVar37 + (0x27 - uVar31)) = cVar145;
    *(char *)((long)pauVar37 + (0x28 - uVar31)) = cVar148;
    *(char *)((long)pauVar37 + (0x29 - uVar31)) = cVar151;
    *(char *)((long)pauVar37 + (0x2a - uVar31)) = cVar154;
    *(char *)((long)pauVar37 + (0x2b - uVar31)) = cVar157;
    *(char *)((long)pauVar37 + (0x2c - uVar31)) = cVar160;
    *(char *)((long)pauVar37 + (0x2d - uVar31)) = cVar163;
    *(char *)((long)pauVar37 + (0x2e - uVar31)) = cVar166;
    *(char *)((long)pauVar37 + (0x2f - uVar31)) = cVar169;
    auVar47[0] = -(auVar46[0] == cVar11);
    auVar47[1] = -(auVar46[1] == cVar12);
    auVar47[2] = -(auVar46[2] == cVar13);
    auVar47[3] = -(auVar46[3] == cVar14);
    auVar47[4] = -(auVar46[4] == cVar15);
    auVar47[5] = -(auVar46[5] == cVar16);
    auVar47[6] = -(auVar46[6] == cVar17);
    auVar47[7] = -(auVar46[7] == cVar18);
    auVar47[8] = -(auVar46[8] == cVar19);
    auVar47[9] = -(auVar46[9] == cVar20);
    auVar47[10] = -(auVar46[10] == cVar21);
    auVar47[0xb] = -(auVar46[0xb] == cVar22);
    auVar47[0xc] = -(auVar46[0xc] == cVar23);
    auVar47[0xd] = -(auVar46[0xd] == cVar24);
    auVar47[0xe] = -(auVar46[0xe] == cVar25);
    auVar47[0xf] = -(auVar46[0xf] == bVar123);
    uVar32 = (ulong)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                            (ushort)(auVar47[0xf] >> 7) << 0xf);
    lVar27 = 0x30;
    if (uVar32 == 0) {
      cVar124 = *(char *)(uVar34 + 0x40);
      cVar127 = *(char *)(uVar34 + 0x41);
      cVar130 = *(char *)(uVar34 + 0x42);
      cVar133 = *(char *)(uVar34 + 0x43);
      cVar136 = *(char *)(uVar34 + 0x44);
      cVar139 = *(char *)(uVar34 + 0x45);
      cVar142 = *(char *)(uVar34 + 0x46);
      cVar145 = *(char *)(uVar34 + 0x47);
      cVar148 = *(char *)(uVar34 + 0x48);
      cVar151 = *(char *)(uVar34 + 0x49);
      cVar154 = *(char *)(uVar34 + 0x4a);
      cVar157 = *(char *)(uVar34 + 0x4b);
      cVar160 = *(char *)(uVar34 + 0x4c);
      cVar163 = *(char *)(uVar34 + 0x4d);
      cVar166 = *(char *)(uVar34 + 0x4e);
      bVar126 = *(byte *)(uVar34 + 0x4f);
      *(char *)((long)pauVar37 + (0x30 - uVar31)) = cVar11;
      *(char *)((long)pauVar37 + (0x31 - uVar31)) = cVar12;
      *(char *)((long)pauVar37 + (0x32 - uVar31)) = cVar13;
      *(char *)((long)pauVar37 + (0x33 - uVar31)) = cVar14;
      *(char *)((long)pauVar37 + (0x34 - uVar31)) = cVar15;
      *(char *)((long)pauVar37 + (0x35 - uVar31)) = cVar16;
      *(char *)((long)pauVar37 + (0x36 - uVar31)) = cVar17;
      *(char *)((long)pauVar37 + (0x37 - uVar31)) = cVar18;
      *(char *)((long)pauVar37 + (0x38 - uVar31)) = cVar19;
      *(char *)((long)pauVar37 + (0x39 - uVar31)) = cVar20;
      *(char *)((long)pauVar37 + (0x3a - uVar31)) = cVar21;
      *(char *)((long)pauVar37 + (0x3b - uVar31)) = cVar22;
      *(char *)((long)pauVar37 + (0x3c - uVar31)) = cVar23;
      *(char *)((long)pauVar37 + (0x3d - uVar31)) = cVar24;
      *(char *)((long)pauVar37 + (0x3e - uVar31)) = cVar25;
      *(byte *)((long)pauVar37 + (0x3f - uVar31)) = bVar123;
      auVar48[0] = -(auVar47[0] == cVar124);
      auVar48[1] = -(auVar47[1] == cVar127);
      auVar48[2] = -(auVar47[2] == cVar130);
      auVar48[3] = -(auVar47[3] == cVar133);
      auVar48[4] = -(auVar47[4] == cVar136);
      auVar48[5] = -(auVar47[5] == cVar139);
      auVar48[6] = -(auVar47[6] == cVar142);
      auVar48[7] = -(auVar47[7] == cVar145);
      auVar48[8] = -(auVar47[8] == cVar148);
      auVar48[9] = -(auVar47[9] == cVar151);
      auVar48[10] = -(auVar47[10] == cVar154);
      auVar48[0xb] = -(auVar47[0xb] == cVar157);
      auVar48[0xc] = -(auVar47[0xc] == cVar160);
      auVar48[0xd] = -(auVar47[0xd] == cVar163);
      auVar48[0xe] = -(auVar47[0xe] == cVar166);
      auVar48[0xf] = -(auVar47[0xf] == bVar126);
      uVar32 = (ulong)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
                              (ushort)(auVar48[0xf] >> 7) << 0xf);
      lVar27 = 0x40;
      if (uVar32 == 0) {
        cVar169 = *(char *)(uVar34 + 0x50);
        cVar11 = *(char *)(uVar34 + 0x51);
        cVar12 = *(char *)(uVar34 + 0x52);
        cVar13 = *(char *)(uVar34 + 0x53);
        cVar14 = *(char *)(uVar34 + 0x54);
        cVar15 = *(char *)(uVar34 + 0x55);
        cVar16 = *(char *)(uVar34 + 0x56);
        cVar17 = *(char *)(uVar34 + 0x57);
        cVar18 = *(char *)(uVar34 + 0x58);
        cVar19 = *(char *)(uVar34 + 0x59);
        cVar20 = *(char *)(uVar34 + 0x5a);
        cVar21 = *(char *)(uVar34 + 0x5b);
        cVar22 = *(char *)(uVar34 + 0x5c);
        cVar23 = *(char *)(uVar34 + 0x5d);
        cVar24 = *(char *)(uVar34 + 0x5e);
        bVar123 = *(byte *)(uVar34 + 0x5f);
        *(char *)((long)pauVar37 + (0x40 - uVar31)) = cVar124;
        *(char *)((long)pauVar37 + (0x41 - uVar31)) = cVar127;
        *(char *)((long)pauVar37 + (0x42 - uVar31)) = cVar130;
        *(char *)((long)pauVar37 + (0x43 - uVar31)) = cVar133;
        *(char *)((long)pauVar37 + (0x44 - uVar31)) = cVar136;
        *(char *)((long)pauVar37 + (0x45 - uVar31)) = cVar139;
        *(char *)((long)pauVar37 + (0x46 - uVar31)) = cVar142;
        *(char *)((long)pauVar37 + (0x47 - uVar31)) = cVar145;
        *(char *)((long)pauVar37 + (0x48 - uVar31)) = cVar148;
        *(char *)((long)pauVar37 + (0x49 - uVar31)) = cVar151;
        *(char *)((long)pauVar37 + (0x4a - uVar31)) = cVar154;
        *(char *)((long)pauVar37 + (0x4b - uVar31)) = cVar157;
        *(char *)((long)pauVar37 + (0x4c - uVar31)) = cVar160;
        *(char *)((long)pauVar37 + (0x4d - uVar31)) = cVar163;
        *(char *)((long)pauVar37 + (0x4e - uVar31)) = cVar166;
        *(byte *)((long)pauVar37 + (0x4f - uVar31)) = bVar126;
        auVar49[0] = -(auVar48[0] == cVar169);
        auVar49[1] = -(auVar48[1] == cVar11);
        auVar49[2] = -(auVar48[2] == cVar12);
        auVar49[3] = -(auVar48[3] == cVar13);
        auVar49[4] = -(auVar48[4] == cVar14);
        auVar49[5] = -(auVar48[5] == cVar15);
        auVar49[6] = -(auVar48[6] == cVar16);
        auVar49[7] = -(auVar48[7] == cVar17);
        auVar49[8] = -(auVar48[8] == cVar18);
        auVar49[9] = -(auVar48[9] == cVar19);
        auVar49[10] = -(auVar48[10] == cVar20);
        auVar49[0xb] = -(auVar48[0xb] == cVar21);
        auVar49[0xc] = -(auVar48[0xc] == cVar22);
        auVar49[0xd] = -(auVar48[0xd] == cVar23);
        auVar49[0xe] = -(auVar48[0xe] == cVar24);
        auVar49[0xf] = -(auVar48[0xf] == bVar123);
        uVar32 = (ulong)(ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                                (ushort)(auVar49[0xf] >> 7) << 0xf);
        lVar27 = 0x50;
        if (uVar32 == 0) {
          cVar124 = *(char *)(uVar34 + 0x60);
          cVar127 = *(char *)(uVar34 + 0x61);
          cVar130 = *(char *)(uVar34 + 0x62);
          cVar133 = *(char *)(uVar34 + 99);
          cVar136 = *(char *)(uVar34 + 100);
          cVar139 = *(char *)(uVar34 + 0x65);
          cVar142 = *(char *)(uVar34 + 0x66);
          cVar145 = *(char *)(uVar34 + 0x67);
          cVar148 = *(char *)(uVar34 + 0x68);
          cVar151 = *(char *)(uVar34 + 0x69);
          cVar154 = *(char *)(uVar34 + 0x6a);
          cVar157 = *(char *)(uVar34 + 0x6b);
          cVar160 = *(char *)(uVar34 + 0x6c);
          cVar163 = *(char *)(uVar34 + 0x6d);
          cVar166 = *(char *)(uVar34 + 0x6e);
          bVar126 = *(byte *)(uVar34 + 0x6f);
          *(char *)((long)pauVar37 + (0x50 - uVar31)) = cVar169;
          *(char *)((long)pauVar37 + (0x51 - uVar31)) = cVar11;
          *(char *)((long)pauVar37 + (0x52 - uVar31)) = cVar12;
          *(char *)((long)pauVar37 + (0x53 - uVar31)) = cVar13;
          *(char *)((long)pauVar37 + (0x54 - uVar31)) = cVar14;
          *(char *)((long)pauVar37 + (0x55 - uVar31)) = cVar15;
          *(char *)((long)pauVar37 + (0x56 - uVar31)) = cVar16;
          *(char *)((long)pauVar37 + (0x57 - uVar31)) = cVar17;
          *(char *)((long)pauVar37 + (0x58 - uVar31)) = cVar18;
          *(char *)((long)pauVar37 + (0x59 - uVar31)) = cVar19;
          *(char *)((long)pauVar37 + (0x5a - uVar31)) = cVar20;
          *(char *)((long)pauVar37 + (0x5b - uVar31)) = cVar21;
          *(char *)((long)pauVar37 + (0x5c - uVar31)) = cVar22;
          *(char *)((long)pauVar37 + (0x5d - uVar31)) = cVar23;
          *(char *)((long)pauVar37 + (0x5e - uVar31)) = cVar24;
          *(byte *)((long)pauVar37 + (0x5f - uVar31)) = bVar123;
          auVar50[0] = -(auVar49[0] == cVar124);
          auVar50[1] = -(auVar49[1] == cVar127);
          auVar50[2] = -(auVar49[2] == cVar130);
          auVar50[3] = -(auVar49[3] == cVar133);
          auVar50[4] = -(auVar49[4] == cVar136);
          auVar50[5] = -(auVar49[5] == cVar139);
          auVar50[6] = -(auVar49[6] == cVar142);
          auVar50[7] = -(auVar49[7] == cVar145);
          auVar50[8] = -(auVar49[8] == cVar148);
          auVar50[9] = -(auVar49[9] == cVar151);
          auVar50[10] = -(auVar49[10] == cVar154);
          auVar50[0xb] = -(auVar49[0xb] == cVar157);
          auVar50[0xc] = -(auVar49[0xc] == cVar160);
          auVar50[0xd] = -(auVar49[0xd] == cVar163);
          auVar50[0xe] = -(auVar49[0xe] == cVar166);
          auVar50[0xf] = -(auVar49[0xf] == bVar126);
          uVar32 = (ulong)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                                  (ushort)(auVar50[0xf] >> 7) << 0xf);
          lVar27 = 0x60;
          if (uVar32 == 0) {
            cVar169 = *(char *)(uVar34 + 0x70);
            cVar11 = *(char *)(uVar34 + 0x71);
            cVar12 = *(char *)(uVar34 + 0x72);
            cVar13 = *(char *)(uVar34 + 0x73);
            cVar14 = *(char *)(uVar34 + 0x74);
            cVar15 = *(char *)(uVar34 + 0x75);
            cVar16 = *(char *)(uVar34 + 0x76);
            cVar17 = *(char *)(uVar34 + 0x77);
            cVar18 = *(char *)(uVar34 + 0x78);
            cVar19 = *(char *)(uVar34 + 0x79);
            cVar20 = *(char *)(uVar34 + 0x7a);
            cVar21 = *(char *)(uVar34 + 0x7b);
            cVar22 = *(char *)(uVar34 + 0x7c);
            cVar23 = *(char *)(uVar34 + 0x7d);
            cVar24 = *(char *)(uVar34 + 0x7e);
            bVar123 = *(byte *)(uVar34 + 0x7f);
            *(char *)((long)pauVar37 + (0x60 - uVar31)) = cVar124;
            *(char *)((long)pauVar37 + (0x61 - uVar31)) = cVar127;
            *(char *)((long)pauVar37 + (0x62 - uVar31)) = cVar130;
            *(char *)((long)pauVar37 + (99 - uVar31)) = cVar133;
            *(char *)((long)pauVar37 + (100 - uVar31)) = cVar136;
            *(char *)((long)pauVar37 + (0x65 - uVar31)) = cVar139;
            *(char *)((long)pauVar37 + (0x66 - uVar31)) = cVar142;
            *(char *)((long)pauVar37 + (0x67 - uVar31)) = cVar145;
            *(char *)((long)pauVar37 + (0x68 - uVar31)) = cVar148;
            *(char *)((long)pauVar37 + (0x69 - uVar31)) = cVar151;
            *(char *)((long)pauVar37 + (0x6a - uVar31)) = cVar154;
            *(char *)((long)pauVar37 + (0x6b - uVar31)) = cVar157;
            *(char *)((long)pauVar37 + (0x6c - uVar31)) = cVar160;
            *(char *)((long)pauVar37 + (0x6d - uVar31)) = cVar163;
            *(char *)((long)pauVar37 + (0x6e - uVar31)) = cVar166;
            *(byte *)((long)pauVar37 + (0x6f - uVar31)) = bVar126;
            auVar51[0] = -(auVar50[0] == cVar169);
            auVar51[1] = -(auVar50[1] == cVar11);
            auVar51[2] = -(auVar50[2] == cVar12);
            auVar51[3] = -(auVar50[3] == cVar13);
            auVar51[4] = -(auVar50[4] == cVar14);
            auVar51[5] = -(auVar50[5] == cVar15);
            auVar51[6] = -(auVar50[6] == cVar16);
            auVar51[7] = -(auVar50[7] == cVar17);
            auVar51[8] = -(auVar50[8] == cVar18);
            auVar51[9] = -(auVar50[9] == cVar19);
            auVar51[10] = -(auVar50[10] == cVar20);
            auVar51[0xb] = -(auVar50[0xb] == cVar21);
            auVar51[0xc] = -(auVar50[0xc] == cVar22);
            auVar51[0xd] = -(auVar50[0xd] == cVar23);
            auVar51[0xe] = -(auVar50[0xe] == cVar24);
            auVar51[0xf] = -(auVar50[0xf] == bVar123);
            uVar32 = (ulong)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                                    (ushort)(auVar51[0xf] >> 7) << 0xf);
            lVar27 = 0x70;
            if (uVar32 == 0) {
              *(char *)((long)pauVar37 + (0x70 - uVar31)) = cVar169;
              *(char *)((long)pauVar37 + (0x71 - uVar31)) = cVar11;
              *(char *)((long)pauVar37 + (0x72 - uVar31)) = cVar12;
              *(char *)((long)pauVar37 + (0x73 - uVar31)) = cVar13;
              *(char *)((long)pauVar37 + (0x74 - uVar31)) = cVar14;
              *(char *)((long)pauVar37 + (0x75 - uVar31)) = cVar15;
              *(char *)((long)pauVar37 + (0x76 - uVar31)) = cVar16;
              *(char *)((long)pauVar37 + (0x77 - uVar31)) = cVar17;
              *(char *)((long)pauVar37 + (0x78 - uVar31)) = cVar18;
              *(char *)((long)pauVar37 + (0x79 - uVar31)) = cVar19;
              *(char *)((long)pauVar37 + (0x7a - uVar31)) = cVar20;
              *(char *)((long)pauVar37 + (0x7b - uVar31)) = cVar21;
              *(char *)((long)pauVar37 + (0x7c - uVar31)) = cVar22;
              *(char *)((long)pauVar37 + (0x7d - uVar31)) = cVar23;
              *(char *)((long)pauVar37 + (0x7e - uVar31)) = cVar24;
              *(byte *)((long)pauVar37 + (0x7f - uVar31)) = bVar123;
              pbVar35 = (byte *)(uVar34 + 0x80 & 0xffffffffffffffc0);
              pbVar36 = (byte *)((long)pauVar37 + (-(uVar34 - (long)pbVar35) - uVar31));
              bVar123 = *pbVar35;
              bVar126 = pbVar35[1];
              bVar129 = pbVar35[2];
              bVar132 = pbVar35[3];
              bVar135 = pbVar35[4];
              bVar138 = pbVar35[5];
              bVar141 = pbVar35[6];
              bVar144 = pbVar35[7];
              bVar147 = pbVar35[8];
              bVar150 = pbVar35[9];
              bVar153 = pbVar35[10];
              bVar156 = pbVar35[0xb];
              bVar159 = pbVar35[0xc];
              bVar162 = pbVar35[0xd];
              bVar165 = pbVar35[0xe];
              bVar168 = pbVar35[0xf];
              bVar125 = pbVar35[0x10];
              bVar128 = pbVar35[0x11];
              bVar131 = pbVar35[0x12];
              bVar134 = pbVar35[0x13];
              bVar137 = pbVar35[0x14];
              bVar140 = pbVar35[0x15];
              bVar143 = pbVar35[0x16];
              bVar146 = pbVar35[0x17];
              bVar149 = pbVar35[0x18];
              bVar152 = pbVar35[0x19];
              bVar155 = pbVar35[0x1a];
              bVar158 = pbVar35[0x1b];
              bVar161 = pbVar35[0x1c];
              bVar164 = pbVar35[0x1d];
              bVar167 = pbVar35[0x1e];
              bVar170 = pbVar35[0x1f];
              bVar107 = pbVar35[0x20];
              bVar108 = pbVar35[0x21];
              bVar109 = pbVar35[0x22];
              bVar110 = pbVar35[0x23];
              bVar111 = pbVar35[0x24];
              bVar112 = pbVar35[0x25];
              bVar113 = pbVar35[0x26];
              bVar114 = pbVar35[0x27];
              bVar115 = pbVar35[0x28];
              bVar116 = pbVar35[0x29];
              bVar117 = pbVar35[0x2a];
              bVar118 = pbVar35[0x2b];
              bVar119 = pbVar35[0x2c];
              bVar120 = pbVar35[0x2d];
              bVar121 = pbVar35[0x2e];
              bVar122 = pbVar35[0x2f];
              bVar171 = pbVar35[0x30];
              bVar172 = pbVar35[0x31];
              bVar173 = pbVar35[0x32];
              bVar174 = pbVar35[0x33];
              bVar175 = pbVar35[0x34];
              bVar176 = pbVar35[0x35];
              bVar177 = pbVar35[0x36];
              bVar178 = pbVar35[0x37];
              bVar179 = pbVar35[0x38];
              bVar180 = pbVar35[0x39];
              bVar181 = pbVar35[0x3a];
              bVar182 = pbVar35[0x3b];
              bVar183 = pbVar35[0x3c];
              bVar184 = pbVar35[0x3d];
              bVar185 = pbVar35[0x3e];
              bVar186 = pbVar35[0x3f];
              bVar63 = (bVar125 < bVar123) * bVar125 | (bVar125 >= bVar123) * bVar123;
              bVar69 = (bVar128 < bVar126) * bVar128 | (bVar128 >= bVar126) * bVar126;
              bVar70 = (bVar131 < bVar129) * bVar131 | (bVar131 >= bVar129) * bVar129;
              bVar71 = (bVar134 < bVar132) * bVar134 | (bVar134 >= bVar132) * bVar132;
              bVar72 = (bVar137 < bVar135) * bVar137 | (bVar137 >= bVar135) * bVar135;
              bVar73 = (bVar140 < bVar138) * bVar140 | (bVar140 >= bVar138) * bVar138;
              bVar74 = (bVar143 < bVar141) * bVar143 | (bVar143 >= bVar141) * bVar141;
              bVar75 = (bVar146 < bVar144) * bVar146 | (bVar146 >= bVar144) * bVar144;
              bVar76 = (bVar149 < bVar147) * bVar149 | (bVar149 >= bVar147) * bVar147;
              bVar77 = (bVar152 < bVar150) * bVar152 | (bVar152 >= bVar150) * bVar150;
              bVar78 = (bVar155 < bVar153) * bVar155 | (bVar155 >= bVar153) * bVar153;
              bVar79 = (bVar158 < bVar156) * bVar158 | (bVar158 >= bVar156) * bVar156;
              bVar80 = (bVar161 < bVar159) * bVar161 | (bVar161 >= bVar159) * bVar159;
              bVar81 = (bVar164 < bVar162) * bVar164 | (bVar164 >= bVar162) * bVar162;
              bVar82 = (bVar167 < bVar165) * bVar167 | (bVar167 >= bVar165) * bVar165;
              bVar83 = (bVar170 < bVar168) * bVar170 | (bVar170 >= bVar168) * bVar168;
              bVar84 = (bVar171 < bVar107) * bVar171 | (bVar171 >= bVar107) * bVar107;
              bVar92 = (bVar172 < bVar108) * bVar172 | (bVar172 >= bVar108) * bVar108;
              bVar93 = (bVar173 < bVar109) * bVar173 | (bVar173 >= bVar109) * bVar109;
              bVar94 = (bVar174 < bVar110) * bVar174 | (bVar174 >= bVar110) * bVar110;
              bVar95 = (bVar175 < bVar111) * bVar175 | (bVar175 >= bVar111) * bVar111;
              bVar96 = (bVar176 < bVar112) * bVar176 | (bVar176 >= bVar112) * bVar112;
              bVar97 = (bVar177 < bVar113) * bVar177 | (bVar177 >= bVar113) * bVar113;
              bVar98 = (bVar178 < bVar114) * bVar178 | (bVar178 >= bVar114) * bVar114;
              bVar99 = (bVar179 < bVar115) * bVar179 | (bVar179 >= bVar115) * bVar115;
              bVar100 = (bVar180 < bVar116) * bVar180 | (bVar180 >= bVar116) * bVar116;
              bVar101 = (bVar181 < bVar117) * bVar181 | (bVar181 >= bVar117) * bVar117;
              bVar102 = (bVar182 < bVar118) * bVar182 | (bVar182 >= bVar118) * bVar118;
              bVar103 = (bVar183 < bVar119) * bVar183 | (bVar183 >= bVar119) * bVar119;
              bVar104 = (bVar184 < bVar120) * bVar184 | (bVar184 >= bVar120) * bVar120;
              bVar105 = (bVar185 < bVar121) * bVar185 | (bVar185 >= bVar121) * bVar121;
              bVar106 = (bVar186 < bVar122) * bVar186 | (bVar186 >= bVar122) * bVar122;
              auVar90[0] = -((byte)((bVar63 < bVar84) * bVar63 | (bVar63 >= bVar84) * bVar84) ==
                            auVar51[0]);
              auVar90[1] = -((byte)((bVar69 < bVar92) * bVar69 | (bVar69 >= bVar92) * bVar92) ==
                            auVar51[1]);
              auVar90[2] = -((byte)((bVar70 < bVar93) * bVar70 | (bVar70 >= bVar93) * bVar93) ==
                            auVar51[2]);
              auVar90[3] = -((byte)((bVar71 < bVar94) * bVar71 | (bVar71 >= bVar94) * bVar94) ==
                            auVar51[3]);
              auVar90[4] = -((byte)((bVar72 < bVar95) * bVar72 | (bVar72 >= bVar95) * bVar95) ==
                            auVar51[4]);
              auVar90[5] = -((byte)((bVar73 < bVar96) * bVar73 | (bVar73 >= bVar96) * bVar96) ==
                            auVar51[5]);
              auVar90[6] = -((byte)((bVar74 < bVar97) * bVar74 | (bVar74 >= bVar97) * bVar97) ==
                            auVar51[6]);
              auVar90[7] = -((byte)((bVar75 < bVar98) * bVar75 | (bVar75 >= bVar98) * bVar98) ==
                            auVar51[7]);
              auVar90[8] = -((byte)((bVar76 < bVar99) * bVar76 | (bVar76 >= bVar99) * bVar99) ==
                            auVar51[8]);
              auVar90[9] = -((byte)((bVar77 < bVar100) * bVar77 | (bVar77 >= bVar100) * bVar100) ==
                            auVar51[9]);
              auVar90[10] = -((byte)((bVar78 < bVar101) * bVar78 | (bVar78 >= bVar101) * bVar101) ==
                             auVar51[10]);
              auVar90[0xb] = -((byte)((bVar79 < bVar102) * bVar79 | (bVar79 >= bVar102) * bVar102)
                              == auVar51[0xb]);
              auVar90[0xc] = -((byte)((bVar80 < bVar103) * bVar80 | (bVar80 >= bVar103) * bVar103)
                              == auVar51[0xc]);
              auVar90[0xd] = -((byte)((bVar81 < bVar104) * bVar81 | (bVar81 >= bVar104) * bVar104)
                              == auVar51[0xd]);
              auVar90[0xe] = -((byte)((bVar82 < bVar105) * bVar82 | (bVar82 >= bVar105) * bVar105)
                              == auVar51[0xe]);
              bVar2 = (byte)((bVar83 < bVar106) * bVar83 | (bVar83 >= bVar106) * bVar106) ==
                      auVar51[0xf];
              auVar90[0xf] = -bVar2;
              pbVar29 = pbVar35;
              pbVar28 = pbVar36;
              bVar63 = bVar107;
              bVar69 = bVar108;
              bVar70 = bVar109;
              bVar71 = bVar110;
              bVar72 = bVar111;
              bVar73 = bVar112;
              bVar74 = bVar113;
              bVar75 = bVar114;
              bVar76 = bVar115;
              bVar77 = bVar116;
              bVar78 = bVar117;
              bVar79 = bVar118;
              bVar80 = bVar119;
              bVar81 = bVar120;
              bVar82 = bVar121;
              bVar83 = bVar122;
              if ((((((((((((((((auVar90 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                               (auVar90 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                              (auVar90 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                             (auVar90 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                            (auVar90 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar90 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar90 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar90 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar90 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar90 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar90 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar90 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar90 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar90 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar90 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && !bVar2) {
                do {
                  pbVar36 = pbVar28 + 0x40;
                  pbVar35 = pbVar29 + 0x40;
                  *pbVar28 = bVar123;
                  pbVar28[1] = bVar126;
                  pbVar28[2] = bVar129;
                  pbVar28[3] = bVar132;
                  pbVar28[4] = bVar135;
                  pbVar28[5] = bVar138;
                  pbVar28[6] = bVar141;
                  pbVar28[7] = bVar144;
                  pbVar28[8] = bVar147;
                  pbVar28[9] = bVar150;
                  pbVar28[10] = bVar153;
                  pbVar28[0xb] = bVar156;
                  pbVar28[0xc] = bVar159;
                  pbVar28[0xd] = bVar162;
                  pbVar28[0xe] = bVar165;
                  pbVar28[0xf] = bVar168;
                  bVar123 = *pbVar35;
                  bVar126 = pbVar29[0x41];
                  bVar129 = pbVar29[0x42];
                  bVar132 = pbVar29[0x43];
                  bVar135 = pbVar29[0x44];
                  bVar138 = pbVar29[0x45];
                  bVar141 = pbVar29[0x46];
                  bVar144 = pbVar29[0x47];
                  bVar147 = pbVar29[0x48];
                  bVar150 = pbVar29[0x49];
                  bVar153 = pbVar29[0x4a];
                  bVar156 = pbVar29[0x4b];
                  bVar159 = pbVar29[0x4c];
                  bVar162 = pbVar29[0x4d];
                  bVar165 = pbVar29[0x4e];
                  bVar168 = pbVar29[0x4f];
                  pbVar28[0x10] = bVar125;
                  pbVar28[0x11] = bVar128;
                  pbVar28[0x12] = bVar131;
                  pbVar28[0x13] = bVar134;
                  pbVar28[0x14] = bVar137;
                  pbVar28[0x15] = bVar140;
                  pbVar28[0x16] = bVar143;
                  pbVar28[0x17] = bVar146;
                  pbVar28[0x18] = bVar149;
                  pbVar28[0x19] = bVar152;
                  pbVar28[0x1a] = bVar155;
                  pbVar28[0x1b] = bVar158;
                  pbVar28[0x1c] = bVar161;
                  pbVar28[0x1d] = bVar164;
                  pbVar28[0x1e] = bVar167;
                  pbVar28[0x1f] = bVar170;
                  bVar125 = pbVar29[0x50];
                  bVar128 = pbVar29[0x51];
                  bVar131 = pbVar29[0x52];
                  bVar134 = pbVar29[0x53];
                  bVar137 = pbVar29[0x54];
                  bVar140 = pbVar29[0x55];
                  bVar143 = pbVar29[0x56];
                  bVar146 = pbVar29[0x57];
                  bVar149 = pbVar29[0x58];
                  bVar152 = pbVar29[0x59];
                  bVar155 = pbVar29[0x5a];
                  bVar158 = pbVar29[0x5b];
                  bVar161 = pbVar29[0x5c];
                  bVar164 = pbVar29[0x5d];
                  bVar167 = pbVar29[0x5e];
                  bVar170 = pbVar29[0x5f];
                  bVar84 = (bVar125 < bVar123) * bVar125 | (bVar125 >= bVar123) * bVar123;
                  bVar92 = (bVar128 < bVar126) * bVar128 | (bVar128 >= bVar126) * bVar126;
                  bVar93 = (bVar131 < bVar129) * bVar131 | (bVar131 >= bVar129) * bVar129;
                  bVar94 = (bVar134 < bVar132) * bVar134 | (bVar134 >= bVar132) * bVar132;
                  bVar95 = (bVar137 < bVar135) * bVar137 | (bVar137 >= bVar135) * bVar135;
                  bVar96 = (bVar140 < bVar138) * bVar140 | (bVar140 >= bVar138) * bVar138;
                  bVar97 = (bVar143 < bVar141) * bVar143 | (bVar143 >= bVar141) * bVar141;
                  bVar98 = (bVar146 < bVar144) * bVar146 | (bVar146 >= bVar144) * bVar144;
                  bVar99 = (bVar149 < bVar147) * bVar149 | (bVar149 >= bVar147) * bVar147;
                  bVar100 = (bVar152 < bVar150) * bVar152 | (bVar152 >= bVar150) * bVar150;
                  bVar101 = (bVar155 < bVar153) * bVar155 | (bVar155 >= bVar153) * bVar153;
                  bVar102 = (bVar158 < bVar156) * bVar158 | (bVar158 >= bVar156) * bVar156;
                  bVar103 = (bVar161 < bVar159) * bVar161 | (bVar161 >= bVar159) * bVar159;
                  bVar104 = (bVar164 < bVar162) * bVar164 | (bVar164 >= bVar162) * bVar162;
                  bVar105 = (bVar167 < bVar165) * bVar167 | (bVar167 >= bVar165) * bVar165;
                  bVar106 = (bVar170 < bVar168) * bVar170 | (bVar170 >= bVar168) * bVar168;
                  bVar107 = pbVar29[0x60];
                  bVar108 = pbVar29[0x61];
                  bVar109 = pbVar29[0x62];
                  bVar110 = pbVar29[99];
                  bVar111 = pbVar29[100];
                  bVar112 = pbVar29[0x65];
                  bVar113 = pbVar29[0x66];
                  bVar114 = pbVar29[0x67];
                  bVar115 = pbVar29[0x68];
                  bVar116 = pbVar29[0x69];
                  bVar117 = pbVar29[0x6a];
                  bVar118 = pbVar29[0x6b];
                  bVar119 = pbVar29[0x6c];
                  bVar120 = pbVar29[0x6d];
                  bVar121 = pbVar29[0x6e];
                  bVar122 = pbVar29[0x6f];
                  pbVar28[0x20] = bVar63;
                  pbVar28[0x21] = bVar69;
                  pbVar28[0x22] = bVar70;
                  pbVar28[0x23] = bVar71;
                  pbVar28[0x24] = bVar72;
                  pbVar28[0x25] = bVar73;
                  pbVar28[0x26] = bVar74;
                  pbVar28[0x27] = bVar75;
                  pbVar28[0x28] = bVar76;
                  pbVar28[0x29] = bVar77;
                  pbVar28[0x2a] = bVar78;
                  pbVar28[0x2b] = bVar79;
                  pbVar28[0x2c] = bVar80;
                  pbVar28[0x2d] = bVar81;
                  pbVar28[0x2e] = bVar82;
                  pbVar28[0x2f] = bVar83;
                  pbVar28[0x30] = bVar171;
                  pbVar28[0x31] = bVar172;
                  pbVar28[0x32] = bVar173;
                  pbVar28[0x33] = bVar174;
                  pbVar28[0x34] = bVar175;
                  pbVar28[0x35] = bVar176;
                  pbVar28[0x36] = bVar177;
                  pbVar28[0x37] = bVar178;
                  pbVar28[0x38] = bVar179;
                  pbVar28[0x39] = bVar180;
                  pbVar28[0x3a] = bVar181;
                  pbVar28[0x3b] = bVar182;
                  pbVar28[0x3c] = bVar183;
                  pbVar28[0x3d] = bVar184;
                  pbVar28[0x3e] = bVar185;
                  pbVar28[0x3f] = bVar186;
                  bVar171 = pbVar29[0x70];
                  bVar172 = pbVar29[0x71];
                  bVar173 = pbVar29[0x72];
                  bVar174 = pbVar29[0x73];
                  bVar175 = pbVar29[0x74];
                  bVar176 = pbVar29[0x75];
                  bVar177 = pbVar29[0x76];
                  bVar178 = pbVar29[0x77];
                  bVar179 = pbVar29[0x78];
                  bVar180 = pbVar29[0x79];
                  bVar181 = pbVar29[0x7a];
                  bVar182 = pbVar29[0x7b];
                  bVar183 = pbVar29[0x7c];
                  bVar184 = pbVar29[0x7d];
                  bVar185 = pbVar29[0x7e];
                  bVar186 = pbVar29[0x7f];
                  bVar63 = (bVar171 < bVar107) * bVar171 | (bVar171 >= bVar107) * bVar107;
                  bVar69 = (bVar172 < bVar108) * bVar172 | (bVar172 >= bVar108) * bVar108;
                  bVar70 = (bVar173 < bVar109) * bVar173 | (bVar173 >= bVar109) * bVar109;
                  bVar71 = (bVar174 < bVar110) * bVar174 | (bVar174 >= bVar110) * bVar110;
                  bVar72 = (bVar175 < bVar111) * bVar175 | (bVar175 >= bVar111) * bVar111;
                  bVar73 = (bVar176 < bVar112) * bVar176 | (bVar176 >= bVar112) * bVar112;
                  bVar74 = (bVar177 < bVar113) * bVar177 | (bVar177 >= bVar113) * bVar113;
                  bVar75 = (bVar178 < bVar114) * bVar178 | (bVar178 >= bVar114) * bVar114;
                  bVar76 = (bVar179 < bVar115) * bVar179 | (bVar179 >= bVar115) * bVar115;
                  bVar77 = (bVar180 < bVar116) * bVar180 | (bVar180 >= bVar116) * bVar116;
                  bVar78 = (bVar181 < bVar117) * bVar181 | (bVar181 >= bVar117) * bVar117;
                  bVar79 = (bVar182 < bVar118) * bVar182 | (bVar182 >= bVar118) * bVar118;
                  bVar80 = (bVar183 < bVar119) * bVar183 | (bVar183 >= bVar119) * bVar119;
                  bVar81 = (bVar184 < bVar120) * bVar184 | (bVar184 >= bVar120) * bVar120;
                  bVar82 = (bVar185 < bVar121) * bVar185 | (bVar185 >= bVar121) * bVar121;
                  bVar83 = (bVar186 < bVar122) * bVar186 | (bVar186 >= bVar122) * bVar122;
                  auVar91[0] = -((byte)((bVar84 < bVar63) * bVar84 | (bVar84 >= bVar63) * bVar63) ==
                                auVar51[0]);
                  auVar91[1] = -((byte)((bVar92 < bVar69) * bVar92 | (bVar92 >= bVar69) * bVar69) ==
                                auVar51[1]);
                  auVar91[2] = -((byte)((bVar93 < bVar70) * bVar93 | (bVar93 >= bVar70) * bVar70) ==
                                auVar51[2]);
                  auVar91[3] = -((byte)((bVar94 < bVar71) * bVar94 | (bVar94 >= bVar71) * bVar71) ==
                                auVar51[3]);
                  auVar91[4] = -((byte)((bVar95 < bVar72) * bVar95 | (bVar95 >= bVar72) * bVar72) ==
                                auVar51[4]);
                  auVar91[5] = -((byte)((bVar96 < bVar73) * bVar96 | (bVar96 >= bVar73) * bVar73) ==
                                auVar51[5]);
                  auVar91[6] = -((byte)((bVar97 < bVar74) * bVar97 | (bVar97 >= bVar74) * bVar74) ==
                                auVar51[6]);
                  auVar91[7] = -((byte)((bVar98 < bVar75) * bVar98 | (bVar98 >= bVar75) * bVar75) ==
                                auVar51[7]);
                  auVar91[8] = -((byte)((bVar99 < bVar76) * bVar99 | (bVar99 >= bVar76) * bVar76) ==
                                auVar51[8]);
                  auVar91[9] = -((byte)((bVar100 < bVar77) * bVar100 | (bVar100 >= bVar77) * bVar77)
                                == auVar51[9]);
                  auVar91[10] = -((byte)((bVar101 < bVar78) * bVar101 | (bVar101 >= bVar78) * bVar78
                                        ) == auVar51[10]);
                  auVar91[0xb] = -((byte)((bVar102 < bVar79) * bVar102 |
                                         (bVar102 >= bVar79) * bVar79) == auVar51[0xb]);
                  auVar91[0xc] = -((byte)((bVar103 < bVar80) * bVar103 |
                                         (bVar103 >= bVar80) * bVar80) == auVar51[0xc]);
                  auVar91[0xd] = -((byte)((bVar104 < bVar81) * bVar104 |
                                         (bVar104 >= bVar81) * bVar81) == auVar51[0xd]);
                  auVar91[0xe] = -((byte)((bVar105 < bVar82) * bVar105 |
                                         (bVar105 >= bVar82) * bVar82) == auVar51[0xe]);
                  auVar91[0xf] = -((byte)((bVar106 < bVar83) * bVar106 |
                                         (bVar106 >= bVar83) * bVar83) == auVar51[0xf]);
                  pbVar29 = pbVar35;
                  pbVar28 = pbVar36;
                  bVar63 = bVar107;
                  bVar69 = bVar108;
                  bVar70 = bVar109;
                  bVar71 = bVar110;
                  bVar72 = bVar111;
                  bVar73 = bVar112;
                  bVar74 = bVar113;
                  bVar75 = bVar114;
                  bVar76 = bVar115;
                  bVar77 = bVar116;
                  bVar78 = bVar117;
                  bVar79 = bVar118;
                  bVar80 = bVar119;
                  bVar81 = bVar120;
                  bVar82 = bVar121;
                  bVar83 = bVar122;
                } while ((((((((((((((((auVar91 >> 7 & (undefined1  [16])0x1) ==
                                       (undefined1  [16])0x0 &&
                                      (auVar91 >> 0xf & (undefined1  [16])0x1) ==
                                      (undefined1  [16])0x0) &&
                                     (auVar91 >> 0x17 & (undefined1  [16])0x1) ==
                                     (undefined1  [16])0x0) &&
                                    (auVar91 >> 0x1f & (undefined1  [16])0x1) ==
                                    (undefined1  [16])0x0) &&
                                   (auVar91 >> 0x27 & (undefined1  [16])0x1) ==
                                   (undefined1  [16])0x0) &&
                                  (auVar91 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0
                                  ) && (auVar91 >> 0x37 & (undefined1  [16])0x1) ==
                                       (undefined1  [16])0x0) &&
                                (auVar91 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0)
                               && (auVar91 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0
                               ) && (auVar91 >> 0x4f & (undefined1  [16])0x1) ==
                                    (undefined1  [16])0x0) &&
                             (auVar91 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                            (auVar91 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar91 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar91 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar91 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         -1 < auVar91[0xf]);
              }
              auVar52[0] = -(auVar51[0] == bVar123);
              auVar52[1] = -(auVar51[1] == bVar126);
              auVar52[2] = -(auVar51[2] == bVar129);
              auVar52[3] = -(auVar51[3] == bVar132);
              auVar52[4] = -(auVar51[4] == bVar135);
              auVar52[5] = -(auVar51[5] == bVar138);
              auVar52[6] = -(auVar51[6] == bVar141);
              auVar52[7] = -(auVar51[7] == bVar144);
              auVar52[8] = -(auVar51[8] == bVar147);
              auVar52[9] = -(auVar51[9] == bVar150);
              auVar52[10] = -(auVar51[10] == bVar153);
              auVar52[0xb] = -(auVar51[0xb] == bVar156);
              auVar52[0xc] = -(auVar51[0xc] == bVar159);
              auVar52[0xd] = -(auVar51[0xd] == bVar162);
              auVar52[0xe] = -(auVar51[0xe] == bVar165);
              auVar52[0xf] = -(auVar51[0xf] == bVar168);
              auVar61[0] = -(bVar125 == 0);
              auVar61[1] = -(bVar128 == 0);
              auVar61[2] = -(bVar131 == 0);
              auVar61[3] = -(bVar134 == 0);
              auVar61[4] = -(bVar137 == 0);
              auVar61[5] = -(bVar140 == 0);
              auVar61[6] = -(bVar143 == 0);
              auVar61[7] = -(bVar146 == 0);
              auVar61[8] = -(bVar149 == 0);
              auVar61[9] = -(bVar152 == 0);
              auVar61[10] = -(bVar155 == 0);
              auVar61[0xb] = -(bVar158 == 0);
              auVar61[0xc] = -(bVar161 == 0);
              auVar61[0xd] = -(bVar164 == 0);
              auVar61[0xe] = -(bVar167 == 0);
              auVar61[0xf] = -(bVar170 == 0);
              uVar3 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                      (ushort)(auVar52[0xf] >> 7) << 0xf;
              uVar4 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar61[0xf] >> 7) << 0xf;
              if (uVar3 != 0) {
                lVar27 = 0;
                if (uVar3 != 0) {
                  for (; (uVar3 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                  }
                }
                    /* WARNING: Could not recover jumptable at 0x00740193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))();
                return;
              }
              if (uVar4 != 0) {
                lVar27 = 0;
                if (uVar4 != 0) {
                  for (; (uVar4 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                  }
                }
                *pbVar36 = bVar123;
                pbVar36[1] = bVar126;
                pbVar36[2] = bVar129;
                pbVar36[3] = bVar132;
                pbVar36[4] = bVar135;
                pbVar36[5] = bVar138;
                pbVar36[6] = bVar141;
                pbVar36[7] = bVar144;
                pbVar36[8] = bVar147;
                pbVar36[9] = bVar150;
                pbVar36[10] = bVar153;
                pbVar36[0xb] = bVar156;
                pbVar36[0xc] = bVar159;
                pbVar36[0xd] = bVar162;
                pbVar36[0xe] = bVar165;
                pbVar36[0xf] = bVar168;
                    /* WARNING: Could not recover jumptable at 0x007401bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))
                          (pbVar36 + 0x10,pbVar35 + 0x10,lVar27,
                           &DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4));
                return;
              }
              auVar53[0] = -(auVar52[0] == bVar107);
              auVar53[1] = -(auVar52[1] == bVar108);
              auVar53[2] = -(auVar52[2] == bVar109);
              auVar53[3] = -(auVar52[3] == bVar110);
              auVar53[4] = -(auVar52[4] == bVar111);
              auVar53[5] = -(auVar52[5] == bVar112);
              auVar53[6] = -(auVar52[6] == bVar113);
              auVar53[7] = -(auVar52[7] == bVar114);
              auVar53[8] = -(auVar52[8] == bVar115);
              auVar53[9] = -(auVar52[9] == bVar116);
              auVar53[10] = -(auVar52[10] == bVar117);
              auVar53[0xb] = -(auVar52[0xb] == bVar118);
              auVar53[0xc] = -(auVar52[0xc] == bVar119);
              auVar53[0xd] = -(auVar52[0xd] == bVar120);
              auVar53[0xe] = -(auVar52[0xe] == bVar121);
              auVar53[0xf] = -(auVar52[0xf] == bVar122);
              auVar62[0] = -(auVar61[0] == bVar171);
              auVar62[1] = -(auVar61[1] == bVar172);
              auVar62[2] = -(auVar61[2] == bVar173);
              auVar62[3] = -(auVar61[3] == bVar174);
              auVar62[4] = -(auVar61[4] == bVar175);
              auVar62[5] = -(auVar61[5] == bVar176);
              auVar62[6] = -(auVar61[6] == bVar177);
              auVar62[7] = -(auVar61[7] == bVar178);
              auVar62[8] = -(auVar61[8] == bVar179);
              auVar62[9] = -(auVar61[9] == bVar180);
              auVar62[10] = -(auVar61[10] == bVar181);
              auVar62[0xb] = -(auVar61[0xb] == bVar182);
              auVar62[0xc] = -(auVar61[0xc] == bVar183);
              auVar62[0xd] = -(auVar61[0xd] == bVar184);
              auVar62[0xe] = -(auVar61[0xe] == bVar185);
              auVar62[0xf] = -(auVar61[0xf] == bVar186);
              uVar3 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                      (ushort)(auVar53[0xf] >> 7) << 0xf;
              uVar4 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar62[0xf] >> 7) << 0xf;
              if (uVar3 != 0) {
                lVar27 = 0;
                if (uVar3 != 0) {
                  for (; (uVar3 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                  }
                }
                *pbVar36 = bVar123;
                pbVar36[1] = bVar126;
                pbVar36[2] = bVar129;
                pbVar36[3] = bVar132;
                pbVar36[4] = bVar135;
                pbVar36[5] = bVar138;
                pbVar36[6] = bVar141;
                pbVar36[7] = bVar144;
                pbVar36[8] = bVar147;
                pbVar36[9] = bVar150;
                pbVar36[10] = bVar153;
                pbVar36[0xb] = bVar156;
                pbVar36[0xc] = bVar159;
                pbVar36[0xd] = bVar162;
                pbVar36[0xe] = bVar165;
                pbVar36[0xf] = bVar168;
                pbVar36[0x10] = bVar125;
                pbVar36[0x11] = bVar128;
                pbVar36[0x12] = bVar131;
                pbVar36[0x13] = bVar134;
                pbVar36[0x14] = bVar137;
                pbVar36[0x15] = bVar140;
                pbVar36[0x16] = bVar143;
                pbVar36[0x17] = bVar146;
                pbVar36[0x18] = bVar149;
                pbVar36[0x19] = bVar152;
                pbVar36[0x1a] = bVar155;
                pbVar36[0x1b] = bVar158;
                pbVar36[0x1c] = bVar161;
                pbVar36[0x1d] = bVar164;
                pbVar36[0x1e] = bVar167;
                pbVar36[0x1f] = bVar170;
                    /* WARNING: Could not recover jumptable at 0x007401f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))
                          (pbVar36 + 0x20,pbVar35 + 0x20,lVar27,
                           &DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4));
                return;
              }
              lVar27 = 0;
              if (uVar4 != 0) {
                for (; (uVar4 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                }
              }
              *pbVar36 = bVar123;
              pbVar36[1] = bVar126;
              pbVar36[2] = bVar129;
              pbVar36[3] = bVar132;
              pbVar36[4] = bVar135;
              pbVar36[5] = bVar138;
              pbVar36[6] = bVar141;
              pbVar36[7] = bVar144;
              pbVar36[8] = bVar147;
              pbVar36[9] = bVar150;
              pbVar36[10] = bVar153;
              pbVar36[0xb] = bVar156;
              pbVar36[0xc] = bVar159;
              pbVar36[0xd] = bVar162;
              pbVar36[0xe] = bVar165;
              pbVar36[0xf] = bVar168;
              pbVar36[0x10] = bVar125;
              pbVar36[0x11] = bVar128;
              pbVar36[0x12] = bVar131;
              pbVar36[0x13] = bVar134;
              pbVar36[0x14] = bVar137;
              pbVar36[0x15] = bVar140;
              pbVar36[0x16] = bVar143;
              pbVar36[0x17] = bVar146;
              pbVar36[0x18] = bVar149;
              pbVar36[0x19] = bVar152;
              pbVar36[0x1a] = bVar155;
              pbVar36[0x1b] = bVar158;
              pbVar36[0x1c] = bVar161;
              pbVar36[0x1d] = bVar164;
              pbVar36[0x1e] = bVar167;
              pbVar36[0x1f] = bVar170;
              pbVar36[0x20] = bVar107;
              pbVar36[0x21] = bVar108;
              pbVar36[0x22] = bVar109;
              pbVar36[0x23] = bVar110;
              pbVar36[0x24] = bVar111;
              pbVar36[0x25] = bVar112;
              pbVar36[0x26] = bVar113;
              pbVar36[0x27] = bVar114;
              pbVar36[0x28] = bVar115;
              pbVar36[0x29] = bVar116;
              pbVar36[0x2a] = bVar117;
              pbVar36[0x2b] = bVar118;
              pbVar36[0x2c] = bVar119;
              pbVar36[0x2d] = bVar120;
              pbVar36[0x2e] = bVar121;
              pbVar36[0x2f] = bVar122;
                    /* WARNING: Could not recover jumptable at 0x007400c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4)))
                        (pbVar36 + 0x30,pbVar35 + 0x30,lVar27,
                         &DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar27 * 4));
              return;
            }
          }
        }
      }
    }
  }
  lVar1 = 0;
  if (uVar32 != 0) {
    for (; (uVar32 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00740119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar1 * 4)))
            ((long)pauVar37 + (lVar27 - uVar31),uVar34 + lVar27,lVar1,
             &DAT_00821e64 + *(int *)(&DAT_00821e64 + lVar1 * 4));
  return;
}

