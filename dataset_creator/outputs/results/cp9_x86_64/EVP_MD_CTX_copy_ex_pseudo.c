
int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out,EVP_MD_CTX *in)

{
  ulong uVar1;
  EVP_PKEY_CTX *pEVar2;
  void *pvVar3;
  _func_1088 *p_Var4;
  int iVar5;
  ENGINE *pEVar6;
  EVP_PKEY_CTX *pEVar7;
  undefined8 uVar8;
  
  if (in == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/digest.c",0x211,"EVP_MD_CTX_copy_ex");
    ERR_set_error(6,0xc0102,0);
    return 0;
  }
  pEVar6 = in->engine;
  if (pEVar6 == (ENGINE *)0x0) {
    EVP_MD_CTX_reset();
    if (out[1].flags != 0) {
      EVP_MD_free();
    }
    pEVar6 = in->engine;
    out->digest = in->digest;
    out->engine = pEVar6;
    pvVar3 = in->md_data;
    out->flags = in->flags;
    out->md_data = pvVar3;
    p_Var4 = in->update;
    out->pctx = in->pctx;
    out->update = p_Var4;
    pEVar6 = in[1].engine;
    out[1].digest = in[1].digest;
    out[1].engine = pEVar6;
    out[1].flags = in[1].flags;
  }
  else {
    if ((*(long *)(pEVar6 + 0x70) == 0) || (((ulong)in->md_data & 0x100) != 0)) {
      if ((ENGINE *)in->flags != (ENGINE *)0x0) {
        iVar5 = ENGINE_init((ENGINE *)in->flags);
        if (iVar5 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/digest.c",0x250,"EVP_MD_CTX_copy_ex");
          ERR_set_error(6,0x80026,0);
          return 0;
        }
        pEVar6 = in->engine;
      }
      pEVar7 = (EVP_PKEY_CTX *)0x0;
      if (out->engine == pEVar6) {
        pEVar7 = out->pctx;
        EVP_MD_CTX_set_flags(out,4);
      }
      EVP_MD_CTX_reset(out);
      pEVar6 = in->engine;
      out->digest = in->digest;
      out->engine = pEVar6;
      pvVar3 = in->md_data;
      out->flags = in->flags;
      out->md_data = pvVar3;
      p_Var4 = in->update;
      out->pctx = in->pctx;
      out->update = p_Var4;
      pEVar6 = in[1].engine;
      out[1].digest = in[1].digest;
      out[1].engine = pEVar6;
      out[1].flags = in[1].flags;
      EVP_MD_CTX_clear_flags(out,0x400);
      out->pctx = (EVP_PKEY_CTX *)0x0;
      pEVar2 = in->pctx;
      out->update = (_func_1088 *)0x0;
      if ((pEVar2 != (EVP_PKEY_CTX *)0x0) && (iVar5 = *(int *)(out->engine + 0x4c), iVar5 != 0)) {
        if (pEVar7 == (EVP_PKEY_CTX *)0x0) {
          pEVar7 = (EVP_PKEY_CTX *)CRYPTO_malloc(iVar5,"../crypto/evp/digest.c",0x26b);
          out->pctx = pEVar7;
          if (pEVar7 == (EVP_PKEY_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/evp/digest.c",0x26d,"EVP_MD_CTX_copy_ex");
            ERR_set_error(6,0xc0100,0);
            return 0;
          }
          iVar5 = *(int *)(out->engine + 0x4c);
        }
        else {
          out->pctx = pEVar7;
        }
        memcpy(pEVar7,in->pctx,(long)iVar5);
      }
      pEVar7 = (EVP_PKEY_CTX *)in->update;
      out[1].digest = in[1].digest;
      if (pEVar7 != (EVP_PKEY_CTX *)0x0) {
        pEVar7 = EVP_PKEY_CTX_dup(pEVar7);
        out->update = (_func_1088 *)pEVar7;
        if (pEVar7 == (EVP_PKEY_CTX *)0x0) {
          EVP_MD_CTX_reset(out);
          return 0;
        }
      }
      if (*(code **)(out->engine + 0x38) == (code *)0x0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00519b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar5 = (**(code **)(out->engine + 0x38))(out,in);
      return iVar5;
    }
    if (*(long *)(pEVar6 + 0xb8) == 0) {
      ERR_new();
      uVar8 = 0x223;
LAB_00519c61:
      ERR_set_debug("../crypto/evp/digest.c",uVar8,"EVP_MD_CTX_copy_ex");
      ERR_set_error(6,0xbe,0);
      return 0;
    }
    if (out != (EVP_MD_CTX *)0x0) {
      iVar5 = EVP_MD_CTX_test_flags(out,0x400);
      if (iVar5 == 0) {
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)out->update);
        out->update = (_func_1088 *)0x0;
      }
      evp_md_ctx_clear_digest(out,0,1);
    }
    if (out[1].flags == in[1].flags) {
      pEVar6 = in->engine;
      out->digest = in->digest;
      out->engine = pEVar6;
      pvVar3 = in->md_data;
      out->flags = in->flags;
      out->md_data = pvVar3;
      p_Var4 = in->update;
      out->pctx = in->pctx;
      out->update = p_Var4;
      pEVar6 = in[1].engine;
      out[1].digest = in[1].digest;
      out[1].engine = pEVar6;
      uVar1 = in[1].flags;
      out->update = (_func_1088 *)0x0;
      out[1].flags = uVar1;
      out[1].engine = (ENGINE *)0x0;
    }
    else {
      if (out[1].flags != 0) {
        EVP_MD_free();
      }
      pEVar6 = in->engine;
      out->digest = in->digest;
      out->engine = pEVar6;
      pvVar3 = in->md_data;
      out->flags = in->flags;
      out->md_data = pvVar3;
      p_Var4 = in->update;
      out->pctx = in->pctx;
      out->update = p_Var4;
      pEVar6 = in[1].engine;
      out[1].digest = in[1].digest;
      out[1].engine = pEVar6;
      uVar1 = in[1].flags;
      out->update = (_func_1088 *)0x0;
      out[1].flags = uVar1;
      uVar1 = in[1].flags;
      out[1].engine = (ENGINE *)0x0;
      if (uVar1 != 0) {
        EVP_MD_up_ref();
      }
    }
    if (in[1].engine != (ENGINE *)0x0) {
      pEVar6 = (ENGINE *)(**(code **)(in->engine + 0xb8))();
      out[1].engine = pEVar6;
      if (pEVar6 == (ENGINE *)0x0) {
        ERR_new();
        uVar8 = 0x236;
        goto LAB_00519c61;
      }
    }
  }
  EVP_MD_CTX_clear_flags(out,0x400);
  if ((EVP_PKEY_CTX *)in->update != (EVP_PKEY_CTX *)0x0) {
    pEVar7 = EVP_PKEY_CTX_dup((EVP_PKEY_CTX *)in->update);
    out->update = (_func_1088 *)pEVar7;
    if (pEVar7 == (EVP_PKEY_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/digest.c",0x242,"EVP_MD_CTX_copy_ex");
      ERR_set_error(6,0xbe,0);
      EVP_MD_CTX_reset(out);
      return 0;
    }
  }
  return 1;
}

