
int X509_STORE_CTX_get1_issuer(X509 **issuer,X509_STORE_CTX *ctx,X509 *x)

{
  X509_STORE *pXVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  X509_NAME *pXVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  X509 *pXVar11;
  int iVar12;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (undefined4 *)X509_OBJECT_new();
  local_44 = 0;
  pXVar1 = ctx->ctx;
  if (puVar6 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    *issuer = (X509 *)0x0;
    pXVar7 = X509_get_issuer_name(x);
    iVar2 = X509_STORE_CTX_get_by_subject(ctx,1,pXVar7,puVar6);
    if (iVar2 == 1) {
      iVar3 = (*ctx->get_issuer)((X509 **)ctx,(X509_STORE_CTX *)x,*(X509 **)(puVar6 + 2));
      iVar2 = 1;
      if ((iVar3 == 0) ||
         (iVar3 = ossl_x509_check_cert_time(ctx,*(undefined8 *)(puVar6 + 2),0xffffffff), iVar3 == 0)
         ) {
        X509_OBJECT_free(puVar6);
        if ((pXVar1 == (X509_STORE *)0x0) || (iVar3 = X509_STORE_lock(pXVar1), iVar3 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar3 = x509_object_idx_cnt(pXVar1->objs,1,pXVar7,&local_44);
          if ((iVar3 == -1) || (iVar5 = 0, iVar12 = iVar3, local_44 < 1)) {
            iVar2 = 0;
            pXVar11 = *issuer;
          }
          else {
            do {
              piVar8 = (int *)OPENSSL_sk_value(pXVar1->objs,iVar12);
              if (*piVar8 != 1) break;
              iVar4 = (*ctx->get_issuer)((X509 **)ctx,(X509_STORE_CTX *)x,*(X509 **)(piVar8 + 2));
              if (iVar4 != 0) {
                iVar5 = ossl_x509_check_cert_time(ctx,*(undefined8 *)(piVar8 + 2),0xffffffff);
                if (iVar5 != 0) {
                  pXVar11 = *(X509 **)(piVar8 + 2);
                  *issuer = pXVar11;
                  goto LAB_0058daeb;
                }
                if (*issuer != (X509 *)0x0) {
                  uVar9 = X509_get0_notAfter();
                  uVar10 = X509_get0_notAfter(*(undefined8 *)(piVar8 + 2));
                  iVar5 = ASN1_TIME_compare(uVar10,uVar9);
                  if (iVar5 < 1) {
                    iVar5 = 1;
                    goto LAB_0058d9f8;
                  }
                }
                iVar5 = 1;
                *issuer = *(X509 **)(piVar8 + 2);
              }
LAB_0058d9f8:
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar3 + local_44);
            iVar2 = iVar5;
            pXVar11 = *issuer;
          }
LAB_0058daeb:
          if ((pXVar11 != (X509 *)0x0) && (iVar3 = X509_up_ref(), iVar3 == 0)) {
            iVar2 = -1;
            *issuer = (X509 *)0x0;
          }
          X509_STORE_unlock(pXVar1);
        }
      }
      else {
        *issuer = *(X509 **)(puVar6 + 2);
        *puVar6 = 0;
        X509_OBJECT_free(puVar6);
      }
    }
    else {
      iVar2 = 0;
      X509_OBJECT_free(puVar6);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

