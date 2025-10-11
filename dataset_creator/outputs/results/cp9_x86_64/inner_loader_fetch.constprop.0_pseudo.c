
long inner_loader_fetch_constprop_0(undefined8 *param_1,int param_2,long param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
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
  lVar3 = ossl_lib_ctx_get_data(*param_1,0xf,loader_store_method);
  lVar4 = ossl_namemap_stored(*param_1);
  local_78 = 0;
  pcVar7 = "";
  if (param_4 != (char *)0x0) {
    pcVar7 = param_4;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/store/store_meth.c",0x120,"inner_loader_fetch");
    ERR_set_error(0x2c,0x80106,0);
    lVar3 = 0;
    goto LAB_00435110;
  }
  if ((param_3 != 0) && (param_2 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/store/store_meth.c",0x129,"inner_loader_fetch");
    ERR_set_error(0x2c,0xc0103,0);
    lVar3 = 0;
    goto LAB_00435110;
  }
  if ((param_2 != 0) || (param_3 == 0)) {
    if (param_2 != 0) goto LAB_00435138;
LAB_0043507c:
    param_1[2] = param_3;
    local_68 = get_tmp_loader_store;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    local_60 = get_loader_from_store;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = pcVar7;
    local_58 = put_loader_in_store;
    local_50 = construct_loader;
    local_48 = destruct_loader;
    local_70 = 0;
    local_78 = ossl_method_construct(*param_1,0x16,&local_70,0,&local_68,param_1);
    if (local_78 == 0) {
      bVar1 = *(byte *)(param_1 + 5);
      lVar3 = local_78;
      if (param_3 == 0) goto LAB_00435110;
    }
    else {
      param_2 = ossl_namemap_name2num(lVar4,param_3);
      ossl_method_store_cache_set(lVar3,local_70,param_2,pcVar7,local_78,up_ref_loader,free_loader);
      bVar1 = *(byte *)(param_1 + 5);
      if ((param_2 == 0) && (lVar3 = local_78, param_3 == 0)) goto LAB_00435110;
joined_r0x00435329:
      lVar3 = local_78;
      if (local_78 != 0) goto LAB_00435110;
    }
LAB_00435345:
    if ((~bVar1 & 1) == 0) goto LAB_0043515f;
    uVar6 = 0x8010c;
    pcVar7 = 
    "No store loader found. For standard store loaders you need at least one of the default or base providers available. Did you forget to load them? Info: "
    ;
  }
  else {
    param_2 = ossl_namemap_name2num(lVar4,param_3);
    if (param_2 == 0) goto LAB_0043507c;
LAB_00435138:
    iVar2 = ossl_method_store_cache_get(lVar3,0,param_2,pcVar7,&local_78);
    if (iVar2 == 0) {
      *(int *)(param_1 + 1) = param_2;
      local_68 = get_tmp_loader_store;
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      local_60 = get_loader_from_store;
      param_1[2] = param_3;
      param_1[3] = pcVar7;
      local_58 = put_loader_in_store;
      local_50 = construct_loader;
      local_48 = destruct_loader;
      local_70 = 0;
      local_78 = ossl_method_construct(*param_1,0x16,&local_70,0,&local_68,param_1);
      if (local_78 != 0) {
        ossl_method_store_cache_set
                  (lVar3,local_70,param_2,pcVar7,local_78,up_ref_loader,free_loader);
        bVar1 = *(byte *)(param_1 + 5);
        goto joined_r0x00435329;
      }
      bVar1 = *(byte *)(param_1 + 5);
      goto LAB_00435345;
    }
    lVar3 = local_78;
    if (local_78 != 0) goto LAB_00435110;
LAB_0043515f:
    uVar6 = 0x8010d;
    pcVar7 = "";
  }
  if (param_3 == 0) {
    param_3 = ossl_namemap_num2name(lVar4,param_2,0);
  }
  ERR_new();
  ERR_set_debug("../crypto/store/store_meth.c",0x167,"inner_loader_fetch");
  if (param_4 == (char *)0x0) {
    param_4 = "<null>";
  }
  uVar5 = ossl_lib_ctx_get_descriptor(*param_1);
  ERR_set_error(0x2c,uVar6,"%s%s, Scheme (%s : %d), Properties (%s)",pcVar7,uVar5,param_3,param_2,
                param_4);
  lVar3 = local_78;
LAB_00435110:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar3;
}

