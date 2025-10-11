
uint ossl_x448_int(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  ulong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulong local_1c8 [8];
  ulong local_188 [8];
  ulong local_148 [8];
  ulong local_108 [8];
  ulong local_c8 [8];
  ulong local_88 [4];
  long local_68;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  gf_deserialize(&local_208,param_2,1,0);
  iVar1 = 0x1bf;
  local_188[0] = ZERO._0_8_;
  local_188[1] = ZERO._8_8_;
  puVar9 = local_188 + 6;
  local_188[2] = ZERO._16_8_;
  local_188[3] = ZERO._24_8_;
  local_188[4] = ZERO._32_8_;
  local_188[5] = ZERO._40_8_;
  local_188[6] = ZERO._48_8_;
  local_188[7] = ZERO._56_8_;
  local_1c8[0] = ONE._0_8_;
  local_1c8[1] = ONE._8_8_;
  local_1c8[2] = ONE._16_8_;
  local_1c8[3] = ONE._24_8_;
  local_1c8[4] = ONE._32_8_;
  local_1c8[5] = ONE._40_8_;
  local_1c8[6] = ONE._48_8_;
  local_1c8[7] = ONE._56_8_;
  local_148[0] = local_208;
  local_148[1] = uStack_200;
  local_148[2] = local_1f8;
  local_148[3] = uStack_1f0;
  local_148[4] = local_1e8;
  local_148[5] = uStack_1e0;
  local_148[6] = local_1d8;
  local_148[7] = uStack_1d0;
  local_108[0] = ONE._0_8_;
  local_108[1] = ONE._8_8_;
  local_108[2] = ONE._16_8_;
  local_108[3] = ONE._24_8_;
  local_108[4] = ONE._32_8_;
  local_108[5] = ONE._40_8_;
  local_108[6] = ONE._48_8_;
  local_108[7] = ONE._56_8_;
  uVar11 = 0;
LAB_004d0900:
  bVar2 = *(byte *)(param_3 + (iVar1 >> 3));
  uVar3 = (uint)bVar2;
  if (iVar1 + 7U < 0xf) {
    uVar3 = bVar2 & 0xfc;
  }
  else if (iVar1 == 0x1bf) {
    uVar3 = 0xff;
  }
  uVar4 = -(ulong)((int)uVar3 >> ((byte)iVar1 & 7) & 1);
  puVar8 = local_1c8;
  puVar13 = local_148;
  do {
    puVar5 = puVar8 + 1;
    uVar12 = (*puVar8 ^ *puVar13) & (uVar11 ^ uVar4);
    uVar15 = *puVar13;
    *puVar8 = *puVar8 ^ uVar12;
    *puVar13 = uVar12 ^ uVar15;
    puVar6 = local_188;
    puVar8 = puVar5;
    puVar14 = local_108;
    puVar13 = puVar13 + 1;
  } while (puVar5 != local_188);
  do {
    puVar8 = puVar6 + 1;
    uVar12 = (*puVar6 ^ *puVar14) & (uVar11 ^ uVar4);
    uVar15 = *puVar14;
    *puVar6 = *puVar6 ^ uVar12;
    *puVar14 = uVar12 ^ uVar15;
    puVar6 = puVar8;
    puVar14 = puVar14 + 1;
  } while (puVar8 != local_148);
  lVar7 = 0;
  do {
    *(long *)((long)local_c8 + lVar7) =
         *(long *)((long)local_188 + lVar7) + *(long *)((long)local_1c8 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x40);
  local_c8[4] = local_c8[4] + (local_c8[7] >> 0x38);
  puVar8 = local_c8 + 6;
  uVar11 = local_c8[7];
  while( true ) {
    uVar15 = *puVar8;
    puVar8[1] = (uVar15 >> 0x38) + (uVar11 & 0xffffffffffffff);
    if (local_c8 == puVar8) break;
    puVar8 = puVar8 + -1;
    uVar11 = uVar15;
  }
  local_c8[0] = (local_c8[0] & 0xffffffffffffff) + (local_c8[7] >> 0x38);
  lVar7 = 0;
  do {
    lVar10 = local_1c8[lVar7] - local_188[lVar7];
    if (lVar7 == 4) {
      local_68 = lVar10 + 0x1fffffffffffffc;
    }
    else {
      local_88[lVar7] = lVar10 + 0x1fffffffffffffe;
      if ((int)lVar7 == 7) break;
    }
    lVar7 = lVar7 + 1;
  } while( true );
  local_68 = local_68 + (local_50 >> 0x38);
  puVar8 = &local_58;
  uVar11 = local_50;
  while( true ) {
    uVar15 = uVar11 & 0xffffffffffffff;
    uVar11 = *puVar8;
    puVar8[1] = (uVar11 >> 0x38) + uVar15;
    if (local_88 == puVar8) break;
    puVar8 = puVar8 + -1;
  }
  local_88[0] = (local_88[0] & 0xffffffffffffff) + (local_50 >> 0x38);
  lVar7 = 0;
  do {
    lVar10 = local_148[lVar7] - local_108[lVar7];
    if (lVar7 == 4) {
      local_188[4] = lVar10 + 0x1fffffffffffffc;
    }
    else {
      local_188[lVar7] = lVar10 + 0x1fffffffffffffe;
      if ((int)lVar7 == 7) break;
    }
    lVar7 = lVar7 + 1;
  } while( true );
  local_188[4] = local_188[4] + (local_188[7] >> 0x38);
  puVar8 = puVar9;
  uVar11 = local_188[7];
  while( true ) {
    uVar15 = uVar11 & 0xffffffffffffff;
    uVar11 = *puVar8;
    puVar8[1] = (uVar11 >> 0x38) + uVar15;
    if (local_188 == puVar8) break;
    puVar8 = puVar8 + -1;
  }
  local_188[0] = (local_188[0] & 0xffffffffffffff) + (local_188[7] >> 0x38);
  gf_mul(local_1c8,local_c8,local_188);
  lVar7 = 0;
  do {
    *(long *)((long)local_188 + lVar7) =
         *(long *)((long)local_148 + lVar7) + *(long *)((long)local_108 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x40);
  local_188[4] = local_188[4] + (local_188[7] >> 0x38);
  puVar8 = puVar9;
  uVar11 = local_188[7];
  while( true ) {
    uVar15 = uVar11 & 0xffffffffffffff;
    uVar11 = *puVar8;
    puVar8[1] = (uVar11 >> 0x38) + uVar15;
    if (local_188 == puVar8) break;
    puVar8 = puVar8 + -1;
  }
  local_188[0] = (local_188[0] & 0xffffffffffffff) + (local_188[7] >> 0x38);
  gf_mul(local_148,local_88,local_188);
  lVar7 = 0;
  do {
    lVar10 = local_1c8[lVar7] - local_148[lVar7];
    if (lVar7 == 4) {
      local_108[4] = lVar10 + 0x1fffffffffffffc;
    }
    else {
      local_108[lVar7] = lVar10 + 0x1fffffffffffffe;
      if ((int)lVar7 == 7) break;
    }
    lVar7 = lVar7 + 1;
  } while( true );
  local_108[4] = local_108[4] + (local_108[7] >> 0x38);
  puVar8 = local_108 + 6;
  uVar11 = local_108[7];
  while( true ) {
    uVar15 = uVar11 & 0xffffffffffffff;
    uVar11 = *puVar8;
    puVar8[1] = (uVar11 >> 0x38) + uVar15;
    if (local_108 == puVar8) break;
    puVar8 = puVar8 + -1;
  }
  local_108[0] = (local_108[0] & 0xffffffffffffff) + (local_108[7] >> 0x38);
  gf_sqr(local_188,local_108);
  gf_mul(local_108,&local_208,local_188);
  lVar7 = 0;
  do {
    *(long *)((long)local_188 + lVar7) =
         *(long *)((long)local_148 + lVar7) + *(long *)((long)local_1c8 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x40);
  local_188[4] = local_188[4] + (local_188[7] >> 0x38);
  uVar11 = local_188[7];
  puVar8 = puVar9;
  while( true ) {
    uVar15 = *puVar8;
    puVar8[1] = (uVar15 >> 0x38) + (uVar11 & 0xffffffffffffff);
    if (local_188 == puVar8) break;
    puVar8 = puVar8 + -1;
    uVar11 = uVar15;
  }
  local_188[0] = (local_188[0] & 0xffffffffffffff) + (local_188[7] >> 0x38);
  gf_sqr(local_148,local_188);
  gf_sqr(local_188,local_c8);
  gf_sqr(local_c8,local_88);
  gf_mul(local_1c8,local_188,local_c8);
  lVar7 = 0;
  do {
    lVar10 = local_188[lVar7] - local_c8[lVar7];
    if (lVar7 == 4) {
      local_68 = lVar10 + 0x1fffffffffffffc;
    }
    else {
      local_88[lVar7] = lVar10 + 0x1fffffffffffffe;
      if ((int)lVar7 == 7) break;
    }
    lVar7 = lVar7 + 1;
  } while( true );
  local_68 = local_68 + (local_50 >> 0x38);
  puVar8 = &local_58;
  uVar11 = local_50;
  while( true ) {
    uVar15 = *puVar8;
    puVar8[1] = (uVar15 >> 0x38) + (uVar11 & 0xffffffffffffff);
    if (local_88 == puVar8) break;
    puVar8 = puVar8 + -1;
    uVar11 = uVar15;
  }
  local_88[0] = (local_88[0] & 0xffffffffffffff) + (local_50 >> 0x38);
  gf_mulw_unsigned(local_c8,local_88,0x98a9);
  puVar8 = local_188;
  puVar13 = local_c8;
  do {
    *puVar13 = *puVar13 + *puVar8;
    puVar13 = puVar13 + 1;
    puVar8 = puVar8 + 1;
  } while (local_88 != puVar13);
  local_c8[4] = local_c8[4] + (local_c8[7] >> 0x38);
  puVar8 = local_c8 + 6;
  uVar11 = local_c8[7];
  while( true ) {
    uVar15 = uVar11 & 0xffffffffffffff;
    uVar11 = *puVar8;
    puVar8[1] = (uVar11 >> 0x38) + uVar15;
    if (local_c8 == puVar8) break;
    puVar8 = puVar8 + -1;
  }
  local_c8[0] = (local_c8[0] & 0xffffffffffffff) + (local_c8[7] >> 0x38);
  gf_mul(local_188,local_88,local_c8);
  iVar1 = iVar1 + -1;
  puVar8 = local_1c8;
  puVar13 = local_148;
  uVar11 = uVar4;
  if (iVar1 == -1) {
    do {
      puVar14 = puVar8 + 1;
      uVar15 = (*puVar8 ^ *puVar13) & uVar4;
      uVar11 = *puVar13;
      *puVar8 = *puVar8 ^ uVar15;
      *puVar13 = uVar15 ^ uVar11;
      puVar9 = local_188;
      puVar8 = puVar14;
      puVar6 = local_108;
      puVar13 = puVar13 + 1;
    } while (local_188 != puVar14);
    do {
      puVar8 = puVar9 + 1;
      uVar15 = (*puVar9 ^ *puVar6) & uVar4;
      uVar11 = *puVar6;
      *puVar9 = *puVar9 ^ uVar15;
      *puVar6 = uVar15 ^ uVar11;
      puVar9 = puVar8;
      puVar6 = puVar6 + 1;
    } while (local_148 != puVar8);
    gf_invert(local_188,local_188,0);
    gf_mul(&local_208,local_1c8,local_188);
    gf_serialize(param_1,&local_208,1);
    uVar3 = gf_eq(&local_208,ZERO);
    OPENSSL_cleanse(&local_208,0x40);
    OPENSSL_cleanse(local_1c8,0x40);
    OPENSSL_cleanse(local_188,0x40);
    OPENSSL_cleanse(local_148,0x40);
    OPENSSL_cleanse(local_108,0x40);
    OPENSSL_cleanse(local_c8,0x40);
    OPENSSL_cleanse(local_88,0x40);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    return ~uVar3;
  }
  goto LAB_004d0900;
}

