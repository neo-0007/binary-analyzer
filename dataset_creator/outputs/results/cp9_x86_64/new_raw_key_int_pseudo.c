
EVP_PKEY *
new_raw_key_int(undefined8 param_1,char *param_2,undefined8 param_3,int param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  EVP_PKEY_ASN1_METHOD *local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  EVP_PKEY *local_a8;
  ENGINE *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (EVP_PKEY *)0x0;
  if (param_5 == 0) {
    local_a0 = (ENGINE *)0x0;
    if (param_2 == (char *)0x0) {
      if (param_4 != 0) {
        local_e0 = EVP_PKEY_asn1_find(&local_a0,param_4);
        goto LAB_00531184;
      }
LAB_00531234:
      ENGINE_finish((ENGINE *)0x0);
    }
    else {
      local_e0 = EVP_PKEY_asn1_find_str(&local_a0,param_2,-1);
LAB_00531184:
      if (local_a0 == (ENGINE *)0x0) goto LAB_00531234;
      ENGINE_finish(local_a0);
      if (local_e0 != (EVP_PKEY_ASN1_METHOD *)0x0) goto LAB_00530fb2;
    }
    pcVar3 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar3 = OBJ_nid2sn(param_4);
    }
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(param_1,pcVar3,param_3);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      ERR_set_mark();
      iVar2 = EVP_PKEY_fromdata_init(ctx);
      if (iVar2 != 1) {
        ERR_pop_to_mark();
        goto LAB_00530fb4;
      }
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      ERR_clear_last_mark();
      puVar5 = &DAT_007c4ad5;
      if (param_8 == 0) {
        puVar5 = &DAT_007da6af;
      }
      OSSL_PARAM_construct_octet_string(local_d8,puVar5,param_6,param_7);
      local_78._0_8_ = local_b8;
      iVar2 = EVP_PKEY_fromdata(ctx,&local_a8,0x87,local_98);
      if (iVar2 == 1) goto LAB_0053111f;
      ERR_new();
      uVar4 = 0x1a6;
      goto LAB_005310ed;
    }
  }
  else {
LAB_00530fb2:
    ctx = (EVP_PKEY_CTX *)0x0;
LAB_00530fb4:
    local_a8 = EVP_PKEY_new();
    if (local_a8 == (EVP_PKEY *)0x0) {
      ERR_new(0);
      ERR_set_debug("../crypto/evp/p_lib.c",0x1b6,"new_raw_key_int");
      ERR_set_error(6,0xc0100,0);
    }
    else {
      iVar2 = pkey_set_type(local_a8,param_5,param_4,param_2,0xffffffff,0);
      if ((iVar2 != 0) && (lVar1 = *(long *)&local_a8->references, lVar1 != 0)) {
        if (param_8 == 0) {
          if (*(code **)(lVar1 + 0x100) == (code *)0x0) {
            ERR_new();
            uVar4 = 0x1ce;
            goto LAB_005312c1;
          }
          iVar2 = (**(code **)(lVar1 + 0x100))(local_a8,param_6,param_7);
          if (iVar2 != 0) goto LAB_0053111f;
          ERR_new();
          uVar4 = 0x1d3;
        }
        else {
          if (*(code **)(lVar1 + 0xf8) == (code *)0x0) {
            ERR_new();
            uVar4 = 0x1c4;
LAB_005312c1:
            ERR_set_debug("../crypto/evp/p_lib.c",uVar4,"new_raw_key_int");
            ERR_set_error(6,0x96,0);
            goto LAB_00531111;
          }
          iVar2 = (**(code **)(lVar1 + 0xf8))(local_a8,param_6,param_7);
          if (iVar2 != 0) goto LAB_0053111f;
          ERR_new();
          uVar4 = 0x1c9;
        }
LAB_005310ed:
        ERR_set_debug("../crypto/evp/p_lib.c",uVar4,"new_raw_key_int");
        ERR_set_error(6,0xb4,0);
      }
    }
  }
LAB_00531111:
  EVP_PKEY_free(local_a8);
  local_a8 = (EVP_PKEY *)0x0;
LAB_0053111f:
  EVP_PKEY_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_a8;
}

