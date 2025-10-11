
int provider_activate(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  ERR_STRING_DATA *str;
  DSO_FUNC_TYPE pDVar5;
  char *pcVar6;
  char *pcVar7;
  DSO *pDVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  char *ptr;
  long lVar13;
  long in_FS_OFFSET;
  char *local_60;
  int *local_50;
  undefined8 local_48;
  long local_40;
  
  lVar13 = *(long *)(param_1 + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar13 == 0) {
    local_50 = (int *)0x0;
    local_48 = 0;
    if ((*param_1 & 1) != 0) {
      ERR_new();
      pcVar6 = "provider_init";
      uVar11 = 0x343;
LAB_0041e501:
      iVar3 = -1;
      ERR_set_debug("../crypto/provider_core.c",uVar11,pcVar6);
      ERR_set_error(0xf,0xc0103,0);
      goto LAB_0041e16a;
    }
    pDVar5 = *(DSO_FUNC_TYPE *)(param_1 + 0x40);
    if (pDVar5 == (DSO_FUNC_TYPE)0x0) {
      pDVar8 = *(DSO **)(param_1 + 0x38);
      if (pDVar8 != (DSO *)0x0) {
LAB_0041e48d:
        pDVar5 = DSO_bind_func(pDVar8,"OSSL_provider_init");
        *(DSO_FUNC_TYPE *)(param_1 + 0x40) = pDVar5;
LAB_0041e4a0:
        if (pDVar5 != (DSO_FUNC_TYPE)0x0) goto LAB_0041e250;
        goto LAB_0041e4a9;
      }
      lVar13 = DSO_new();
      *(long *)(param_1 + 0x38) = lVar13;
      if (lVar13 != 0) {
        lVar13 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1,provider_store_method);
        if (lVar13 == 0) {
          ERR_new();
          pcVar6 = "get_provider_store";
          uVar11 = 0x154;
          goto LAB_0041e501;
        }
        iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar13 + 0x18));
        if (iVar3 == 0) goto LAB_0041e430;
        if (*(char **)(lVar13 + 0x28) == (char *)0x0) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar13 + 0x18));
          local_60 = (char *)ossl_safe_getenv("OPENSSL_MODULES");
          pcVar6 = (char *)0x0;
          if (local_60 == (char *)0x0) {
            local_60 = "/usr/lib/x86_64-linux-gnu/ossl-modules";
          }
        }
        else {
          pcVar6 = CRYPTO_strdup(*(char **)(lVar13 + 0x28),"../crypto/provider_core.c",0x361);
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar13 + 0x18));
          local_60 = pcVar6;
          if (pcVar6 == (char *)0x0) {
            ERR_new();
            iVar3 = -1;
            ERR_set_debug("../crypto/provider_core.c",0x364,"provider_init");
            ERR_set_error(0xf,0xc0100,0);
            goto LAB_0041e16a;
          }
        }
        DSO_ctrl(*(DSO **)(param_1 + 0x38),2,2,(void *)0x0);
        pcVar9 = (char *)0x0;
        pcVar7 = *(char **)(param_1 + 0x30);
        if (*(char **)(param_1 + 0x30) == (char *)0x0) {
          ptr = (char *)0x0;
          pcVar9 = DSO_convert_filename(*(DSO **)(param_1 + 0x38),*(char **)(param_1 + 0x28));
          pcVar7 = pcVar9;
          if (pcVar9 != (char *)0x0) goto LAB_0041e5cf;
LAB_0041e68b:
          DSO_free(*(DSO **)(param_1 + 0x38));
          param_1[0x38] = 0;
          param_1[0x39] = 0;
          param_1[0x3a] = 0;
          param_1[0x3b] = 0;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
        }
        else {
LAB_0041e5cf:
          pcVar7 = DSO_merge(*(DSO **)(param_1 + 0x38),pcVar7,local_60);
          ptr = pcVar9;
          if ((pcVar7 == (char *)0x0) ||
             (pDVar8 = DSO_load(*(DSO **)(param_1 + 0x38),pcVar7,(DSO_METHOD *)0x0,0),
             pDVar8 == (DSO *)0x0)) goto LAB_0041e68b;
        }
        CRYPTO_free(pcVar7);
        CRYPTO_free(ptr);
        CRYPTO_free(pcVar6);
        pDVar8 = *(DSO **)(param_1 + 0x38);
        if (pDVar8 != (DSO *)0x0) goto LAB_0041e48d;
        pDVar5 = *(DSO_FUNC_TYPE *)(param_1 + 0x40);
        goto LAB_0041e4a0;
      }
    }
    else {
LAB_0041e250:
      iVar3 = (*pDVar5)(param_1,core_dispatch_,&local_50,&local_48);
      if (iVar3 == 0) {
LAB_0041e4a9:
        ERR_new();
        ERR_set_debug("../crypto/provider_core.c",0x391,"provider_init");
        iVar3 = -1;
        ERR_set_error(0xf,0xc0105,"name=%s",*(undefined8 *)(param_1 + 0x28));
        goto LAB_0041e16a;
      }
      pcVar12 = (code *)0x0;
      iVar3 = *local_50;
      *(int **)(param_1 + 0xd8) = local_50;
      *(undefined8 *)(param_1 + 0xd0) = local_48;
      piVar2 = local_50;
      if (iVar3 != 0) {
        do {
          local_50 = piVar2 + 4;
          switch(iVar3) {
          case 0x400:
            *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x401:
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x402:
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x403:
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x404:
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x405:
            pcVar12 = *(code **)(piVar2 + 2);
            break;
          case 0x406:
            *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x407:
            *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(piVar2 + 2);
          }
          iVar3 = *local_50;
          piVar2 = local_50;
        } while (iVar3 != 0);
        if (pcVar12 != (code *)0x0) {
          puVar4 = (uint *)(*pcVar12)();
          uVar1 = *puVar4;
          if (uVar1 == 0) {
            lVar10 = 0x20;
            lVar13 = 1;
          }
          else {
            lVar10 = 0;
            do {
              lVar13 = lVar10;
              if (((int)uVar1 < 0) || ((uVar1 & 0x7f800000) != 0)) goto LAB_0041e430;
              lVar10 = lVar13 + 1;
              uVar1 = puVar4[lVar10 * 4];
            } while (uVar1 != 0);
            lVar13 = lVar13 + 2;
            lVar10 = lVar10 * 0x10 + 0x20;
          }
          str = (ERR_STRING_DATA *)CRYPTO_zalloc(lVar10,"../crypto/provider_core.c",0x3d8);
          *(ERR_STRING_DATA **)(param_1 + 0x68) = str;
          if (str == (ERR_STRING_DATA *)0x0) goto LAB_0041e430;
          uVar1 = *(uint *)(param_1 + 0x60);
          lVar10 = 0;
          str->error = (ulong)((uVar1 & 0xff) << 0x17);
          str->string = *(char **)(param_1 + 0x28);
          do {
            *(long *)((long)&str[1].error + lVar10) = (long)*(int *)((long)puVar4 + lVar10);
            *(undefined8 *)((long)&str[1].string + lVar10) =
                 *(undefined8 *)((long)puVar4 + lVar10 + 8);
            lVar10 = lVar10 + 0x10;
          } while (lVar13 << 4 != lVar10);
          ERR_load_strings(uVar1,str);
        }
      }
      *param_1 = *param_1 | 1;
      if ((((param_1[200] & 1) == 0) || (param_3 == 0)) ||
         (iVar3 = ossl_provider_up_ref_parent(param_1,1), iVar3 != 0)) {
        *param_1 = *param_1 | 2;
        iVar3 = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x20) = iVar3;
        goto LAB_0041e16a;
      }
    }
  }
  else {
    if (((param_1[200] & 1) == 0) || (param_3 == 0)) {
      if (param_2 == 0) goto LAB_0041e151;
LAB_0041e1b0:
      iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar13 + 0x20));
      if (iVar3 == 0) {
LAB_0041e654:
        if ((param_3 != 0) && ((param_1[200] & 1) != 0)) {
          ossl_provider_free_parent(param_1,1);
        }
        goto LAB_0041e430;
      }
      iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 8));
      if (iVar3 == 0) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar13 + 0x20));
        goto LAB_0041e654;
      }
      *param_1 = *param_1 | 2;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 != 1) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar13 + 0x20));
        goto LAB_0041e16a;
      }
      iVar3 = create_provider_children(param_1);
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar13 + 0x20));
    }
    else {
      iVar3 = ossl_provider_up_ref_parent(param_1,1);
      if (iVar3 == 0) goto LAB_0041e430;
      if (param_2 != 0) goto LAB_0041e1b0;
LAB_0041e151:
      *param_1 = *param_1 | 2;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 != 1) goto LAB_0041e16a;
      iVar3 = create_provider_children(param_1);
    }
    if (iVar3 != 0) {
      iVar3 = 1;
      goto LAB_0041e16a;
    }
  }
LAB_0041e430:
  iVar3 = -1;
LAB_0041e16a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

