
long inner_ossl_encoder_fetch_constprop_0
               (undefined8 *param_1,int param_2,long param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(*param_1,10,encoder_store_method);
  lVar3 = ossl_namemap_stored(*param_1);
  local_78 = 0;
  pcVar6 = "";
  if (param_4 != (char *)0x0) {
    pcVar6 = param_4;
  }
  bVar7 = lVar2 == 0 || lVar3 == 0;
  if (bVar7) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_meth.c",0x165,"inner_ossl_encoder_fetch");
    ERR_set_error(0x3b,0x80106,0);
    lVar2 = 0;
    goto LAB_0050a0a0;
  }
  if (param_2 == 0) {
LAB_0050a0c8:
    param_2 = ossl_namemap_name2num(lVar3,param_3);
    if (param_2 != 0) goto LAB_0050a06d;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    local_68 = get_tmp_encoder_store;
    local_60 = get_encoder_from_store;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = param_3;
    param_1[3] = pcVar6;
    local_58 = put_encoder_in_store;
    local_50 = construct_encoder;
    local_48 = destruct_encoder;
    local_70 = 0;
    local_78 = ossl_method_construct(*param_1,0x14,&local_70,0,&local_68,param_1);
    if (local_78 != 0) {
      param_2 = ossl_namemap_name2num(lVar3,param_3);
      goto LAB_0050a28f;
    }
LAB_0050a173:
    uVar5 = (uint)*(byte *)(param_1 + 5);
    if ((param_3 == 0) && (lVar2 = local_78, !bVar7)) goto LAB_0050a0a0;
LAB_0050a185:
    uVar5 = ~uVar5 & 1;
    lVar2 = local_78;
  }
  else {
    if (param_3 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/encoder_meth.c",0x16e,"inner_ossl_encoder_fetch");
      ERR_set_error(0x3b,0xc0103,0);
      lVar2 = 0;
      goto LAB_0050a0a0;
    }
    if (param_2 == 0) goto LAB_0050a0c8;
LAB_0050a06d:
    iVar1 = ossl_method_store_cache_get(lVar2,0,param_2,pcVar6,&local_78);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      local_68 = get_tmp_encoder_store;
      local_60 = get_encoder_from_store;
      *(int *)(param_1 + 1) = param_2;
      param_1[2] = param_3;
      param_1[3] = pcVar6;
      local_58 = put_encoder_in_store;
      local_50 = construct_encoder;
      local_48 = destruct_encoder;
      local_70 = 0;
      local_78 = ossl_method_construct(*param_1,0x14,&local_70,0,&local_68,param_1);
      if (local_78 != 0) {
LAB_0050a28f:
        ossl_method_store_cache_set
                  (lVar2,local_70,param_2,pcVar6,local_78,up_ref_encoder,free_encoder);
        bVar7 = param_2 != 0;
        goto LAB_0050a173;
      }
      uVar5 = (uint)*(byte *)(param_1 + 5);
      goto LAB_0050a185;
    }
    uVar5 = 0;
    lVar2 = local_78;
  }
  local_78 = lVar2;
  if (lVar2 == 0) {
    if (param_3 == 0) {
      param_3 = ossl_namemap_num2name(lVar3,param_2,0);
    }
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_meth.c",0x1a6,"inner_ossl_encoder_fetch");
    if (param_4 == (char *)0x0) {
      param_4 = "<null>";
    }
    uVar4 = ossl_lib_ctx_get_descriptor(*param_1);
    ERR_set_error(0x3b,0x8010d - uVar5,"%s, Name (%s : %d), Properties (%s)",uVar4,param_3,param_2,
                  param_4);
    lVar2 = local_78;
  }
LAB_0050a0a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

