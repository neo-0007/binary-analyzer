
X509_CRL * X509_CRL_diff(X509_CRL *param_1,X509_CRL *param_2,EVP_PKEY *param_3,EVP_MD *param_4)

{
  long lVar1;
  long lVar2;
  X509_CRL *pXVar3;
  int iVar4;
  int iVar5;
  X509_NAME *pXVar6;
  X509_NAME *a;
  X509_CRL *pXVar7;
  undefined8 uVar8;
  X509_EXTENSION *ex;
  ASN1_INTEGER *serial;
  long in_FS_OFFSET;
  X509_REVOKED *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1._0_4_ = param_1[1].idp_flags;
  lVar1._4_4_ = param_1[1].idp_reasons;
  if ((lVar1 == 0) &&
     (lVar2._0_4_ = param_2[1].idp_flags, lVar2._4_4_ = param_2[1].idp_reasons, lVar2 == 0)) {
    pXVar3 = (X509_CRL *)0x0;
    pXVar7 = pXVar3;
    if ((param_1[1].idp == (ISSUING_DIST_POINT *)0x0) ||
       (param_2[1].idp == (ISSUING_DIST_POINT *)0x0)) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_vfy.c",0x7f4,"X509_CRL_diff");
      ERR_set_error(0xb,0x82,0);
    }
    else {
      pXVar6 = (X509_NAME *)X509_CRL_get_issuer(param_2);
      a = (X509_NAME *)X509_CRL_get_issuer(param_1);
      iVar4 = X509_NAME_cmp(a,pXVar6);
      if (iVar4 == 0) {
        iVar4 = crl_extension_match(param_1,param_2,0x5a);
        if (iVar4 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/x509_vfy.c",0x7ff,"X509_CRL_diff");
          ERR_set_error(0xb,0x6e,0);
        }
        else {
          iVar4 = crl_extension_match(param_1,param_2,0x302);
          if (iVar4 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/x509/x509_vfy.c",0x803,"X509_CRL_diff");
            ERR_set_error(0xb,0x80,0);
          }
          else {
            iVar4 = ASN1_INTEGER_cmp((ASN1_INTEGER *)param_2[1].idp,(ASN1_INTEGER *)param_1[1].idp);
            if (iVar4 < 1) {
              ERR_new();
              ERR_set_debug("../crypto/x509/x509_vfy.c",0x808,"X509_CRL_diff");
              ERR_set_error(0xb,0x84,0);
            }
            else if ((param_3 == (EVP_PKEY *)0x0) ||
                    ((iVar4 = X509_CRL_verify(param_1,param_3), 0 < iVar4 &&
                     (iVar4 = X509_CRL_verify(param_2,param_3), 0 < iVar4)))) {
              pXVar7 = (X509_CRL *)X509_CRL_new_ex(param_1[1].meth_data,param_1[2].crl);
              if ((pXVar7 != (X509_CRL *)0x0) &&
                 (iVar4 = X509_CRL_set_version(pXVar7,1), iVar4 != 0)) {
                pXVar6 = (X509_NAME *)X509_CRL_get_issuer(param_2);
                iVar4 = X509_CRL_set_issuer_name(pXVar7,pXVar6);
                if (iVar4 != 0) {
                  uVar8 = X509_CRL_get0_lastUpdate(param_2);
                  iVar4 = X509_CRL_set1_lastUpdate(pXVar7,uVar8);
                  if (iVar4 != 0) {
                    uVar8 = X509_CRL_get0_nextUpdate(param_2);
                    iVar4 = X509_CRL_set1_nextUpdate(pXVar7,uVar8);
                    if ((iVar4 != 0) &&
                       (iVar4 = X509_CRL_add1_ext_i2d(pXVar7,0x8c,param_1[1].idp,1,0), iVar4 != 0))
                    {
                      for (iVar4 = 0; iVar5 = X509_CRL_get_ext_count(param_2), iVar4 < iVar5;
                          iVar4 = iVar4 + 1) {
                        ex = X509_CRL_get_ext(param_2,iVar4);
                        iVar5 = X509_CRL_add_ext(pXVar7,ex,-1);
                        if (iVar5 == 0) goto LAB_00594430;
                      }
                      uVar8 = X509_CRL_get_REVOKED(param_2);
                      for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar8), iVar4 < iVar5;
                          iVar4 = iVar4 + 1) {
                        serial = (ASN1_INTEGER *)OPENSSL_sk_value(uVar8,iVar4);
                        iVar5 = X509_CRL_get0_by_serial(param_1,&local_48,serial);
                        if (iVar5 == 0) {
                          local_48 = (X509_REVOKED *)X509_REVOKED_dup(serial);
                          if (local_48 == (X509_REVOKED *)0x0) goto LAB_00594430;
                          iVar5 = X509_CRL_add0_revoked(pXVar7,local_48);
                          if (iVar5 == 0) {
                            X509_REVOKED_free(local_48);
                            goto LAB_00594430;
                          }
                        }
                      }
                      if (((param_3 == (EVP_PKEY *)0x0) || (param_4 == (EVP_MD *)0x0)) ||
                         (iVar4 = X509_CRL_sign(pXVar7,param_3,param_4), iVar4 != 0))
                      goto LAB_005944a3;
                    }
                  }
                }
              }
LAB_00594430:
              ERR_new();
              ERR_set_debug("../crypto/x509/x509_vfy.c",0x84a,"X509_CRL_diff");
              ERR_set_error(0xb,0xc0100,0);
              X509_CRL_free(pXVar7);
              pXVar7 = pXVar3;
            }
            else {
              ERR_new();
              ERR_set_debug("../crypto/x509/x509_vfy.c",0x80e,"X509_CRL_diff");
              ERR_set_error(0xb,0x83,0);
            }
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/x509/x509_vfy.c",0x7fa,"X509_CRL_diff");
        ERR_set_error(0xb,0x81,0);
      }
    }
  }
  else {
    ERR_new();
    pXVar7 = (X509_CRL *)0x0;
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x7ef,"X509_CRL_diff");
    ERR_set_error(0xb,0x7f,0);
  }
LAB_005944a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pXVar7;
}

