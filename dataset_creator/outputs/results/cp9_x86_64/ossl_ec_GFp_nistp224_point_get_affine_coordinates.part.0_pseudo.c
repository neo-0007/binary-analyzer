
undefined8
ossl_ec_GFp_nistp224_point_get_affine_coordinates_part_0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_to_felem(local_138,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    iVar1 = BN_to_felem(local_118,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = BN_to_felem(local_178,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        felem_inv(local_158,local_178);
        felem_square(local_b8,local_158);
        felem_reduce(local_178,local_b8);
        felem_mul(local_b8,local_138,local_178);
        felem_reduce(local_138,local_b8);
        felem_contract(local_f8,local_138);
        if (param_2 == 0) {
LAB_004ed0cd:
          felem_mul(local_b8,local_178,local_158);
          felem_reduce(local_178,local_b8);
          felem_mul(local_b8,local_118,local_178);
          felem_reduce(local_118,local_b8);
          felem_contract(local_d8,local_118);
          if (param_3 != 0) {
            lVar2 = felem_to_BN(param_3,local_d8);
            if (lVar2 == 0) {
              ERR_new();
              uVar3 = 0x55b;
              goto LAB_004ed142;
            }
          }
          uVar3 = 1;
          goto LAB_004ecff4;
        }
        lVar2 = felem_to_BN(param_2,local_f8);
        if (lVar2 != 0) goto LAB_004ed0cd;
        ERR_new();
        uVar3 = 0x550;
LAB_004ed142:
        ERR_set_debug("../crypto/ec/ecp_nistp224.c",uVar3,
                      "ossl_ec_GFp_nistp224_point_get_affine_coordinates");
        ERR_set_error(0x10,0x80003,0);
      }
    }
  }
  uVar3 = 0;
LAB_004ecff4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

