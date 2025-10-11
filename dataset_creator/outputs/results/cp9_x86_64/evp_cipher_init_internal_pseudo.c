
int evp_cipher_init_internal
              (EVP_CIPHER_CTX *param_1,EVP_CIPHER *param_2,ENGINE *param_3,uchar *param_4,
              uchar *param_5,int param_6,long param_7)

{
  _func_1090 *p_Var1;
  _func_1092 *p_Var2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  EVP_CIPHER *pEVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  EVP_CIPHER *pEVar12;
  EVP_CIPHER_CTX *pEVar13;
  undefined4 extraout_var;
  uint uVar14;
  long lVar15;
  uint uVar16;
  EVP_CIPHER *pEVar17;
  ulong uVar18;
  ulong uVar19;
  _func_1094 *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  byte bVar20;
  ENGINE *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar17 = param_2;
  if (param_6 == -1) {
    uVar19 = (ulong)(uint)param_1->encrypt;
    if (param_2 != (EVP_CIPHER *)0x0) goto LAB_0040bbb0;
LAB_0040bf4d:
    iVar3 = (int)uVar19;
    pEVar8 = param_1->cipher;
    if (pEVar8 == (EVP_CIPHER *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x68,"evp_cipher_init_internal");
      ERR_set_error(6,0x83,0);
      iVar3 = 0;
    }
    else {
      if (param_1->engine == (ENGINE *)0x0) {
        local_c8 = (ENGINE *)0x0;
        if (param_3 == (ENGINE *)0x0) {
          pEVar12 = pEVar8;
          if (*(int *)&pEVar8->init == 2) {
            if (pEVar8 == (EVP_CIPHER *)param_1[1].engine) goto LAB_0040bfd0;
            EVP_CIPHER_free((EVP_CIPHER *)param_1[1].engine);
            param_1[1].engine = (ENGINE *)0x0;
            goto LAB_0040bd99;
          }
LAB_0040be1c:
          if (pEVar12[1].do_cipher != (_func_1090 *)0x0) {
LAB_0040be27:
            iVar4 = EVP_CIPHER_up_ref(pEVar12);
            if (iVar4 == 0) {
              ERR_new();
              uVar6 = 0xbe;
              goto LAB_0040c264;
            }
            EVP_CIPHER_free(param_1[1].engine);
            param_1[1].engine = (ENGINE *)pEVar12;
LAB_0040be4a:
            param_1->cipher = pEVar12;
            if (param_1[1].cipher == (EVP_CIPHER *)0x0) {
              p_Var2 = pEVar12[1].set_asn1_parameters;
              pEVar13 = (EVP_CIPHER_CTX *)ossl_provider_ctx(pEVar12[1].do_cipher);
              iVar4 = (*p_Var2)(pEVar13,(ASN1_TYPE *)pEVar17);
              param_1[1].cipher = (EVP_CIPHER *)CONCAT44(extraout_var,iVar4);
              if ((EVP_CIPHER *)CONCAT44(extraout_var,iVar4) != (EVP_CIPHER *)0x0)
              goto LAB_0040be5b;
              ERR_new();
              uVar6 = 200;
              goto LAB_0040c2a1;
            }
LAB_0040be5b:
            if (((param_1->flags & 0x100) != 0) &&
               (iVar4 = EVP_CIPHER_CTX_set_padding(param_1,0), iVar4 == 0)) goto LAB_0040bda5;
            if (param_7 != 0) {
              puVar9 = &local_b8;
              for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + (ulong)bVar20 * -2 + 1;
              }
              puVar9 = (undefined8 *)OSSL_PARAM_locate_const(param_7,"keylen");
              if (puVar9 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)OSSL_PARAM_locate_const(param_7,"ivlen");
                puVar9 = &local_b8;
                if (puVar10 != (undefined8 *)0x0) goto LAB_0040bed3;
              }
              else {
                local_b8 = *puVar9;
                uStack_b0 = puVar9[1];
                local_a8 = puVar9[2];
                uStack_a0 = puVar9[3];
                local_98 = puVar9[4];
                puVar10 = (undefined8 *)OSSL_PARAM_locate_const(param_7,"ivlen");
                puVar9 = local_90;
                if (puVar10 != (undefined8 *)0x0) {
LAB_0040bed3:
                  uVar6 = puVar10[1];
                  *puVar9 = *puVar10;
                  puVar9[1] = uVar6;
                  uVar6 = puVar10[3];
                  puVar9[2] = puVar10[2];
                  puVar9[3] = uVar6;
                  puVar9[4] = puVar10[4];
                }
                iVar4 = EVP_CIPHER_CTX_set_params(param_1,&local_b8);
                if (iVar4 == 0) {
                  ERR_new();
                  ERR_set_debug("../crypto/evp/evp_enc.c",0xf3,"evp_cipher_init_internal");
                  ERR_set_error(6,0xdd,0);
                  iVar3 = 0;
                  goto LAB_0040bd2b;
                }
              }
            }
            if (iVar3 == 0) {
              UNRECOVERED_JUMPTABLE = param_1->cipher[1].ctrl;
              if (UNRECOVERED_JUMPTABLE != (_func_1094 *)0x0) goto LAB_0040c12c;
              ERR_new();
              uVar6 = 0x10b;
            }
            else {
              UNRECOVERED_JUMPTABLE = (_func_1094 *)param_1->cipher[1].get_asn1_parameters;
              if (UNRECOVERED_JUMPTABLE != (_func_1094 *)0x0) {
LAB_0040c12c:
                if (param_5 != (uchar *)0x0) {
                  EVP_CIPHER_CTX_get_iv_length(param_1);
                }
                iVar3 = 0;
                if (param_4 != (uchar *)0x0) {
                  iVar3 = EVP_CIPHER_CTX_get_key_length(param_1);
                }
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0040c18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  iVar3 = (*UNRECOVERED_JUMPTABLE)
                                    ((EVP_CIPHER_CTX *)param_1[1].cipher,(int)param_4,iVar3,param_5)
                  ;
                  return iVar3;
                }
                goto LAB_0040c599;
              }
              ERR_new();
              uVar6 = 0xfc;
            }
            goto LAB_0040c2a1;
          }
          pEVar17 = (EVP_CIPHER *)0x81ab65;
          if (pEVar12->nid != 0) {
            pEVar17 = (EVP_CIPHER *)OBJ_nid2sn(pEVar12->nid);
          }
          pEVar12 = (EVP_CIPHER *)EVP_CIPHER_fetch(0,pEVar17,&DAT_008343a2);
          if (pEVar12 != (EVP_CIPHER *)0x0) {
            EVP_CIPHER_free(param_1[1].engine);
            p_Var1 = pEVar12[1].do_cipher;
            param_1[1].engine = (ENGINE *)pEVar12;
            if (p_Var1 != (_func_1090 *)0x0) goto LAB_0040be27;
            goto LAB_0040be4a;
          }
        }
        else {
LAB_0040bd68:
          if ((EVP_CIPHER *)param_1[1].engine == pEVar8) {
LAB_0040bfd0:
            param_1->cipher = (EVP_CIPHER *)0x0;
          }
          EVP_CIPHER_free();
          param_1[1].engine = (ENGINE *)0x0;
          if (param_2 != (EVP_CIPHER *)0x0) goto LAB_0040bc06;
LAB_0040bd99:
          pEVar8 = param_1->cipher;
          if (pEVar8 != (EVP_CIPHER *)0x0) goto LAB_0040bc95;
        }
        goto LAB_0040bda5;
      }
