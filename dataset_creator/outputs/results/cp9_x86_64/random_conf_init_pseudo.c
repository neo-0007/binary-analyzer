
undefined4 random_conf_init(CONF_IMODULE *param_1,CONF *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *section;
  stack_st_CONF_VALUE *psVar4;
  long lVar5;
  int iVar6;
  undefined4 local_3c;
  
  uVar2 = NCONF_get0_libctx(param_2);
  lVar3 = ossl_lib_ctx_get_data(uVar2,5,rand_drbg_ossl_ctx_method);
  section = CONF_imodule_get_value(param_1);
  psVar4 = NCONF_get_section(param_2,section);
  if (psVar4 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_lib.c",0x2fb,"random_conf_init");
    ERR_set_error(0xf,0x77,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
    iVar6 = 0;
    if (lVar3 == 0) {
LAB_0042f0d0:
      local_3c = 0;
    }
    else {
      for (; iVar1 = OPENSSL_sk_num(psVar4), iVar6 < iVar1; iVar6 = iVar6 + 1) {
        lVar5 = OPENSSL_sk_value(psVar4,iVar6);
        iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 8),"random");
        if (iVar1 == 0) {
          iVar1 = random_set_string(lVar3 + 0x20,*(undefined8 *)(lVar5 + 0x10));
joined_r0x0042f174:
          if (iVar1 == 0) goto LAB_0042f0d0;
        }
        else {
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 8),"cipher");
          if (iVar1 == 0) {
            iVar1 = random_set_string(lVar3 + 0x28,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x0042f174;
          }
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 8),"digest");
          if (iVar1 == 0) {
            iVar1 = random_set_string(lVar3 + 0x30,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x0042f174;
          }
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 8),"properties");
          if (iVar1 == 0) {
            iVar1 = random_set_string(lVar3 + 0x38,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x0042f174;
          }
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 8),"seed");
          if (iVar1 == 0) {
            iVar1 = random_set_string(lVar3 + 0x40,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x0042f174;
          }
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 8),"seed_properties");
          if (iVar1 == 0) {
            iVar1 = random_set_string(lVar3 + 0x48,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x0042f174;
          }
          ERR_new();
          ERR_set_debug("../crypto/rand/rand_lib.c",0x317,"random_conf_init");
          ERR_set_error(0xf,0x78,"name=%s, value=%s",*(undefined8 *)(lVar5 + 8),
                        *(undefined8 *)(lVar5 + 0x10));
          local_3c = 0;
        }
      }
    }
  }
  return local_3c;
}

