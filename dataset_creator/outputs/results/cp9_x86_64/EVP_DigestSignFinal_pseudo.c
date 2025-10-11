
int EVP_DigestSignFinal(EVP_MD_CTX *ctx,uchar *sigret,size_t *siglen)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  EVP_PKEY_CTX *pEVar5;
  EVP_MD_CTX *out;
  uchar *tbs;
  size_t sVar6;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  pEVar5 = (EVP_PKEY_CTX *)ctx->update;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pEVar5 == (EVP_PKEY_CTX *)0x0) {
LAB_0052cc58:
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/evp/m_sigver.c",0x1f0,"EVP_DigestSignFinal");
    ERR_set_error(6,0x86,0);
  }
  else {
    if (((*(int *)pEVar5 == 0x80) && (*(long *)(pEVar5 + 0x30) != 0)) &&
       (lVar4 = *(long *)(pEVar5 + 0x28), lVar4 != 0)) {
      if (sigret == (uchar *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x78);
        sVar6 = 0;
      }
      else {
        if (((ulong)ctx->md_data & 0x200) == 0) {
          pEVar5 = EVP_PKEY_CTX_dup(pEVar5);
          if (pEVar5 == (EVP_PKEY_CTX *)0x0) goto LAB_0052cbe0;
          uVar3 = (**(code **)(*(long *)(pEVar5 + 0x28) + 0x78))
                            (*(undefined8 *)(pEVar5 + 0x30),sigret,siglen,*siglen);
          EVP_PKEY_CTX_free(pEVar5);
          goto LAB_0052cb70;
        }
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x78);
        sVar6 = *siglen;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0052ca97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE_00)(*(long *)(pEVar5 + 0x30),sigret,siglen,sVar6);
        return iVar2;
      }
      goto LAB_0052cdd7;
    }
    lVar4 = *(long *)(pEVar5 + 0x78);
    if (lVar4 == 0) goto LAB_0052cc58;
    if (((byte)pEVar5[0xa0] & 1) != 0) {
      iVar2 = (**(code **)(lVar4 + 0xf8))(pEVar5);
      if (iVar2 == 0) goto LAB_0052cbe0;
      lVar4 = *(long *)(pEVar5 + 0x78);
    }
    pEVar5[0xa0] = (EVP_PKEY_CTX)((byte)pEVar5[0xa0] & 0xfe);
    if ((*(uint *)(lVar4 + 4) & 4) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        if (sigret == (uchar *)0x0) {
          iVar2 = EVP_MD_get_size(ctx->engine);
          if (iVar2 < 0) goto LAB_0052cbe0;
          sVar6 = (size_t)iVar2;
          tbs = (uchar *)0x0;
          sigret = (uchar *)0x0;
        }
        else {
          local_8c = 0;
          bVar1 = false;
          if (((ulong)ctx->md_data & 0x200) == 0) goto LAB_0052ccd0;
          bVar1 = false;
          uVar3 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
LAB_0052cc1e:
          if ((uVar3 == 0) || (bVar1)) goto LAB_0052cb70;
          sVar6 = (size_t)local_8c;
          tbs = local_88;
        }
        iVar2 = EVP_PKEY_sign(pEVar5,sigret,siglen,tbs,sVar6);
        uVar3 = (uint)(0 < iVar2);
      }
      else if (sigret == (uchar *)0x0) {
        iVar2 = (*UNRECOVERED_JUMPTABLE_00)(pEVar5,0,siglen,ctx);
        uVar3 = (uint)(0 < iVar2);
      }
      else {
        local_8c = 0;
        bVar1 = true;
        if (((ulong)ctx->md_data & 0x200) == 0) {
LAB_0052ccd0:
          local_8c = 0;
          out = (EVP_MD_CTX *)EVP_MD_CTX_new();
          uVar3 = 0;
          if (out != (EVP_MD_CTX *)0x0) {
            iVar2 = EVP_MD_CTX_copy_ex(out,ctx);
            if (iVar2 != 0) {
              if (bVar1) {
                uVar3 = (**(code **)(*(long *)(out->update + 0x78) + 0x78))
                                  (out->update,sigret,siglen,out);
              }
              else {
                uVar3 = EVP_DigestFinal_ex(out,local_88,&local_8c);
              }
              EVP_MD_CTX_free(out);
              goto LAB_0052cc1e;
            }
            EVP_MD_CTX_free(out);
            goto LAB_0052cbe0;
          }
        }
        else {
          uVar3 = (*UNRECOVERED_JUMPTABLE_00)(pEVar5,sigret,siglen,ctx);
        }
      }
    }
    else {
      if (sigret == (uchar *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x78);
          sigret = (uchar *)0x0;
LAB_0052cafd:
                    /* WARNING: Could not recover jumptable at 0x0052cb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar2 = (*UNRECOVERED_JUMPTABLE_00)(pEVar5,sigret,siglen,ctx);
          return iVar2;
        }
        goto LAB_0052cdd7;
      }
      if (((ulong)ctx->md_data & 0x200) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x78);
          goto LAB_0052cafd;
        }
        goto LAB_0052cdd7;
      }
      pEVar5 = EVP_PKEY_CTX_dup(pEVar5);
      if (pEVar5 != (EVP_PKEY_CTX *)0x0) {
        uVar3 = (**(code **)(*(long *)(pEVar5 + 0x78) + 0x78))(pEVar5,sigret,siglen,ctx);
        EVP_PKEY_CTX_free(pEVar5);
        goto LAB_0052cb70;
      }
LAB_0052cbe0:
      uVar3 = 0;
    }
  }
LAB_0052cb70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_0052cdd7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

