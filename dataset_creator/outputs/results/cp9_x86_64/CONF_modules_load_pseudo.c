
int CONF_modules_load(CONF *cnf,char *appname,ulong flags)

{
  char *__s;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  stack_st_CONF_VALUE *psVar7;
  char *pcVar8;
  DSO *dso;
  DSO_FUNC_TYPE pDVar9;
  ulong uVar10;
  ulong *ptr;
  code *pcVar11;
  size_t sVar12;
  int iVar13;
  undefined8 uVar14;
  void *ptr_00;
  int iVar15;
  
  if (cnf == (CONF *)0x0) {
    return 1;
  }
  lVar4 = _CONF_get_number(cnf,(char *)0x0,"config_diagnostics");
  uVar5 = flags & 0xffffffffffffffe8;
  if (lVar4 == 0) {
    uVar5 = flags;
  }
  ERR_set_mark();
  if (appname != (char *)0x0) {
    pcVar6 = NCONF_get_string(cnf,(char *)0x0,appname);
    if (pcVar6 != (char *)0x0) goto LAB_004c0c23;
    if ((uVar5 & 0x20) == 0) goto LAB_004c0d7f;
  }
  pcVar6 = NCONF_get_string(cnf,(char *)0x0,"openssl_conf");
  if (pcVar6 == (char *)0x0) {
LAB_004c0d7f:
    ERR_pop_to_mark();
    return 1;
  }
LAB_004c0c23:
  psVar7 = NCONF_get_section(cnf,pcVar6);
  if (psVar7 == (stack_st_CONF_VALUE *)0x0) {
    if ((uVar5 & 4) != 0) {
      ERR_pop_to_mark();
      return 0;
    }
    ERR_clear_last_mark();
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_mod.c",0x7d,"CONF_modules_load");
    ERR_set_error(0xe,0x7c,"openssl_conf=%s",pcVar6);
    return 0;
  }
  ERR_pop_to_mark();
  iVar13 = 0;
  iVar2 = OPENSSL_sk_num(psVar7);
  if (0 < iVar2) {
    do {
      lVar4 = OPENSSL_sk_value(psVar7,iVar13);
      ERR_set_mark();
      pcVar6 = *(char **)(lVar4 + 0x10);
      __s = *(char **)(lVar4 + 8);
      iVar2 = CRYPTO_THREAD_run_once(&load_builtin_modules,do_load_builtin_modules_ossl_);
      if ((iVar2 == 0) || (do_load_builtin_modules_ossl_ret_ == 0)) {
joined_r0x004c0d25:
        if ((uVar5 & 1) == 0) {
          ERR_clear_last_mark();
          return -1;
        }
      }
      else {
        pcVar8 = rindex(__s,0x2e);
        if (pcVar8 == (char *)0x0) {
          sVar12 = strlen(__s);
          iVar2 = (int)sVar12;
        }
        else {
          iVar2 = (int)pcVar8 - (int)__s;
        }
        for (iVar15 = 0; iVar3 = OPENSSL_sk_num(supported_modules), iVar15 < iVar3;
            iVar15 = iVar15 + 1) {
          uVar10 = OPENSSL_sk_value(supported_modules,iVar15);
          iVar3 = strncmp(*(char **)(uVar10 + 8),__s,(long)iVar2);
          if (iVar3 == 0) goto LAB_004c0e20;
        }
        if ((uVar5 & 8) != 0) {
LAB_004c0d15:
          if ((uVar5 & 4) == 0) {
            ERR_new();
            ERR_set_debug("../crypto/conf/conf_mod.c",0xe9,"module_run");
            ERR_set_error(0xe,0x71,"module=%s");
          }
          goto joined_r0x004c0d25;
        }
        pcVar8 = _CONF_get_string(cnf,pcVar6,"path");
        if (pcVar8 == (char *)0x0) {
          pcVar8 = __s;
        }
        dso = DSO_load((DSO *)0x0,pcVar8,(DSO_METHOD *)0x0,0);
        if (dso == (DSO *)0x0) {
          uVar10 = 0x6e;
LAB_004c1029:
          DSO_free(dso);
          ERR_new();
          ERR_set_debug("../crypto/conf/conf_mod.c",0x120,"module_load_dso");
          ERR_set_error(0xe,uVar10 & 0xffffffff,"module=%s, path=%s",__s,pcVar8);
          goto LAB_004c0d15;
        }
        pDVar9 = DSO_bind_func(dso,"OPENSSL_init");
        if (pDVar9 == (DSO_FUNC_TYPE)0x0) {
          uVar10 = 0x70;
          goto LAB_004c1029;
        }
        DSO_bind_func(dso,"OPENSSL_finish");
        uVar10 = module_add(dso,__s,pDVar9);
        if (uVar10 == 0) goto LAB_004c1029;
LAB_004c0e20:
        ptr = (ulong *)CRYPTO_malloc(0x28,"../crypto/conf/conf_mod.c",0x169);
        if (ptr == (ulong *)0x0) {
LAB_004c0f3f:
          if ((uVar5 & 4) == 0) {
            ERR_new();
            ERR_set_debug("../crypto/conf/conf_mod.c",0xf3,"module_run");
            ERR_set_error(0xe,0x6d,"module=%s, value=%s retcode=%-8d",__s,pcVar6,0xffffffff);
          }
          goto joined_r0x004c0d25;
        }
        *ptr = uVar10;
        pcVar8 = CRYPTO_strdup(__s,"../crypto/conf/conf_mod.c",0x16e);
        ptr[1] = (ulong)pcVar8;
        pcVar8 = CRYPTO_strdup(pcVar6,"../crypto/conf/conf_mod.c",0x16f);
        ptr_00 = (void *)ptr[1];
        ptr[4] = 0;
        ptr[2] = (ulong)pcVar8;
        if ((ptr_00 == (void *)0x0) || (pcVar8 == (char *)0x0)) {
LAB_004c0f11:
          CRYPTO_free(ptr_00);
          CRYPTO_free((void *)ptr[2]);
          CRYPTO_free(ptr);
          goto LAB_004c0f3f;
        }
        if (*(code **)(uVar10 + 0x10) != (code *)0x0) {
          bVar1 = true;
          iVar2 = (**(code **)(uVar10 + 0x10))(ptr,cnf);
          if (0 < iVar2) goto joined_r0x004c0fdd;
          pcVar11 = *(code **)(uVar10 + 0x18);
          if (pcVar11 != (code *)0x0) goto LAB_004c0f08;
LAB_004c0f0d:
          ptr_00 = (void *)ptr[1];
          goto LAB_004c0f11;
        }
        bVar1 = false;
joined_r0x004c0fdd:
        if ((initialized_modules == 0) &&
           (initialized_modules = OPENSSL_sk_new_null(), initialized_modules == 0)) {
          ERR_new(0);
          uVar14 = 0x181;
LAB_004c0edf:
          ERR_set_debug("../crypto/conf/conf_mod.c",uVar14,"module_init");
          ERR_set_error(0xe,0xc0100,0);
          pcVar11 = *(code **)(uVar10 + 0x18);
          if ((pcVar11 != (code *)0x0) && (bVar1)) {
LAB_004c0f08:
            (*pcVar11)(ptr);
          }
          goto LAB_004c0f0d;
        }
        iVar2 = OPENSSL_sk_push(initialized_modules,ptr);
        if (iVar2 == 0) {
          ERR_new();
          uVar14 = 0x187;
          goto LAB_004c0edf;
        }
        *(int *)(uVar10 + 0x20) = *(int *)(uVar10 + 0x20) + 1;
      }
      ERR_pop_to_mark();
      iVar13 = iVar13 + 1;
      iVar2 = OPENSSL_sk_num(psVar7);
    } while (iVar13 < iVar2);
  }
  return 1;
}

