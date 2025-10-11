
ulong ecp_nistz256_get_affine_part_0(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = bn_copy_words(local_168,*(undefined8 *)(param_1 + 0x10),4);
  if (iVar1 != 0) {
    iVar1 = bn_copy_words(local_148,*(undefined8 *)(param_1 + 0x18),4);
    if (iVar1 != 0) {
      iVar1 = bn_copy_words(local_128,*(undefined8 *)(param_1 + 0x20),4);
      if (iVar1 != 0) {
        ecp_nistz256_sqr_mont(&local_68,local_128);
        ecp_nistz256_mul_mont(local_108,&local_68,local_128);
        ecp_nistz256_sqr_mont(&local_68,local_108);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_mul_mont(local_e8,&local_68,local_108);
        ecp_nistz256_sqr_mont(&local_68,local_e8);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_mul_mont(local_c8,&local_68,local_e8);
        iVar1 = 7;
        ecp_nistz256_sqr_mont(&local_68,local_c8);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        ecp_nistz256_mul_mont(local_a8,&local_68,local_c8);
        iVar1 = 0xf;
        ecp_nistz256_sqr_mont(&local_68,local_a8);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        ecp_nistz256_mul_mont(local_88,&local_68,local_a8);
        iVar1 = 0x1f;
        ecp_nistz256_sqr_mont(&local_68,local_88);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 0x80;
        ecp_nistz256_mul_mont(&local_68,&local_68,local_128);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 0x20;
        ecp_nistz256_mul_mont(&local_68,&local_68,local_88);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 0x10;
        ecp_nistz256_mul_mont(&local_68,&local_68,local_88);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 8;
        ecp_nistz256_mul_mont(&local_68,&local_68,local_a8);
        do {
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        ecp_nistz256_mul_mont(&local_68,&local_68,local_c8);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_mul_mont(&local_68,&local_68,local_e8);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_mul_mont(&local_68,&local_68,local_108);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_sqr_mont(&local_68,&local_68);
        ecp_nistz256_mul_mont(&local_68,&local_68,local_128);
        local_188 = local_68;
        uStack_180 = uStack_60;
        local_178 = local_58;
        uStack_170 = uStack_50;
        ecp_nistz256_sqr_mont(local_e8,&local_188);
        ecp_nistz256_mul_mont(local_c8,local_e8,local_168);
        if (param_2 != 0) {
          ecp_nistz256_from_mont(local_88,local_c8);
          uVar2 = bn_set_words(param_2,local_88,4);
          if ((int)uVar2 == 0) goto LAB_004fde16;
        }
        uVar2 = 1;
        if (param_3 != 0) {
          ecp_nistz256_mul_mont(&local_188,&local_188,local_e8);
          ecp_nistz256_mul_mont(local_a8,&local_188,local_148);
          ecp_nistz256_from_mont(&local_68,local_a8);
          iVar1 = bn_set_words(param_3,&local_68,4);
          uVar2 = (ulong)(iVar1 != 0);
        }
        goto LAB_004fde16;
      }
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x4aa,"ecp_nistz256_get_affine");
  ERR_set_error(0x10,0x92,0);
  uVar2 = 0;
LAB_004fde16:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

