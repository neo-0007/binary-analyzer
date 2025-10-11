
undefined8 x963kdf_derive(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (iVar1 = sskdf_set_ctx_params(param_1,param_4), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x1a9,"x963kdf_derive");
      ERR_set_error(0x39,0x84,0);
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      lVar2 = ossl_prov_digest_md(param_1 + 0x10);
      if (lVar2 == 0) {
        ERR_new(0);
        ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x1b5,"x963kdf_derive");
        ERR_set_error(0x39,0x81,0);
        return 0;
      }
      if (((*(ulong *)(param_1 + 0x30) < 0x40000001) && (*(ulong *)(param_1 + 0x40) < 0x40000001))
         && (param_3 - 1U < 0x40000000)) {
        uVar3 = SSKDF_hash_kdm_part_0
                          (lVar2,*(undefined8 *)(param_1 + 0x28),*(ulong *)(param_1 + 0x30),
                           *(undefined8 *)(param_1 + 0x38),*(ulong *)(param_1 + 0x40),1,param_2,
                           param_3);
        return uVar3;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x1ae,"x963kdf_derive");
      ERR_set_error(0x39,0x88,0);
    }
  }
  return 0;
}

