
/* WARNING: Type propagation algorithm not settling */

undefined8 * OSSL_PARAM_merge(long *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t __nmemb;
  size_t sVar7;
  size_t __nmemb_00;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 **__base;
  long in_FS_OFFSET;
  undefined8 *local_858 [130];
  undefined8 *local_448 [129];
  long local_40;
  
  ppuVar8 = local_858;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (long *)0x0 || param_2 != (long *)0x0) {
    if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
      sVar7 = 0;
      do {
        __nmemb_00 = sVar7 + 1;
        local_858[sVar7] = param_1;
        param_1 = param_1 + 5;
        if (*param_1 == 0) {
          local_858[__nmemb_00] = (undefined8 *)0x0;
          if ((param_2 != (long *)0x0) && (*param_2 != 0)) goto LAB_0041d376;
          __nmemb = 0;
          local_448[0] = (undefined8 *)0x0;
          lVar9 = (sVar7 * 5 + 10) * 8;
          goto LAB_0041d3bd;
        }
        sVar7 = __nmemb_00;
      } while (__nmemb_00 != 0x80);
      local_858[0x80] = (undefined8 *)0x0;
      if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
        lVar9 = 0x1428;
        __nmemb = 0;
        local_448[0] = (undefined8 *)0x0;
      }
      else {
LAB_0041d376:
        __nmemb = 0;
        do {
          sVar7 = __nmemb;
          __nmemb = sVar7 + 1;
          local_858[sVar7 + 0x82] = param_2;
          param_2 = param_2 + 5;
          if (*param_2 == 0) break;
        } while (__nmemb != 0x80);
        local_858[sVar7 + 0x83] = (undefined8 *)0x0;
        lVar9 = (__nmemb_00 + 1 + __nmemb) * 0x28;
      }
LAB_0041d3bd:
      __base = local_858 + 0x82;
      qsort(local_858,__nmemb_00,8,compare_params);
      qsort(__base,__nmemb,8,compare_params);
      puVar3 = (undefined8 *)CRYPTO_zalloc(lVar9,"../crypto/params_dup.c",0xb5);
      puVar6 = puVar3;
      puVar4 = local_858[0];
      if (puVar3 != (undefined8 *)0x0) {
joined_r0x0041d414:
        puVar5 = puVar6;
        if (puVar4 != (undefined8 *)0x0) {
          do {
            puVar6 = puVar5 + 5;
            if (*__base == (undefined8 *)0x0) {
              puVar6 = *ppuVar8;
              do {
                uVar1 = puVar6[1];
                ppuVar8 = (undefined8 **)((long *)ppuVar8 + 1);
                *puVar5 = *puVar6;
                puVar5[1] = uVar1;
                uVar1 = puVar6[3];
                puVar5[2] = puVar6[2];
                puVar5[3] = uVar1;
                puVar5[4] = puVar6[4];
                puVar6 = *ppuVar8;
                puVar5 = puVar5 + 5;
              } while (puVar6 != (undefined8 *)0x0);
              goto LAB_0041d510;
            }
            iVar2 = OPENSSL_strcasecmp(*puVar4,**__base);
            if (iVar2 == 0) {
              puVar4 = *__base;
              __base = __base + 1;
              uVar1 = puVar4[1];
              *puVar5 = *puVar4;
              puVar5[1] = uVar1;
              uVar1 = puVar4[3];
              puVar5[2] = puVar4[2];
              puVar5[3] = uVar1;
              puVar5[4] = puVar4[4];
            }
            else {
              if (0 < iVar2) goto code_r0x0041d471;
              puVar4 = *ppuVar8;
              uVar1 = puVar4[1];
              *puVar5 = *puVar4;
              puVar5[1] = uVar1;
              uVar1 = puVar4[3];
              puVar5[2] = puVar4[2];
              puVar5[3] = uVar1;
              puVar5[4] = puVar4[4];
            }
            ppuVar8 = (undefined8 **)((long *)ppuVar8 + 1);
            puVar4 = *ppuVar8;
            puVar5 = puVar6;
            if (puVar4 == (undefined8 *)0x0) break;
          } while( true );
        }
        puVar4 = *__base;
        do {
          uVar1 = puVar4[1];
          __base = __base + 1;
          *puVar6 = *puVar4;
          puVar6[1] = uVar1;
          uVar1 = puVar4[3];
          puVar6[2] = puVar4[2];
          puVar6[3] = uVar1;
          puVar6[4] = puVar4[4];
          puVar4 = *__base;
          puVar6 = puVar6 + 5;
        } while (puVar4 != (undefined8 *)0x0);
        goto LAB_0041d510;
      }
      ERR_new();
      ERR_set_debug("../crypto/params_dup.c",0xb7,"OSSL_PARAM_merge");
      ERR_set_error(0xf,0xc0100,0);
      goto LAB_0041d510;
    }
    local_858[0] = (undefined8 *)0x0;
    if (param_2 != (long *)0x0) {
      local_858[0] = (undefined8 *)0x0;
      __nmemb_00 = 0;
      if (*param_2 != 0) goto LAB_0041d376;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_0041d510:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x0041d471:
  puVar4 = *__base;
  __base = __base + 1;
  uVar1 = puVar4[1];
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  uVar1 = puVar4[3];
  puVar5[2] = puVar4[2];
  puVar5[3] = uVar1;
  puVar5[4] = puVar4[4];
  puVar4 = *ppuVar8;
  goto joined_r0x0041d414;
}

