
long inner_ossl_decoder_fetch_constprop_0
               (undefined8 *param_1,int param_2,long param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = ossl_lib_ctx_get_data(*param_1,0xb,decoder_store_method);
  lVar4 = ossl_namemap_stored(*param_1);
  local_78 = 0;
  pcVar8 = "";
  if (param_4 != (char *)0x0) {
    pcVar8 = param_4;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x15b,"inner_ossl_decoder_fetch");
    ERR_set_error(0x3c,0x80106,0);
    lVar5 = 0;
    goto LAB_00508685;
  }
  if (param_3 != 0) {
    if (param_2 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x164,"inner_ossl_decoder_fetch");
      ERR_set_error(0x3c,0xc0103,0);
      lVar5 = 0;
      goto LAB_00508685;
    }
    if ((param_3 != 0) && (param_2 == 0)) {
      param_2 = ossl_namemap_name2num(lVar4,param_3);
    }
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    local_68 = get_tmp_decoder_store;
    local_60 = get_decoder_from_store;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = param_3;
    param_1[3] = pcVar8;
    local_58 = put_decoder_in_store;
    local_50 = construct_decoder;
    local_48 = destruct_decoder;
    local_70 = 0;
    lVar5 = ossl_method_construct(*param_1,0x15,&local_70,0,&local_68,param_1);
    local_78 = lVar5;
    if (lVar5 != 0) {
      if (param_3 == 0) goto LAB_00508685;
      param_2 = ossl_namemap_name2num(lVar4,param_3);
      if (param_2 != 0) goto LAB_005087fe;
      uVar7 = ~(uint)*(byte *)(param_1 + 5) & 1;
      goto LAB_0050867c;
    }
    bVar1 = *(byte *)(param_1 + 5);
    if (param_3 == 0) goto LAB_00508685;
LAB_00508844:
    uVar7 = ~(uint)bVar1 & 1;
  }
  else {
    iVar2 = ossl_method_store_cache_get(lVar3,0,param_2,pcVar8,&local_78);
    if (iVar2 == 0) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      local_68 = get_tmp_decoder_store;
      local_60 = get_decoder_from_store;
      *(int *)(param_1 + 1) = param_2;
      param_1[2] = param_3;
      param_1[3] = pcVar8;
      local_58 = put_decoder_in_store;
      local_50 = construct_decoder;
      local_48 = destruct_decoder;
      local_70 = 0;
      local_78 = ossl_method_construct(*param_1,0x15,&local_70,0,&local_68,param_1);
      if (local_78 == 0) {
        bVar1 = *(byte *)(param_1 + 5);
        goto LAB_00508844;
      }
LAB_005087fe:
      ossl_method_store_cache_set
                (lVar3,local_70,param_2,pcVar8,local_78,up_ref_decoder,free_decoder);
      uVar7 = ~(uint)*(byte *)(param_1 + 5) & 1;
    }
    else {
      uVar7 = 0;
    }
LAB_0050867c:
    lVar5 = local_78;
    if (local_78 != 0) goto LAB_00508685;
  }
  if (param_3 == 0) {
    param_3 = ossl_namemap_num2name(lVar4,param_2,0);
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x19d,"inner_ossl_decoder_fetch");
  if (param_4 == (char *)0x0) {
    param_4 = "<null>";
  }
  uVar6 = ossl_lib_ctx_get_descriptor(*param_1);
  ERR_set_error(0x3c,0x8010d - uVar7,"%s, Name (%s : %d), Properties (%s)",uVar6,param_3,param_2,
                param_4);
  lVar5 = local_78;
LAB_00508685:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar5;
}

