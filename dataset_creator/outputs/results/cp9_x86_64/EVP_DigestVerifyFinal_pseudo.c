
int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx,uchar *sig,size_t siglen)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  EVP_PKEY_CTX *pEVar4;
  EVP_MD_CTX *out;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  pEVar4 = (EVP_PKEY_CTX *)ctx->update;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (pEVar4 == (EVP_PKEY_CTX *)0x0) {
LAB_0052cfc0:
    ERR_new();
    ERR_set_debug("../crypto/evp/m_sigver.c",0x26d,"EVP_DigestVerifyFinal");
    ERR_set_error(6,0x86,0);
  }
  else {
    if (((*(int *)pEVar4 != 0x100) || (*(long *)(pEVar4 + 0x30) == 0)) ||
       (*(long *)(pEVar4 + 0x28) == 0)) {
      lVar3 = *(long *)(pEVar4 + 0x78);
      if (lVar3 == 0) goto LAB_0052cfc0;
      if (((byte)pEVar4[0xa0] & 1) != 0) {
        iVar2 = (**(code **)(lVar3 + 0xf8))(pEVar4,ctx);
        if (iVar2 == 0) goto LAB_0052cff0;
        lVar3 = *(long *)(pEVar4 + 0x78);
      }
      pEVar4[0xa0] = (EVP_PKEY_CTX)((byte)pEVar4[0xa0] & 0xfe);
      if (*(code **)(lVar3 + 0x88) == (code *)0x0) {
        bVar1 = false;
        if (((ulong)ctx->md_data & 0x200) == 0) goto LAB_0052d038;
        bVar1 = false;
        iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
      }
      else {
        bVar1 = true;
        if (((ulong)ctx->md_data & 0x200) != 0) {
          iVar2 = (**(code **)(lVar3 + 0x88))(pEVar4,sig,siglen & 0xffffffff,ctx);
          goto LAB_0052cf78;
        }
LAB_0052d038:
        out = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (out == (EVP_MD_CTX *)0x0) {
          iVar2 = -1;
          goto LAB_0052cf78;
        }
        iVar2 = EVP_MD_CTX_copy_ex(out,ctx);
        if (iVar2 == 0) {
          EVP_MD_CTX_free(out);
          iVar2 = -1;
          goto LAB_0052cf78;
        }
        if (bVar1) {
          iVar2 = (**(code **)(*(long *)(out->update + 0x78) + 0x88))
                            (out->update,sig,siglen & 0xffffffff,out);
        }
        else {
          iVar2 = EVP_DigestFinal_ex(out,local_88,&local_8c);
        }
        EVP_MD_CTX_free(out);
      }
      if ((iVar2 != 0) && (!bVar1)) {
        iVar2 = EVP_PKEY_verify(pEVar4,sig,siglen,local_88,(ulong)local_8c);
      }
      goto LAB_0052cf78;
    }
    if (((ulong)ctx->md_data & 0x200) != 0) {
      iVar2 = (**(code **)(*(long *)(pEVar4 + 0x28) + 0x98))();
      goto LAB_0052cf78;
    }
    pEVar4 = EVP_PKEY_CTX_dup(pEVar4);
    if (pEVar4 != (EVP_PKEY_CTX *)0x0) {
      iVar2 = (**(code **)(*(long *)(pEVar4 + 0x28) + 0x98))
                        (*(undefined8 *)(pEVar4 + 0x30),sig,siglen);
      EVP_PKEY_CTX_free(pEVar4);
      goto LAB_0052cf78;
    }
  }
LAB_0052cff0:
  iVar2 = 0;
LAB_0052cf78:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

