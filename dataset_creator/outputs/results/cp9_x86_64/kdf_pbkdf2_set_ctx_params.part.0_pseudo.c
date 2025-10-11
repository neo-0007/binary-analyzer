
undefined8 kdf_pbkdf2_set_ctx_params_part_0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_2c;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"pkcs5");
  if (lVar2 == 0) {
LAB_00466b03:
    lVar2 = OSSL_PARAM_locate_const(param_2,"pass");
    if (lVar2 != 0) {
      iVar1 = pbkdf2_set_membuf(param_1 + 8,param_1 + 0x10,lVar2);
      if (iVar1 == 0) goto LAB_00466bf0;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"salt");
    if (lVar2 == 0) {
LAB_00466b69:
      lVar2 = OSSL_PARAM_locate_const(param_2,"iter");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint64(lVar2,&local_28);
        if (iVar1 == 0) goto LAB_00466bf0;
        if (local_28 < (-(ulong)(*(int *)(param_1 + 0x48) == 0) & 0xfffffffffffffc19) + 1000) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0xd0,
                        "kdf_pbkdf2_set_ctx_params");
          ERR_set_error(0x39,0x7b,0);
          uVar3 = 0;
          goto LAB_00466bf2;
        }
        *(ulong *)(param_1 + 0x28) = local_28;
      }
      uVar3 = 1;
      goto LAB_00466bf2;
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (0xf < *(ulong *)(lVar2 + 0x18))) {
      iVar1 = pbkdf2_set_membuf(param_1 + 0x18,param_1 + 0x20);
      if (iVar1 != 0) goto LAB_00466b69;
    }
    else {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0xc4,"kdf_pbkdf2_set_ctx_params");
      ERR_set_error(0x39,0x70,0);
    }
  }
  else {
    iVar1 = OSSL_PARAM_get_int(lVar2,&local_2c);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x48) = (uint)(local_2c == 0);
      goto LAB_00466b03;
    }
  }
LAB_00466bf0:
  uVar3 = 0;
LAB_00466bf2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

