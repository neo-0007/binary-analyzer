
uint FUN_0056c670(long param_1,uint param_2,long param_3,uint param_4,int param_5,undefined8 param_6
                 ,int param_7,long param_8,long param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  byte *local_120;
  uint local_118;
  byte *local_110;
  long local_100;
  byte local_c8;
  byte abStack_c7 [63];
  undefined1 local_88 [72];
  long local_40;
  
  local_100 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == 0) {
    local_100 = FUN_0040bef0();
  }
  if (param_9 == 0) {
    param_9 = local_100;
  }
  iVar2 = FUN_0040ac10(local_100);
  if (((int)param_2 < 1) || ((int)param_4 < 1)) {
    uVar6 = 0xffffffff;
    goto LAB_0056c942;
  }
  if ((param_5 < (int)param_4) || (iVar3 = iVar2 + 1, param_5 < iVar3 * 2)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_oaep.c",200,"RSA_padding_check_PKCS1_OAEP_mgf1");
    FUN_0051f8f0(4,0x79,0);
    uVar6 = 0xffffffff;
    goto LAB_0056c942;
  }
  iVar4 = param_5 - iVar2;
  iVar5 = iVar4 + -1;
  lVar22 = (long)iVar5;
  lVar11 = FUN_0041ad90(lVar22,"../crypto/rsa/rsa_oaep.c",0xcd);
  if (lVar11 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_oaep.c",0xcf,"RSA_padding_check_PKCS1_OAEP_mgf1");
    FUN_0051f8f0(4,0xc0100,0);
LAB_0056cc25:
    local_120 = (byte *)0x0;
    uVar6 = 0xffffffff;
    uVar7 = 0xffffffff;
    local_118 = 0;
  }
  else {
    lVar12 = FUN_0041ad90((long)param_5,"../crypto/rsa/rsa_oaep.c",0xd3);
    if (lVar12 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_oaep.c",0xd5,"RSA_padding_check_PKCS1_OAEP_mgf1");
      FUN_0051f8f0(4,0xc0100,0);
      goto LAB_0056cc25;
    }
    pbVar17 = (byte *)(lVar12 + param_5);
    pbVar18 = (byte *)((int)param_4 + param_3);
    pbVar15 = pbVar17;
    do {
      pbVar15 = pbVar15 + -1;
      uVar6 = param_4 - 1 & ~param_4;
      uVar7 = ((int)uVar6 >> 0x1f) + 1;
      pbVar18 = pbVar18 + -(ulong)uVar7;
      param_4 = param_4 - uVar7;
      bVar19 = ~(byte)((int)uVar6 >> 0x1f) & *pbVar18;
      *pbVar15 = bVar19;
    } while ((int)pbVar17 - (int)pbVar15 < param_5);
    lVar12 = (long)iVar2;
    uVar13 = ~(ulong)(param_5 - 1);
    if (param_5 < 1) {
      uVar13 = 0xffffffffffffffff;
    }
    local_120 = pbVar17 + uVar13;
    uVar6 = bVar19 - 1 & ~(uint)bVar19;
    local_118 = (int)uVar6 >> 0x1f;
    lVar16 = -(ulong)(param_5 - 1);
    if (param_5 < 1) {
      lVar16 = 0;
    }
    iVar8 = FUN_0056c0c0(&local_c8,lVar12,pbVar17 + lVar16 + lVar12,lVar22,param_9);
    if (iVar8 == 0) {
      if (0 < iVar2) {
        pbVar18 = &local_c8;
        pbVar15 = local_120;
        do {
          pbVar15 = pbVar15 + 1;
          *pbVar18 = *pbVar18 ^ *pbVar15;
          pbVar18 = pbVar18 + 1;
        } while (abStack_c7 + (iVar2 - 1) != pbVar18);
      }
      iVar8 = FUN_0056c0c0(lVar11,lVar22,&local_c8,lVar12,param_9);
      if (iVar8 != 0) goto LAB_0056c8ec;
      uVar13 = 0;
      if (0 < iVar5) {
        do {
          *(byte *)(lVar11 + uVar13) =
               *(byte *)(lVar11 + uVar13) ^ (pbVar17 + lVar16 + lVar12)[uVar13];
          bVar23 = iVar4 - 2 != uVar13;
          uVar13 = uVar13 + 1;
        } while (bVar23);
      }
      iVar8 = FUN_00407440(param_6,(long)param_7,local_88,0,local_100,0);
      if (iVar8 == 0) goto LAB_0056c8ec;
      uVar7 = FUN_00422820(lVar11,local_88,lVar12);
      uVar6 = (int)(~uVar7 & uVar7 - 1 & uVar6) >> 0x1f;
      if (iVar2 < iVar5) {
        uVar14 = 0;
        uVar7 = 0;
        lVar16 = lVar12;
        do {
          bVar19 = *(byte *)(lVar11 + lVar16);
          uVar9 = bVar19 ^ 1;
          uVar20 = (int)(~uVar9 & uVar9 - 1) >> 0x1f;
          uVar9 = ~uVar14 & uVar20;
          uVar14 = uVar14 | uVar20;
          uVar20 = (uint)lVar16;
          lVar16 = lVar16 + 1;
          uVar7 = uVar9 & uVar20 | ~uVar9 & uVar7;
          uVar6 = uVar6 & ((int)(~(uint)bVar19 & bVar19 - 1) >> 0x1f | uVar14);
        } while ((int)lVar16 < iVar5);
        uVar7 = iVar5 - (uVar7 + 1);
        local_118 = ~((int)((param_2 - uVar7 ^ uVar7 | param_2 ^ uVar7) ^ param_2) >> 0x1f) &
                    uVar14 & uVar6;
        uVar6 = ~local_118;
        uVar14 = local_118 & 1;
      }
      else {
        uVar6 = 0xffffffff;
        local_118 = 0;
        uVar7 = iVar4 - 2;
        uVar14 = 0;
      }
      uVar9 = (iVar5 - iVar2) - 1;
      uVar20 = (int)((uVar9 - param_2 ^ param_2 | param_2 ^ uVar9) ^ uVar9) >> 0x1f;
      uVar20 = uVar20 & uVar9 | ~uVar20 & param_2;
      if (1 < (int)uVar9) {
        uVar21 = 1;
        do {
          uVar10 = uVar21 & uVar9 - uVar7;
          bVar19 = (char)(~(byte)(uVar10 >> 0x18) & (byte)(uVar10 - 1 >> 0x18)) >> 7;
          if (iVar3 < (int)(iVar5 - uVar21)) {
            pbVar15 = (byte *)(lVar11 + iVar3);
            do {
              pbVar17 = pbVar15 + 1;
              *pbVar15 = pbVar15[(int)uVar21] & ~bVar19 | bVar19 & *pbVar15;
              pbVar15 = pbVar17;
            } while ((byte *)((ulong)((-2 - iVar2) + (iVar5 - uVar21)) + lVar11 + 2 + lVar12) !=
                     pbVar17);
          }
          uVar10 = uVar21 * 2;
          iVar4 = uVar21 * -2;
          uVar21 = uVar10;
        } while (uVar9 != uVar10 && SBORROW4(uVar9,uVar10) == (int)(uVar9 + iVar4) < 0);
      }
      if (0 < (int)uVar20) {
        uVar13 = 0;
        iVar2 = -uVar7;
        do {
          bVar19 = (byte)(uVar7 >> 0x18);
          bVar1 = (byte)(uVar13 >> 0x18);
          bVar19 = (char)((bVar19 ^ bVar1 | (byte)((uint)iVar2 >> 0x18) ^ bVar19) ^ bVar1) >> 7 &
                   (byte)local_118;
          *(byte *)(param_1 + uVar13) =
               ~bVar19 & *(byte *)(param_1 + uVar13) |
               bVar19 & *(byte *)(lVar11 + lVar12 + 1 + uVar13);
          uVar13 = uVar13 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar13 != uVar20);
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_oaep.c",0x13a,"RSA_padding_check_PKCS1_OAEP_mgf1");
      FUN_0051f8f0(4,0x79,0);
      FUN_0051f240(uVar14);
    }
    else {
LAB_0056c8ec:
      uVar7 = 0xffffffff;
      uVar6 = ~local_118;
    }
  }
  local_110 = &local_c8;
  FUN_004227b0(local_110,0x40);
  FUN_0041aef0(lVar11,lVar22,"../crypto/rsa/rsa_oaep.c",0x13f);
  FUN_0041aef0(local_120,(long)param_5,"../crypto/rsa/rsa_oaep.c",0x140);
  uVar6 = local_118 & uVar7 | uVar6;
LAB_0056c942:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

