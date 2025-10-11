
undefined8 kdf_hkdf_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_004651cb:
    uVar2 = 1;
  }
  else {
    uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
    if (iVar1 != 0) {
      iVar1 = hkdf_common_set_ctx_params_part_0(param_1,param_2);
      if (iVar1 != 0) {
        lVar3 = OSSL_PARAM_locate_const(param_2,"info");
        if (lVar3 != 0) {
          lVar4 = 0;
          param_1[0x10f] = 0;
          while( true ) {
            local_40 = (long)param_1 + lVar4 + 0x78;
            local_38 = 0;
            if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
              uVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_40,0x800 - lVar4,&local_38);
              if ((int)uVar2 == 0) goto LAB_004651d0;
              lVar4 = local_38 + param_1[0x10f];
            }
            param_1[0x10f] = lVar4;
            lVar3 = OSSL_PARAM_locate_const(lVar3 + 0x28,"info");
            if (lVar3 == 0) break;
            lVar4 = param_1[0x10f];
          }
        }
        goto LAB_004651cb;
      }
    }
    uVar2 = 0;
  }
LAB_004651d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

