
undefined8
ossl_ec_GFp_nistp256_point_get_affine_coordinates_part_0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 local_1a8 [64];
  long local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_to_felem(&local_168,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    iVar1 = BN_to_felem(&local_128,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = BN_to_felem(&local_1e8,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        felem_inv(local_1a8,&local_1e8);
        felem_shrink(&local_208,local_1a8);
        smallfelem_square(&local_e8,&local_208);
        local_1e8 = local_e8 - 0x1000000010;
        local_1e0 = local_e0 + 0xfffffffff + (ulong)(0x100000000f < local_e8);
        local_1d0 = local_d0 + 0x1000000000;
        local_1d8 = local_d8;
        local_1c8 = local_c8 - 0xffffffff0;
        local_1c0 = local_c0 + 0xfffffffff + (ulong)(0xfffffffef < local_c8);
        local_1b8 = local_b8 - 0xffffffff0;
        local_1b0 = local_b0 + 0xfffffffff + (ulong)(0xfffffffef < local_b8);
        felem_reduce_(&local_1e8,&local_e8);
        felem_shrink(local_228,&local_168);
        felem_shrink(&local_208,&local_1e8);
        smallfelem_mul(&local_e8,local_228,&local_208);
        local_168 = local_e8 - 0x1000000010;
        local_160 = local_e0 + 0xfffffffff + (ulong)(0x100000000f < local_e8);
        local_150 = local_d0 + 0x1000000000;
        local_158 = local_d8;
        local_148 = local_c8 - 0xffffffff0;
        local_140 = local_c0 + 0xfffffffff + (ulong)(0xfffffffef < local_c8);
        local_138 = local_b8 - 0xffffffff0;
        local_130 = local_b0 + 0xfffffffff + (ulong)(0xfffffffef < local_b8);
        felem_reduce_(&local_168,&local_e8);
        felem_contract(&local_248,&local_168);
        if (param_2 == 0) {
LAB_004f44a0:
          felem_shrink(local_228,&local_1e8);
          felem_shrink(&local_208,local_1a8);
          smallfelem_mul(&local_e8,local_228,&local_208);
          local_1e8 = local_e8 - 0x1000000010;
          local_1e0 = local_e0 + 0xfffffffff + (ulong)(0x100000000f < local_e8);
          local_1d0 = local_d0 + 0x1000000000;
          local_1d8 = local_d8;
          local_1c8 = local_c8 - 0xffffffff0;
          local_1c0 = local_c0 + 0xfffffffff + (ulong)(0xfffffffef < local_c8);
          local_1b8 = local_b8 - 0xffffffff0;
          local_1b0 = local_b0 + 0xfffffffff + (ulong)(0xfffffffef < local_b8);
          felem_reduce_(&local_1e8,&local_e8);
          felem_shrink(local_228,&local_128);
          felem_shrink(&local_208,&local_1e8);
          smallfelem_mul(&local_e8,local_228,&local_208);
          local_128 = local_e8 - 0x1000000010;
          local_120 = local_e0 + 0xfffffffff + (ulong)(0x100000000f < local_e8);
          local_110 = local_d0 + 0x1000000000;
          local_108 = local_c8 - 0xffffffff0;
          local_100 = local_c0 + 0xfffffffff + (ulong)(0xfffffffef < local_c8);
          local_f8 = local_b8 - 0xffffffff0;
          local_f0 = local_b0 + 0xfffffffff + (ulong)(0xfffffffef < local_b8);
          local_118 = local_d8;
          felem_reduce_(&local_128,&local_e8);
          felem_contract(&local_208,&local_128);
          if (param_3 != 0) {
            local_68 = local_208;
            local_60 = local_200;
            local_58 = local_1f8;
            local_50 = local_1f0;
            lVar2 = BN_lebin2bn(&local_68,0x20,param_3);
            if (lVar2 == 0) {
              ERR_new();
              uVar3 = 0x7bf;
              goto LAB_004f4700;
            }
          }
          uVar3 = 1;
          goto LAB_004f41d9;
        }
        local_68 = local_248;
        local_60 = local_240;
        local_58 = local_238;
        local_50 = local_230;
        lVar2 = BN_lebin2bn(&local_68,0x20,param_2);
        if (lVar2 != 0) goto LAB_004f44a0;
        ERR_new();
        uVar3 = 0x7b4;
LAB_004f4700:
        ERR_set_debug("../crypto/ec/ecp_nistp256.c",uVar3,
                      "ossl_ec_GFp_nistp256_point_get_affine_coordinates");
        ERR_set_error(0x10,0x80003,0);
      }
    }
  }
  uVar3 = 0;
LAB_004f41d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

