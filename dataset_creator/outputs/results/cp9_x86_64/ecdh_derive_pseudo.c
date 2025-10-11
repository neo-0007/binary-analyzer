
ulong ecdh_derive(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = ecdh_plain_derive();
      return uVar4;
    }
    goto LAB_0046397b;
  }
  if (*(int *)((long)param_1 + 0x1c) == 1) {
    if (param_2 == 0) {
      *param_3 = param_1[7];
      uVar4 = 1;
    }
    else if (param_4 < (ulong)param_1[7]) {
      ERR_new();
      ERR_set_debug("../providers/implementations/exchange/ecdh_exch.c",0x209,
                    "ecdh_X9_63_kdf_derive");
      ERR_set_error(0x39,0x6a,0);
      uVar4 = 0;
    }
    else {
      if (((EC_KEY *)param_1[1] == (EC_KEY *)0x0) || (param_1[2] == 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/exchange/ecdh_exch.c",0x1ba,"ecdh_plain_derive")
        ;
        ERR_set_error(0x39,0x80,0);
        goto LAB_00463860;
      }
      group = EC_KEY_get0_group((EC_KEY *)param_1[1]);
      uVar4 = 0;
      if (group != (EC_GROUP *)0x0) {
        iVar1 = EC_GROUP_get_degree(group);
        uVar4 = (long)iVar1 + 7U >> 3;
      }
      local_48 = uVar4;
      lVar3 = CRYPTO_secure_malloc(uVar4,"../providers/implementations/exchange/ecdh_exch.c",0x20e);
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/exchange/ecdh_exch.c",0x20f,
                      "ecdh_X9_63_kdf_derive");
        ERR_set_error(0x39,0xc0100,0);
        uVar4 = 0;
      }
      else {
        uVar2 = ecdh_plain_derive(param_1,lVar3,&local_48,uVar4);
        uVar4 = local_48;
        if (uVar2 != 0) {
          uVar2 = ossl_ecdh_kdf_X9_63(param_2,param_1[7],lVar3,local_48,param_1[5],param_1[6],
                                      param_1[4],*param_1,0);
          if (uVar2 != 0) {
            *param_3 = param_1[7];
            uVar2 = 1;
          }
        }
        CRYPTO_secure_clear_free
                  (lVar3,uVar4,"../providers/implementations/exchange/ecdh_exch.c",0x221);
        uVar4 = (ulong)uVar2;
      }
    }
  }
  else {
LAB_00463860:
    uVar4 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_0046397b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

