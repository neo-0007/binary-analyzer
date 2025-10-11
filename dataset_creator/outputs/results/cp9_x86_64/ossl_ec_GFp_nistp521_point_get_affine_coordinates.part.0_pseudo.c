
undefined8
ossl_ec_GFp_nistp521_point_get_affine_coordinates_part_0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_2b8 [80];
  undefined1 local_268 [80];
  undefined1 local_218 [80];
  undefined1 local_1c8 [80];
  undefined1 local_178 [80];
  undefined1 local_128 [80];
  undefined1 local_d8 [152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_to_felem(local_218,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    iVar1 = BN_to_felem(local_1c8,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = BN_to_felem(local_2b8,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        felem_inv(local_268,local_2b8);
        felem_square_ref(local_d8,local_268);
        felem_reduce(local_2b8,local_d8);
        felem_mul_ref(local_d8,local_218,local_2b8);
        felem_reduce(local_218,local_d8);
        felem_contract(local_178,local_218);
        if (param_2 == 0) {
LAB_004fad30:
          felem_mul_ref(local_d8,local_2b8,local_268);
          felem_reduce(local_2b8,local_d8);
          felem_mul_ref(local_d8,local_1c8,local_2b8);
          felem_reduce(local_1c8,local_d8);
          felem_contract(local_128,local_1c8);
          if (param_3 != 0) {
            lVar2 = felem_to_BN(param_3,local_128);
            if (lVar2 == 0) {
              ERR_new();
              uVar3 = 0x753;
              goto LAB_004fada5;
            }
          }
          uVar3 = 1;
          goto LAB_004fac57;
        }
        lVar2 = felem_to_BN(param_2,local_178);
        if (lVar2 != 0) goto LAB_004fad30;
        ERR_new();
        uVar3 = 0x748;
LAB_004fada5:
        ERR_set_debug("../crypto/ec/ecp_nistp521.c",uVar3,
                      "ossl_ec_GFp_nistp521_point_get_affine_coordinates");
        ERR_set_error(0x10,0x80003,0);
      }
    }
  }
  uVar3 = 0;
LAB_004fac57:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

