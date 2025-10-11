
undefined4 alg_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  stack_st_CONF_VALUE *psVar4;
  CONF_VALUE *value;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = CONF_imodule_get_value(param_1);
  psVar4 = NCONF_get_section(param_2,pcVar3);
  if (psVar4 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    uVar7 = 0;
    ERR_set_debug("../crypto/evp/evp_cnf.c",0x21,"alg_module_init");
    ERR_set_error(6,0xa5,0);
  }
  else {
    while( true ) {
      iVar2 = OPENSSL_sk_num(psVar4);
      if (iVar2 <= iVar6) break;
      value = (CONF_VALUE *)OPENSSL_sk_value(psVar4,iVar6);
      pcVar3 = value->name;
      iVar2 = strcmp(pcVar3,"fips_mode");
      if (iVar2 != 0) {
        iVar2 = strcmp(pcVar3,"default_properties");
        if (iVar2 == 0) {
          pcVar3 = value->value;
          uVar5 = NCONF_get0_libctx(param_2);
          iVar2 = evp_set_default_properties_int(uVar5,pcVar3,0,0);
          if (iVar2 != 0) goto LAB_005f3f02;
          ERR_new();
          uVar5 = 0x39;
LAB_005f3f83:
          uVar7 = 0;
          ERR_set_debug("../crypto/evp/evp_cnf.c",uVar5,"alg_module_init");
          ERR_set_error(6,0xd1,0);
        }
        else {
          ERR_new();
          uVar7 = 0;
          ERR_set_debug("../crypto/evp/evp_cnf.c",0x3d,"alg_module_init");
          ERR_set_error(6,0xa9,"name=%s, value=%s",value->name,value->value);
        }
        goto LAB_005f3fa2;
      }
      iVar2 = X509V3_get_value_bool(value,&local_44);
      uVar7 = 0;
      if (iVar2 == 0) goto LAB_005f3fa2;
      bVar1 = 0 < local_44;
      uVar5 = NCONF_get0_libctx(param_2);
      iVar2 = evp_default_properties_enable_fips_int(uVar5,bVar1,0);
      if (iVar2 == 0) {
        ERR_new();
        uVar5 = 0x33;
        goto LAB_005f3f83;
      }
LAB_005f3f02:
      iVar6 = iVar6 + 1;
    }
    uVar7 = 1;
  }
LAB_005f3fa2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

