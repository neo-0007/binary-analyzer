
ulong ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  ulong local_c8 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_50;
  long local_40;
  
  lVar1 = param_1 + 0x40;
  lVar2 = param_1 + 0x80;
  lVar3 = param_1 + 0xc0;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_2[6];
  local_68 = param_2[4];
  uStack_60 = param_2[5];
  bVar4 = *(byte *)(param_2 + 7);
  local_50 = bVar4 & 0x7f;
  uVar12 = gf_deserialize(lVar1,&local_88,1,0);
  uVar16 = (ulong)local_50;
  gf_sqr(param_1,lVar1);
  gf_sub(lVar2,ONE,param_1);
  gf_mulw_unsigned(lVar3,param_1,0x98a9);
  gf_sub(lVar3,ZERO,lVar3);
  gf_sub(lVar3,ONE,lVar3);
  gf_mul(param_1,lVar2,lVar3);
  uVar13 = gf_isr(lVar3,param_1);
  gf_mul(param_1,lVar3,lVar2);
  uVar14 = gf_lobit(param_1);
  uVar14 = -(ulong)((bVar4 & 0x80) == 0) ^ uVar14;
  gf_sub(local_c8,ZERO,param_1);
  lVar15 = 0;
  do {
    *(ulong *)(param_1 + lVar15 * 8) =
         local_c8[lVar15] & ~uVar14 | *(ulong *)(param_1 + lVar15 * 8) & uVar14;
    uVar11 = ONE._56_8_;
    uVar10 = ONE._48_8_;
    uVar9 = ONE._40_8_;
    uVar8 = ONE._32_8_;
    uVar7 = ONE._24_8_;
    uVar6 = ONE._16_8_;
    uVar5 = ONE._8_8_;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 8);
  *(undefined8 *)(param_1 + 0x80) = ONE._0_8_;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  *(undefined8 *)(param_1 + 0xb8) = uVar11;
  gf_sqr(local_108,param_1);
  gf_sqr(local_188,lVar1);
  gf_add(local_c8,local_108,local_188);
  gf_add(lVar3,lVar1,param_1);
  gf_sqr(local_148,lVar3);
  gf_sub(local_148,local_148,local_c8);
  gf_sub(lVar3,local_188,local_108);
  gf_sqr(param_1,lVar2);
  gf_add(lVar2,param_1,param_1);
  gf_sub(local_188,lVar2,local_c8);
  gf_mul(param_1,local_188,local_148);
  gf_mul(lVar2,lVar3,local_188);
  gf_mul(lVar1,lVar3,local_c8);
  gf_mul(lVar3,local_148,local_c8);
  OPENSSL_cleanse(local_188,0x40);
  OPENSSL_cleanse(local_148,0x40);
  OPENSSL_cleanse(local_108,0x40);
  OPENSSL_cleanse(local_c8,0x40);
  OPENSSL_cleanse(&local_88,0x39);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar16 & uVar16 - 1) >> 0x3f & uVar12 & uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

