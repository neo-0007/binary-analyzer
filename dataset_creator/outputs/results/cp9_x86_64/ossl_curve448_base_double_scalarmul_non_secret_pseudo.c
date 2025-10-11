
void ossl_curve448_base_double_scalarmul_non_secret
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long in_FS_OFFSET;
  int local_10b0;
  int local_10a0;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined1 local_1048 [128];
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined1 local_e88 [64];
  int local_e48 [156];
  int local_bd8 [228];
  undefined1 local_848 [192];
  undefined1 local_788 [64];
  undefined1 local_748 [256];
  undefined1 local_648 [1536];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  recode_wnaf(local_e48,param_2,5);
  recode_wnaf(local_bd8,param_4,3);
  pt_to_pniels(local_848,param_3);
  ossl_curve448_point_double(local_1048,param_3);
  pt_to_pniels(&local_f48,local_1048);
  gf_mul(&local_1088,&local_fc8,local_788);
  local_fc8 = local_1088;
  uStack_fc0 = uStack_1080;
  local_fb8 = local_1078;
  uStack_fb0 = uStack_1070;
  local_fa8 = local_1068;
  uStack_fa0 = uStack_1060;
  local_f98 = local_1058;
  uStack_f90 = uStack_1050;
  add_niels_to_pt(local_1048,local_848,0);
  pt_to_pniels(local_748,local_1048);
  puVar14 = local_648;
  do {
    gf_mul(&local_1088,&local_fc8,local_e88);
    local_fc8 = local_1088;
    uStack_fc0 = uStack_1080;
    local_fb8 = local_1078;
    uStack_fb0 = uStack_1070;
    local_fa8 = local_1068;
    uStack_fa0 = uStack_1060;
    local_f98 = local_1058;
    uStack_f90 = uStack_1050;
    add_niels_to_pt(local_1048,&local_f48,0);
    puVar15 = puVar14 + 0x100;
    pt_to_pniels(puVar14,local_1048);
    puVar14 = puVar15;
  } while (puVar15 != local_48);
  ossl_curve448_point_destroy(local_1048);
  OPENSSL_cleanse(&local_f48,0x100);
  uVar10 = ossl_curve448_point_identity._56_8_;
  uVar9 = ossl_curve448_point_identity._48_8_;
  uVar8 = ossl_curve448_point_identity._40_8_;
  uVar7 = ossl_curve448_point_identity._32_8_;
  uVar6 = ossl_curve448_point_identity._24_8_;
  uVar5 = ossl_curve448_point_identity._16_8_;
  uVar4 = ossl_curve448_point_identity._8_8_;
  if (local_bd8[0] < 0) {
    *param_1 = ossl_curve448_point_identity._0_8_;
    param_1[1] = uVar4;
    uVar11 = ossl_curve448_point_identity._72_8_;
    uVar4 = ossl_curve448_point_identity._64_8_;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    uVar6 = ossl_curve448_point_identity._88_8_;
    uVar5 = ossl_curve448_point_identity._80_8_;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    uVar8 = ossl_curve448_point_identity._104_8_;
    uVar7 = ossl_curve448_point_identity._96_8_;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    uVar10 = ossl_curve448_point_identity._120_8_;
    uVar9 = ossl_curve448_point_identity._112_8_;
    param_1[8] = uVar4;
    param_1[9] = uVar11;
    uVar11 = ossl_curve448_point_identity._136_8_;
    uVar4 = ossl_curve448_point_identity._128_8_;
    param_1[10] = uVar5;
    param_1[0xb] = uVar6;
    uVar6 = ossl_curve448_point_identity._152_8_;
    uVar5 = ossl_curve448_point_identity._144_8_;
    param_1[0xc] = uVar7;
    param_1[0xd] = uVar8;
    uVar8 = ossl_curve448_point_identity._168_8_;
    uVar7 = ossl_curve448_point_identity._160_8_;
    param_1[0xe] = uVar9;
    param_1[0xf] = uVar10;
    uVar10 = ossl_curve448_point_identity._184_8_;
    uVar9 = ossl_curve448_point_identity._176_8_;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar11;
    uVar11 = ossl_curve448_point_identity._200_8_;
    uVar4 = ossl_curve448_point_identity._192_8_;
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar6;
    uVar6 = ossl_curve448_point_identity._216_8_;
    uVar5 = ossl_curve448_point_identity._208_8_;
    param_1[0x14] = uVar7;
    param_1[0x15] = uVar8;
    uVar8 = ossl_curve448_point_identity._232_8_;
    uVar7 = ossl_curve448_point_identity._224_8_;
    param_1[0x16] = uVar9;
    param_1[0x17] = uVar10;
    uVar10 = ossl_curve448_point_identity._248_8_;
    uVar9 = ossl_curve448_point_identity._240_8_;
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar11;
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar6;
    param_1[0x1c] = uVar7;
    param_1[0x1d] = uVar8;
    param_1[0x1e] = uVar9;
    param_1[0x1f] = uVar10;
  }
  else {
    iVar13 = local_bd8[0];
    if (local_e48[0] < local_bd8[0]) {
      pniels_to_pt(param_1,local_848 + (long)(local_bd8[1] >> 1) * 0x100);
      local_10a0 = 1;
      local_10b0 = 0;
    }
    else if (local_e48[0] == local_bd8[0]) {
      pniels_to_pt(param_1,local_848 + (long)(local_bd8[1] >> 1) * 0x100);
      add_niels_to_pt(param_1,ossl_curve448_wnaf_base + (long)(local_e48[1] >> 1) * 0xc0,
                      local_bd8[0]);
      local_10a0 = 1;
      local_10b0 = 1;
    }
    else {
      niels_to_pt(param_1,ossl_curve448_wnaf_base + (long)(local_e48[1] >> 1) * 0xc0);
      local_10a0 = 0;
      local_10b0 = 1;
      iVar13 = local_e48[0];
    }
    while (iVar13 != 0) {
      while( true ) {
        iVar13 = iVar13 + -1;
        iVar1 = local_bd8[(long)local_10a0 * 2];
        iVar2 = local_e48[(long)local_10b0 * 2];
        point_double_internal(param_1,param_1,iVar13 != 0 && (iVar1 != iVar13 && iVar2 != iVar13));
        if (iVar1 == iVar13) {
          iVar1 = local_bd8[(long)local_10a0 * 2 + 1];
          bVar3 = iVar13 != 0 && iVar2 != iVar13;
          if (iVar1 < 1) {
            lVar12 = (long)(-iVar1 >> 1) * 0x100;
            gf_mul(&local_f48,param_1 + 0x10,local_788 + lVar12);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            sub_niels_from_pt(param_1,local_848 + lVar12,bVar3);
          }
          else {
            lVar12 = (long)(iVar1 >> 1) * 0x100;
            gf_mul(&local_f48,param_1 + 0x10,local_788 + lVar12);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            add_niels_to_pt(param_1,local_848 + lVar12,bVar3);
          }
          local_10a0 = local_10a0 + 1;
        }
        if (iVar2 != iVar13) break;
        iVar1 = local_e48[(long)local_10b0 * 2 + 1];
        if (iVar1 < 1) {
          sub_niels_from_pt(param_1,ossl_curve448_wnaf_base + (long)(-iVar1 >> 1) * 0xc0,iVar13);
        }
        else {
          add_niels_to_pt(param_1,ossl_curve448_wnaf_base + (long)(iVar1 >> 1) * 0xc0,iVar13);
        }
        local_10b0 = local_10b0 + 1;
        if (iVar13 == 0) goto LAB_004d19a9;
      }
    }
LAB_004d19a9:
    OPENSSL_cleanse(local_bd8,0x390);
    OPENSSL_cleanse(local_e48,0x268);
    OPENSSL_cleanse(local_848,0x800);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

