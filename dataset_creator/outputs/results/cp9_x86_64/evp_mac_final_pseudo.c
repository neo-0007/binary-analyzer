
undefined8 evp_mac_final(long *param_1,int param_2,long param_3,ulong *param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_9c [3];
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c[0] = param_2;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/mac_lib.c",0x8a,"evp_mac_final");
    ERR_set_error(6,0xda,0);
    uVar3 = 0;
  }
  else if (*(long *)(*param_1 + 0x58) == 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/mac_lib.c",0x8e,"evp_mac_final");
    ERR_set_error(6,0xbc,0);
    uVar3 = 0;
  }
  else {
    uVar2 = EVP_MAC_CTX_get_mac_size();
    if (param_3 == 0) {
      if (param_4 == (ulong *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/mac_lib.c",0x95,"evp_mac_final");
        ERR_set_error(6,0xc0102,0);
        uVar3 = 0;
      }
      else {
        *param_4 = uVar2;
        uVar3 = 1;
      }
    }
    else if (param_5 < uVar2) {
      ERR_new();
      ERR_set_debug("../crypto/evp/mac_lib.c",0x9c,"evp_mac_final");
      ERR_set_error(6,0x9b,0);
      uVar3 = 0;
    }
    else {
      if (local_9c[0] != 0) {
        OSSL_PARAM_construct_int(&local_d8,&DAT_007dae2e,local_9c);
        local_68 = local_b8;
        local_88 = local_d8;
        uStack_80 = uStack_d0;
        local_78 = local_c8;
        uStack_70 = uStack_c0;
        OSSL_PARAM_construct_end(&local_d8);
        local_60 = local_d8;
        uStack_58 = uStack_d0;
        local_40 = local_b8;
        local_50 = local_c8;
        uStack_48 = uStack_c0;
        iVar1 = EVP_MAC_CTX_set_params(param_1,&local_88);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("../crypto/evp/mac_lib.c",0xa4,"evp_mac_final");
          ERR_set_error(6,0xe3,0);
          uVar3 = 0;
          goto LAB_0052d688;
        }
      }
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1[1],param_3,&local_90,param_5);
      if (param_4 != (ulong *)0x0) {
        *param_4 = local_90;
      }
    }
  }
LAB_0052d688:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

