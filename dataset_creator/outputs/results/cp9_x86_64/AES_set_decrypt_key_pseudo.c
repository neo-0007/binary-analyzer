
int AES_set_decrypt_key(uchar *userKey,int bits,AES_KEY *key)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_register_00000034;
  AES_KEY *pAVar13;
  AES_KEY *pAVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  
  iVar8 = _x86_64_AES_set_encrypt_key(userKey,CONCAT44(in_register_00000034,bits));
  if (iVar8 == 0) {
    uVar9 = key->rounds;
    pAVar14 = (AES_KEY *)(key->rd_key + (ulong)uVar9 * 4);
    pAVar13 = key;
    do {
      uVar1 = *(undefined8 *)(pAVar13->rd_key + 2);
      uVar2 = *(undefined8 *)pAVar14->rd_key;
      uVar3 = *(undefined8 *)(pAVar14->rd_key + 2);
      *(undefined8 *)pAVar14->rd_key = *(undefined8 *)pAVar13->rd_key;
      *(undefined8 *)(pAVar14->rd_key + 2) = uVar1;
      *(undefined8 *)pAVar13->rd_key = uVar2;
      *(undefined8 *)(pAVar13->rd_key + 2) = uVar3;
      uVar7 = DAT_00489938;
      uVar6 = DAT_00489930;
      uVar5 = DAT_00489928;
      pAVar13 = (AES_KEY *)(pAVar13->rd_key + 4);
      pAVar14 = (AES_KEY *)(pAVar14[-1].rd_key + 0x39);
    } while (pAVar14 != pAVar13);
    iVar8 = uVar9 - 1;
    do {
      pAVar13 = (AES_KEY *)(key->rd_key + 4);
      uVar29 = *(ulong *)pAVar13->rd_key;
      uVar4 = *(ulong *)(key->rd_key + 6);
      uVar17 = uVar29 * 2 & uVar6 ^ (uVar5 & uVar29) - ((uVar5 & uVar29) >> 7) & uVar7;
      uVar24 = uVar4 * 2 & uVar6 ^ (uVar5 & uVar4) - ((uVar5 & uVar4) >> 7) & uVar7;
      uVar19 = uVar17 * 2 & uVar6 ^ (uVar5 & uVar17) - ((uVar5 & uVar17) >> 7) & uVar7;
      uVar26 = uVar24 * 2 & uVar6 ^ (uVar5 & uVar24) - ((uVar5 & uVar24) >> 7) & uVar7;
      uVar21 = uVar19 * 2 & uVar6 ^ (uVar5 & uVar19) - ((uVar5 & uVar19) >> 7) & uVar7;
      uVar28 = uVar26 * 2 & uVar6 ^ (uVar5 & uVar26) - ((uVar5 & uVar26) >> 7) & uVar7;
      uVar18 = uVar17 ^ uVar29 ^ uVar21;
      uVar25 = uVar24 ^ uVar4 ^ uVar28;
      uVar19 = uVar19 ^ uVar29 ^ uVar21;
      uVar26 = uVar26 ^ uVar4 ^ uVar28;
      uVar9 = (uint)(uVar29 ^ uVar21);
      uVar10 = (uint)(uVar4 ^ uVar28);
      uVar17 = uVar17 ^ uVar29 ^ uVar19;
      uVar12 = (uint)((uVar29 ^ uVar21) >> 0x20);
      uVar29 = uVar24 ^ uVar4 ^ uVar26;
      uVar11 = (uint)((uVar4 ^ uVar28) >> 0x20);
      uVar15 = (uint)uVar18;
      uVar22 = (uint)uVar25;
      uVar20 = (uint)(uVar18 >> 0x20);
      uVar27 = (uint)(uVar25 >> 0x20);
      uVar16 = (uint)(uVar19 >> 0x20);
      uVar23 = (uint)(uVar26 >> 0x20);
      pAVar13->rd_key[0] =
           (uVar9 << 8 | uVar9 >> 0x18) ^ (uint)uVar17 ^ (uVar15 << 0x18 | uVar15 >> 8) ^
           ((uint)uVar19 << 0x10 | (uint)uVar19 >> 0x10);
      key->rd_key[5] =
           (uVar12 << 8 | uVar12 >> 0x18) ^ (uint)(uVar17 >> 0x20) ^ (uVar20 << 0x18 | uVar20 >> 8)
           ^ (uVar16 << 0x10 | uVar16 >> 0x10);
      key->rd_key[6] =
           (uVar10 << 8 | uVar10 >> 0x18) ^ (uint)uVar29 ^ (uVar22 << 0x18 | uVar22 >> 8) ^
           ((uint)uVar26 << 0x10 | (uint)uVar26 >> 0x10);
      key->rd_key[7] =
           (uVar11 << 8 | uVar11 >> 0x18) ^ (uint)(uVar29 >> 0x20) ^ (uVar27 << 0x18 | uVar27 >> 8)
           ^ (uVar23 << 0x10 | uVar23 >> 0x10);
      iVar8 = iVar8 + -1;
      key = pAVar13;
    } while (iVar8 != 0);
    iVar8 = 0;
  }
  return iVar8;
}