LAB_0040bc95:
      if (((pEVar8->block_size - 8U & 0xfffffff7) != 0) && (pEVar8->block_size != 1)) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                    ,"../crypto/evp/evp_enc.c",0x167);
      }
      if ((param_1->flags & 1) == 0) {
        uVar6 = EVP_CIPHER_CTX_get0_cipher(param_1);
        iVar3 = EVP_CIPHER_get_mode(uVar6);
        if (iVar3 == 0x10002) {
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_enc.c",0x16d,"evp_cipher_init_internal");
          ERR_set_error(6,0xaa,0);
          iVar3 = 0;
          goto LAB_0040bd2b;
        }
      }
      uVar6 = EVP_CIPHER_CTX_get0_cipher(param_1);
      uVar7 = EVP_CIPHER_get_flags(uVar6);
      if ((uVar7 & 0x10) == 0) {
        uVar6 = EVP_CIPHER_CTX_get0_cipher(param_1);
        iVar3 = EVP_CIPHER_get_mode(uVar6);
        if (iVar3 < 5) {
          if (iVar3 < 3) {
            if (iVar3 != 2) {
              if (-1 < iVar3) goto LAB_0040bce2;
              goto LAB_0040bda5;
            }
          }
          else {
            param_1->num = 0;
          }
          uVar5 = EVP_CIPHER_CTX_get_iv_length(param_1);
          if (uVar5 < 0x11) {
            if (param_5 != (uchar *)0x0) {
              if (uVar5 < 8) {
                if ((uVar5 & 4) == 0) {
                  if ((uVar5 != 0) && (param_1->oiv[0] = *param_5, (uVar5 & 2) != 0)) {
                    *(undefined2 *)(param_1->oiv + ((ulong)uVar5 - 2)) =
                         *(undefined2 *)(param_5 + ((ulong)uVar5 - 2));
                  }
                }
                else {
                  *(undefined4 *)param_1->oiv = *(undefined4 *)param_5;
                  *(undefined4 *)(param_1->oiv + ((ulong)uVar5 - 4)) =
                       *(undefined4 *)(param_5 + ((ulong)uVar5 - 4));
                }
              }
              else {
                uVar7 = (ulong)(param_1->oiv + 8) & 0xfffffffffffffff8;
                *(undefined8 *)param_1->oiv = *(undefined8 *)param_5;
                *(undefined8 *)(param_1->oiv + ((ulong)uVar5 - 8)) =
                     *(undefined8 *)(param_5 + ((ulong)uVar5 - 8));
                lVar15 = (long)param_1 + (0x18 - uVar7);
                uVar14 = (int)lVar15 + uVar5 & 0xfffffff8;
                if (7 < uVar14) {
                  uVar16 = 0;
                  do {
                    uVar18 = (ulong)uVar16;
                    uVar16 = uVar16 + 8;
                    *(undefined8 *)(uVar7 + uVar18) = *(undefined8 *)(param_5 + (uVar18 - lVar15));
                  } while (uVar16 < uVar14);
                }
              }
            }
            if (uVar5 < 8) {
              if ((uVar5 & 4) == 0) {
                if ((uVar5 != 0) && (param_1->iv[0] = param_1->oiv[0], (uVar5 & 2) != 0)) {
                  *(undefined2 *)(param_1->oiv + (ulong)uVar5 + 0xe) =
                       *(undefined2 *)(param_1->oiv + ((ulong)uVar5 - 2));
                }
              }
              else {
                *(undefined4 *)param_1->iv = *(undefined4 *)param_1->oiv;
                *(undefined4 *)(param_1->oiv + (ulong)uVar5 + 0xc) =
                     *(undefined4 *)(param_1->oiv + ((ulong)uVar5 - 4));
              }
            }
            else {
              *(undefined8 *)param_1->iv = *(undefined8 *)param_1->oiv;
              *(undefined8 *)(param_1->oiv + (ulong)uVar5 + 8) =
                   *(undefined8 *)(param_1->oiv + ((ulong)uVar5 - 8));
              uVar7 = (ulong)(param_1->iv + 8) & 0xfffffffffffffff8;
              lVar15 = (long)param_1 + (0x28 - uVar7);
              uVar5 = uVar5 + (int)lVar15 & 0xfffffff8;
              if (7 < uVar5) {
                uVar14 = 0;
                do {
                  uVar18 = (ulong)uVar14;
                  uVar14 = uVar14 + 8;
                  *(undefined8 *)(uVar7 + uVar18) =
                       *(undefined8 *)((long)param_1 + uVar18 + (0x18 - lVar15));
                } while (uVar14 < uVar5);
              }
            }
            goto LAB_0040bce2;
          }
        }
        else if (iVar3 == 5) {
          param_1->num = 0;
          if (param_5 != (uchar *)0x0) {
            iVar3 = EVP_CIPHER_CTX_get_iv_length(param_1);
            if (iVar3 < 1) goto LAB_0040bda5;
            memcpy(param_1->iv,param_5,(long)iVar3);
          }
          goto LAB_0040bce2;
        }
LAB_0040bda5:
        iVar3 = 0;
      }
      else {
LAB_0040bce2:
        pEVar17 = param_1->cipher;
        if ((param_4 != (uchar *)0x0) || ((pEVar17->flags & 0x20) != 0)) {
          iVar3 = (*pEVar17->do_cipher)(param_1,param_4,param_5,uVar19);
          if (iVar3 == 0) goto LAB_0040bda5;
          pEVar17 = param_1->cipher;
        }
        iVar4 = pEVar17->block_size;
        param_1->buf_len = 0;
        iVar3 = 1;
        param_1->final_used = 0;
        param_1->block_mask = iVar4 + -1;
      }
    }
  }
  else {
    uVar19 = (ulong)(param_6 != 0);
    param_1->encrypt = (uint)(param_6 != 0);
    if (param_2 == (EVP_CIPHER *)0x0) goto LAB_0040bf4d;
LAB_0040bbb0:
    iVar3 = (int)uVar19;
    if (param_1->engine == (ENGINE *)0x0) {
      if (param_3 != (ENGINE *)0x0) {
        pEVar8 = param_1->cipher;
        local_c8 = (ENGINE *)0x0;
        goto LAB_0040bd68;
      }
LAB_0040bdb0:
      local_c8 = ENGINE_get_cipher_engine(param_2->nid);
      pEVar8 = param_1->cipher;
      if (param_1->engine != (ENGINE *)0x0) goto LAB_0040bbdb;
      if (local_c8 != (ENGINE *)0x0) goto LAB_0040bd68;
      if (*(int *)&param_2->init != 2) {
        pEVar12 = param_2;
        if (pEVar8 != (EVP_CIPHER *)0x0) {
          pEVar17 = (EVP_CIPHER *)(long)*(int *)&pEVar8->set_asn1_parameters;
          CRYPTO_clear_free(param_1->cipher_data,pEVar17,"../crypto/evp/evp_enc.c",0x95);
          param_1->cipher_data = (void *)0x0;
          if (param_1->cipher != (EVP_CIPHER *)0x0) {
            uVar19 = param_1->flags;
            EVP_CIPHER_CTX_reset(param_1);
            param_1->encrypt = iVar3;
            param_1->flags = uVar19;
          }
        }
        goto LAB_0040be1c;
      }
      if ((EVP_CIPHER *)param_1[1].engine == pEVar8) goto LAB_0040bfd0;
      EVP_CIPHER_free((EVP_CIPHER *)param_1[1].engine);
      pEVar17 = param_1->cipher;
      param_1[1].engine = (ENGINE *)0x0;
      if (pEVar17 != (EVP_CIPHER *)0x0) goto LAB_0040bc0c;
LAB_0040bf91:
      iVar3 = *(int *)&param_2->set_asn1_parameters;
      param_1->cipher = param_2;
      param_1->engine = (ENGINE *)0x0;
      if (iVar3 == 0) {
LAB_0040bc75:
        param_1->cipher_data = (void *)0x0;
        pEVar8 = param_2;
      }
      else {
LAB_0040bfa7:
        pvVar11 = (void *)CRYPTO_zalloc((long)iVar3,"../crypto/evp/evp_enc.c",0x14c);
        param_1->cipher_data = pvVar11;
        if (pvVar11 == (void *)0x0) {
          param_1->cipher = (EVP_CIPHER *)0x0;
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_enc.c",0x14f,"evp_cipher_init_internal");
          ERR_set_error(6,0xc0100,0);
          iVar3 = 0;
          goto LAB_0040bd2b;
        }
        pEVar8 = param_1->cipher;
      }
      iVar3 = param_2->key_len;
      param_1->flags = param_1->flags & 1;
      param_1->key_len = iVar3;
      if ((pEVar8->flags & 0x40) == 0) goto LAB_0040bc95;
      iVar3 = EVP_CIPHER_CTX_ctrl(param_1,0,0,(void *)0x0);
      if (iVar3 != 0) goto LAB_0040bd99;
      param_1->cipher = (EVP_CIPHER *)0x0;
      ERR_new();
      uVar6 = 0x15b;
    }
    else {
      pEVar8 = param_1->cipher;
      if ((pEVar8 != (EVP_CIPHER *)0x0) && (param_2->nid == pEVar8->nid)) goto LAB_0040bc95;
      local_c8 = (ENGINE *)0x0;
      if (param_3 == (ENGINE *)0x0) goto LAB_0040bdb0;
LAB_0040bbdb:
      if ((EVP_CIPHER *)param_1[1].engine == pEVar8) goto LAB_0040bfd0;
      EVP_CIPHER_free((EVP_CIPHER *)param_1[1].engine);
      param_1[1].engine = (ENGINE *)0x0;
LAB_0040bc06:
      if (param_1->cipher != (EVP_CIPHER *)0x0) {
LAB_0040bc0c:
        uVar7 = param_1->flags;
        EVP_CIPHER_CTX_reset(param_1);
        param_1->encrypt = (int)uVar19;
        param_1->flags = uVar7;
      }
      if (param_3 == (ENGINE *)0x0) {
        param_3 = local_c8;
        if (local_c8 == (ENGINE *)0x0) goto LAB_0040bf91;
LAB_0040bc4b:
        param_2 = ENGINE_get_cipher(param_3,param_2->nid);
        if (param_2 == (EVP_CIPHER *)0x0) {
          ERR_new();
          uVar6 = 0x13b;
LAB_0040c2a1:
          ERR_set_debug("../crypto/evp/evp_enc.c",uVar6,"evp_cipher_init_internal");
          ERR_set_error(6,0x86,0);
          goto LAB_0040bda5;
        }
        iVar3 = *(int *)&param_2->set_asn1_parameters;
        param_1->engine = param_3;
        param_1->cipher = param_2;
        if (iVar3 != 0) goto LAB_0040bfa7;
        goto LAB_0040bc75;
      }
      iVar3 = ENGINE_init(param_3);
      if (iVar3 != 0) goto LAB_0040bc4b;
      ERR_new();
      uVar6 = 299;
    }
LAB_0040c264:
    ERR_set_debug("../crypto/evp/evp_enc.c",uVar6,"evp_cipher_init_internal");
    ERR_set_error(6,0x86,0);
    iVar3 = 0;
  }
LAB_0040bd2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
LAB_0040c599:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

