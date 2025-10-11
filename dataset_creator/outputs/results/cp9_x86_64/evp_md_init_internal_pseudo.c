
int evp_md_init_internal(EVP_MD_CTX *param_1,EVP_MD *param_2,undefined8 param_3,ENGINE *param_4)

{
  _func_1088 *p_Var1;
  code *pcVar2;
  int iVar3;
  ENGINE *pEVar4;
  EVP_MD *pEVar5;
  uint uVar6;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  size_t extraout_RDX_02;
  ulong count;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  char *pcVar7;
  undefined8 uVar8;
  EVP_PKEY_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  undefined1 auVar9 [16];
  
  p_Var1 = param_1->update;
  if (p_Var1 != (_func_1088 *)0x0) {
    iVar3 = *(int *)p_Var1;
    if ((iVar3 == 0x10) || (iVar3 == 0x80)) {
      if (*(long *)(p_Var1 + 0x30) != 0) {
        if (iVar3 == 0x80) {
          iVar3 = EVP_DigestSignInit(param_1,(EVP_PKEY_CTX **)0x0,param_2,param_4,(EVP_PKEY *)0x0);
          return iVar3;
        }
        goto LAB_0051928e;
      }
    }
    else if ((((iVar3 - 0x20U & 0xffffffdf) == 0) || (iVar3 == 0x100)) &&
            (*(long *)(p_Var1 + 0x30) != 0)) {
LAB_0051928e:
      if (iVar3 == 0x100) {
        iVar3 = EVP_DigestVerifyInit(param_1,(EVP_PKEY_CTX **)0x0,param_2,param_4,(EVP_PKEY *)0x0);
        return iVar3;
      }
      ERR_new();
      ERR_set_debug("../crypto/evp/digest.c",0xa5,"evp_md_init_internal");
      ERR_set_error(6,0xbd,0);
      return 0;
    }
  }
  pcVar7 = &_nl_current_LC_PAPER_used;
  EVP_MD_CTX_clear_flags(param_1,2);
  count = extraout_RDX;
  if (param_1[1].engine != (ENGINE *)0x0) {
    if (param_1->engine == (ENGINE *)0x0) {
      ERR_new();
      uVar8 = 0xae;
      goto LAB_00519591;
    }
    pcVar2 = *(code **)(param_1->engine + 0xb0);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      count = extraout_RDX_00;
    }
    param_1[1].engine = (ENGINE *)0x0;
  }
  if (param_2 == (EVP_MD *)0x0) {
    pEVar5 = (EVP_MD *)param_1->engine;
    if (pEVar5 == (EVP_MD *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/digest.c",0xba,"evp_md_init_internal");
      ERR_set_error(6,0x8b,0);
      return 0;
    }
    pEVar4 = (ENGINE *)param_1->flags;
    param_2 = pEVar5;
    if (pEVar4 != (ENGINE *)0x0) goto LAB_00519170;
LAB_0051917c:
    ENGINE_finish(pEVar4);
    param_1->flags = 0;
    if (param_4 == (ENGINE *)0x0) {
      pEVar4 = ENGINE_get_digest_engine(param_2->type);
      if (param_1->flags == 0) {
        if (pEVar4 != (ENGINE *)0x0) {
          if (param_1->engine == (ENGINE *)param_1[1].flags) goto LAB_0051977f;
          EVP_MD_free();
          param_1[1].flags = 0;
          goto LAB_005191c0;
        }
        if ((((ulong)param_1->md_data & 0x100) != 0) || (*(int *)&param_2->init == 2)) {
          if (param_1->engine == (ENGINE *)param_1[1].flags) {
            param_1->engine = (ENGINE *)0x0;
            EVP_MD_free();
            param_1[1].flags = 0;
            count = extraout_RDX_05;
          }
          else {
            EVP_MD_free();
            param_1[1].flags = 0;
            count = extraout_RDX_04;
          }
          goto LAB_005191d8;
        }
        cleanup_old_md_data(param_1,1);
        if (param_2->md_ctrl == (_func_1085 *)0x0) {
          pcVar7 = "NULL";
          if (param_2->type != 0) {
            pcVar7 = OBJ_nid2sn(param_2->type);
          }
          param_2 = (EVP_MD *)EVP_MD_fetch(0,pcVar7,&DAT_008343a2);
          if (param_2 == (EVP_MD *)0x0) {
            ERR_new();
            uVar8 = 0xfe;
            goto LAB_00519591;
          }
          EVP_MD_free(param_1[1].flags);
          ctx_00 = (EVP_MD_CTX *)param_1[1].engine;
          param_1[1].flags = (ulong)param_2;
          if (((ctx_00 != (EVP_MD_CTX *)0x0) &&
              (pEVar5 = (EVP_MD *)param_1->engine, pEVar5 != param_2)) && (pEVar5 != (EVP_MD *)0x0))
          goto LAB_00519427;
LAB_0051943d:
          if (param_2->md_ctrl != (_func_1085 *)0x0) goto LAB_005195c0;
        }
        else {
          ctx_00 = (EVP_MD_CTX *)param_1[1].engine;
          if (((ctx_00 != (EVP_MD_CTX *)0x0) &&
              (pEVar5 = (EVP_MD *)param_1->engine, pEVar5 != (EVP_MD *)0x0)) && (pEVar5 != param_2))
          {
LAB_00519427:
            if (pEVar5[1].cleanup != (_func_1082 *)0x0) {
              (*pEVar5[1].cleanup)(ctx_00);
            }
            param_1[1].engine = (ENGINE *)0x0;
            goto LAB_0051943d;
          }
LAB_005195c0:
          if ((EVP_MD *)param_1[1].flags != param_2) {
            iVar3 = EVP_MD_up_ref(param_2);
            if (iVar3 == 0) {
              ERR_new();
              uVar8 = 0x10e;
LAB_00519559:
              ERR_set_debug("../crypto/evp/digest.c",uVar8,"evp_md_init_internal");
              ERR_set_error(6,0x86,0);
              return 0;
            }
            EVP_MD_free(param_1[1].flags);
            param_1[1].flags = (ulong)param_2;
          }
        }
        param_1->engine = (ENGINE *)param_2;
        if (param_1[1].engine == (ENGINE *)0x0) {
          pcVar2 = (code *)param_2[1].flags;
          uVar8 = ossl_provider_ctx(param_2->md_ctrl);
          pEVar4 = (ENGINE *)(*pcVar2)(uVar8);
          param_1[1].engine = pEVar4;
          if (pEVar4 == (ENGINE *)0x0) {
            ERR_new();
            uVar8 = 0x118;
            goto LAB_00519591;
          }
          param_2 = (EVP_MD *)param_1->engine;
        }
        if (param_2[1].init != (_func_1078 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051947d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (*param_2[1].init)((EVP_MD_CTX *)param_1[1].engine);
          return iVar3;
        }
        ERR_new();
        uVar8 = 0x11e;
LAB_00519591:
        ERR_set_debug("../crypto/evp/digest.c",uVar8,"evp_md_init_internal");
        ERR_set_error(6,0x86,0);
        return 0;
      }
      if (param_1->engine == (ENGINE *)param_1[1].flags) {
LAB_0051977f:
        param_1->engine = (ENGINE *)0x0;
        EVP_MD_free();
        param_1[1].flags = 0;
        count = extraout_RDX_07;
      }
      else {
        EVP_MD_free();
        param_1[1].flags = 0;
        count = extraout_RDX_06;
      }
      if (pEVar4 != (ENGINE *)0x0) goto LAB_005191c0;
    }
    else {
      if (param_1->engine == (ENGINE *)param_1[1].flags) {
        param_1->engine = (ENGINE *)0x0;
        EVP_MD_free();
        param_1[1].flags = 0;
      }
      else {
        EVP_MD_free();
        param_1[1].flags = 0;
      }
      iVar3 = ENGINE_init(param_4);
      pEVar4 = param_4;
      if (iVar3 == 0) {
        ERR_new();
        uVar8 = 299;
        goto LAB_00519559;
      }
LAB_005191c0:
      pcVar7 = (char *)(ulong)(uint)param_2->type;
      param_2 = ENGINE_get_digest(pEVar4,param_2->type);
      count = extraout_RDX_01;
      param_4 = pEVar4;
      if (param_2 == (EVP_MD *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/digest.c",0x137,"evp_md_init_internal");
        ERR_set_error(6,0x86,0);
        ENGINE_finish(pEVar4);
        return 0;
      }
    }
LAB_005191d8:
    param_1->flags = (ulong)param_4;
    if ((EVP_MD *)param_1->engine == param_2) goto LAB_005192e0;
    pcVar7 = (char *)0x1;
    cleanup_old_md_data(param_1);
    param_1->engine = (ENGINE *)param_2;
    if (((ulong)param_1->md_data & 0x100) == 0) {
      iVar3 = *(int *)((long)&param_2->verify + 4);
      if (iVar3 != 0) {
        pcVar7 = "../crypto/evp/digest.c";
        param_1[1].digest = (EVP_MD *)param_2->final;
        auVar9 = CRYPTO_zalloc((long)iVar3,"../crypto/evp/digest.c",0x14c);
        count = auVar9._8_8_;
        param_1->pctx = auVar9._0_8_;
        if (auVar9._0_8_ == (EVP_PKEY_CTX *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/digest.c",0x14e,"evp_md_init_internal");
          ERR_set_error(6,0xc0100,0);
          return 0;
        }
        goto LAB_005192e0;
      }
      ctx = (EVP_PKEY_CTX *)param_1->update;
      count = extraout_RDX_02;
      if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_0051925c;
    }
    else {
      ctx = (EVP_PKEY_CTX *)param_1->update;
      if (ctx == (EVP_PKEY_CTX *)0x0) {
        return 1;
      }
    }
LAB_00519220:
    iVar3 = *(int *)ctx;
    uVar6 = iVar3 - 0x40U & 0xffffffbf;
    count = (ulong)CONCAT31((int3)(uVar6 >> 8),uVar6 != 0);
    if ((((iVar3 - 0x10U & 0xffffffef) != 0 && uVar6 != 0) && (iVar3 != 0x100)) ||
       (*(long *)(ctx + 0x28) == 0)) {
      pcVar7 = (char *)0xffffffff;
      iVar3 = EVP_PKEY_CTX_ctrl(ctx,-1,0x1f0,7,0,param_1);
      count = extraout_RDX_03;
      if ((iVar3 < 1) && (iVar3 != -2)) {
        return 0;
      }
    }
  }
  else {
    pEVar4 = (ENGINE *)param_1->flags;
    param_1->digest = param_2;
    if ((pEVar4 == (ENGINE *)0x0) || (pEVar5 = (EVP_MD *)param_1->engine, pEVar5 == (EVP_MD *)0x0))
    goto LAB_0051917c;
LAB_00519170:
    if (param_2->type != pEVar5->type) goto LAB_0051917c;
LAB_005192e0:
    ctx = (EVP_PKEY_CTX *)param_1->update;
    if (ctx != (EVP_PKEY_CTX *)0x0) goto LAB_00519220;
  }
  if (((ulong)param_1->md_data & 0x100) != 0) {
    return 1;
  }
  param_2 = (EVP_MD *)param_1->engine;
LAB_0051925c:
                    /* WARNING: Could not recover jumptable at 0x00519271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (*param_2->update)(param_1,pcVar7,count);
  return iVar3;
}

