
uint FUN_00430210(long param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((int)param_4 < 1) {
    uVar12 = 0xffffffff;
  }
  else if ((param_5 < (int)param_4) || (param_5 < 0xb)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0xbe,"RSA_padding_check_PKCS1_type_2");
    FUN_0051f8f0(4,0x9f,0);
    uVar12 = 0xffffffff;
  }
  else {
    lVar5 = (long)param_5;
    lVar6 = FUN_0041ad90(lVar5,"../crypto/rsa/rsa_pk1.c",0xc2);
    if (lVar6 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_pk1.c",0xc4,"RSA_padding_check_PKCS1_type_2");
      FUN_0051f8f0(4,0xc0100,0);
      uVar12 = 0xffffffff;
    }
    else {
      pbVar8 = (byte *)((int)param_4 + param_3);
      pbVar14 = (byte *)(lVar6 + lVar5);
      pbVar10 = pbVar14;
      do {
        pbVar10 = pbVar10 + -1;
        uVar12 = ~param_4 & param_4 - 1;
        uVar13 = ((int)uVar12 >> 0x1f) + 1;
        pbVar8 = pbVar8 + -(ulong)uVar13;
        param_4 = param_4 - uVar13;
        bVar2 = ~(byte)((int)uVar12 >> 0x1f) & *pbVar8;
        *pbVar10 = bVar2;
      } while ((int)pbVar14 - (int)pbVar10 < param_5);
      lVar6 = 2;
      uVar11 = ~(ulong)(param_5 - 1);
      if (param_5 < 1) {
        uVar11 = 0xffffffffffffffff;
      }
      uVar13 = 0;
      pbVar14 = pbVar14 + uVar11;
      uVar12 = 0;
      do {
        uVar9 = (int)(~(uint)pbVar14[lVar6] & pbVar14[lVar6] - 1) >> 0x1f;
        uVar3 = ~uVar13 & uVar9;
        uVar13 = uVar13 | uVar9;
        uVar9 = (uint)lVar6;
        lVar6 = lVar6 + 1;
        uVar12 = uVar3 & uVar9 | ~uVar3 & uVar12;
      } while ((int)lVar6 < param_5);
      uVar16 = param_5 - 0xb;
      uVar13 = 1;
      uVar15 = param_5 - (uVar12 + 1);
      uVar9 = ~((int)((param_2 - uVar15 ^ uVar15 | uVar15 ^ param_2) ^ param_2) >> 0x1f) &
              ~((int)((uVar12 - 10 ^ 10 | uVar12 ^ 10) ^ uVar12) >> 0x1f) &
              (int)(~(uint)bVar2 & bVar2 - 1 & ~(uint)(pbVar14[1] ^ 2) & (pbVar14[1] ^ 2) - 1) >>
              0x1f;
      uVar3 = (int)((uVar16 - param_2 ^ param_2 | param_2 ^ uVar16) ^ uVar16) >> 0x1f;
      uVar3 = uVar3 & uVar16 | param_2 & ~uVar3;
      if (1 < (int)uVar16) {
        do {
          uVar4 = uVar13 & uVar12 - 10;
          bVar2 = (char)(~(byte)(uVar4 >> 0x18) & (byte)(uVar4 - 1 >> 0x18)) >> 7;
          if (0xb < (int)(param_5 - uVar13)) {
            pbVar10 = pbVar14 + 0xb;
            do {
              pbVar8 = pbVar10 + 1;
              *pbVar10 = pbVar10[(int)uVar13] & ~bVar2 | bVar2 & *pbVar10;
              pbVar10 = pbVar8;
            } while (pbVar14 + (ulong)((param_5 - uVar13) - 0xc) + 0xc != pbVar8);
          }
          uVar4 = uVar13 * 2;
          iVar7 = uVar13 * -2;
          uVar13 = uVar4;
        } while (uVar16 != uVar4 && SBORROW4(uVar16,uVar4) == (int)(uVar16 + iVar7) < 0);
      }
      uVar11 = 0;
      iVar7 = -uVar15;
      if (uVar3 != 0) {
        do {
          bVar1 = (byte)(uVar15 >> 0x18);
          uVar12 = (uint)iVar7 >> 0x18;
          bVar2 = (byte)(uVar11 >> 0x18);
          iVar7 = iVar7 + 1;
          bVar2 = (char)((bVar1 ^ bVar2 | bVar1 ^ (byte)uVar12) ^ bVar2) >> 7 & (byte)uVar9;
          *(byte *)(param_1 + uVar11) =
               ~bVar2 & *(byte *)(param_1 + uVar11) | pbVar14[uVar11 + 0xb] & bVar2;
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      FUN_0041aef0(pbVar14,lVar5,"../crypto/rsa/rsa_pk1.c",0x10a);
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x111,"RSA_padding_check_PKCS1_type_2");
      FUN_0051f8f0(4,0x9f,0);
      FUN_0051f240(uVar9 & 1);
      uVar12 = uVar9 & uVar15 | ~uVar9;
    }
  }
  return uVar12;
}

