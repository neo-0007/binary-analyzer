
bool ec_gen_set_params(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  BIGNUM *pBVar6;
  bool bVar7;
  
  lVar4 = OSSL_PARAM_locate_const(param_2,"use-cofactor-flag");
  if ((lVar4 == 0) || (iVar3 = OSSL_PARAM_get_int(lVar4,param_1 + 0x7c), iVar3 != 0)) {
    lVar4 = OSSL_PARAM_locate_const(param_2,"group");
    if (lVar4 == 0) {
LAB_0046ed63:
      lVar4 = OSSL_PARAM_locate_const(param_2,"field-type");
      if (lVar4 == 0) {
LAB_0046edb7:
        lVar4 = OSSL_PARAM_locate_const(param_2,"encoding");
        if (lVar4 == 0) {
LAB_0046ee0f:
          lVar4 = OSSL_PARAM_locate_const(param_2,"point-format");
          if (lVar4 == 0) {
LAB_0046ee67:
            lVar4 = OSSL_PARAM_locate_const(param_2,"group-check");
            if (lVar4 == 0) {
LAB_0046eebf:
              lVar4 = OSSL_PARAM_locate_const(param_2,"p");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x30) == 0) {
                  pBVar6 = BN_new();
                  *(BIGNUM **)(param_1 + 0x30) = pBVar6;
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_0046ed15;
                }
                iVar3 = OSSL_PARAM_get_BN(lVar4,param_1 + 0x30);
                if (iVar3 == 0) goto LAB_0046ed15;
              }
              lVar4 = OSSL_PARAM_locate_const(param_2,"a");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x38) == 0) {
                  pBVar6 = BN_new();
                  *(BIGNUM **)(param_1 + 0x38) = pBVar6;
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_0046ed15;
                }
                iVar3 = OSSL_PARAM_get_BN(lVar4,param_1 + 0x38);
                if (iVar3 == 0) goto LAB_0046ed15;
              }
              lVar4 = OSSL_PARAM_locate_const(param_2,"b");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x40) == 0) {
                  pBVar6 = BN_new();
                  *(BIGNUM **)(param_1 + 0x40) = pBVar6;
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_0046ed15;
                }
                iVar3 = OSSL_PARAM_get_BN(lVar4,param_1 + 0x40);
                if (iVar3 == 0) goto LAB_0046ed15;
              }
              lVar4 = OSSL_PARAM_locate_const(param_2,"order");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x48) == 0) {
                  pBVar6 = BN_new();
                  *(BIGNUM **)(param_1 + 0x48) = pBVar6;
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_0046ed15;
                }
                iVar3 = OSSL_PARAM_get_BN(lVar4,param_1 + 0x48);
                if (iVar3 == 0) goto LAB_0046ed15;
              }
              lVar4 = OSSL_PARAM_locate_const(param_2,"cofactor");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x50) == 0) {
                  pBVar6 = BN_new();
                  *(BIGNUM **)(param_1 + 0x50) = pBVar6;
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_0046ed15;
                }
                iVar3 = OSSL_PARAM_get_BN(lVar4,param_1 + 0x50);
                if (iVar3 == 0) goto LAB_0046ed15;
              }
              lVar4 = OSSL_PARAM_locate_const(param_2,"seed");
              if (lVar4 == 0) {
LAB_0046f02b:
                bVar7 = true;
                lVar4 = OSSL_PARAM_locate_const(param_2,"generator");
                if (lVar4 == 0) goto LAB_0046ed18;
                if (*(int *)(lVar4 + 8) == 5) {
                  CRYPTO_free(*(void **)(param_1 + 0x58));
                  uVar1 = *(undefined8 *)(lVar4 + 0x18);
                  uVar2 = *(undefined8 *)(lVar4 + 0x10);
                  *(undefined8 *)(param_1 + 0x68) = uVar1;
                  lVar4 = CRYPTO_memdup(uVar2,uVar1,
                                        "../providers/implementations/keymgmt/ec_kmgmt.c",0x451);
                  bVar7 = lVar4 != 0;
                  *(long *)(param_1 + 0x58) = lVar4;
                  goto LAB_0046ed18;
                }
              }
              else if (*(int *)(lVar4 + 8) == 5) {
                CRYPTO_free(*(void **)(param_1 + 0x60));
                uVar1 = *(undefined8 *)(lVar4 + 0x18);
                uVar2 = *(undefined8 *)(lVar4 + 0x10);
                *(undefined8 *)(param_1 + 0x70) = uVar1;
                lVar4 = CRYPTO_memdup(uVar2,uVar1,"../providers/implementations/keymgmt/ec_kmgmt.c",
                                      0x450);
                *(long *)(param_1 + 0x60) = lVar4;
                if (lVar4 != 0) goto LAB_0046f02b;
              }
            }
            else if (*(int *)(lVar4 + 8) == 4) {
              CRYPTO_free(*(void **)(param_1 + 0x20));
              pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),
                                     "../providers/implementations/keymgmt/ec_kmgmt.c",0x448);
              *(char **)(param_1 + 0x20) = pcVar5;
              if (pcVar5 != (char *)0x0) goto LAB_0046eebf;
            }
          }
          else if (*(int *)(lVar4 + 8) == 4) {
            CRYPTO_free(*(void **)(param_1 + 0x18));
            pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),
                                   "../providers/implementations/keymgmt/ec_kmgmt.c",0x447);
            *(char **)(param_1 + 0x18) = pcVar5;
            if (pcVar5 != (char *)0x0) goto LAB_0046ee67;
          }
        }
        else if (*(int *)(lVar4 + 8) == 4) {
          CRYPTO_free(*(void **)(param_1 + 0x10));
          pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),
                                 "../providers/implementations/keymgmt/ec_kmgmt.c",0x446);
          *(char **)(param_1 + 0x10) = pcVar5;
          if (pcVar5 != (char *)0x0) goto LAB_0046ee0f;
        }
      }
      else if (*(int *)(lVar4 + 8) == 4) {
        CRYPTO_free(*(void **)(param_1 + 0x28));
        pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),
                               "../providers/implementations/keymgmt/ec_kmgmt.c",0x445);
        *(char **)(param_1 + 0x28) = pcVar5;
        if (pcVar5 != (char *)0x0) goto LAB_0046edb7;
      }
    }
    else if (*(int *)(lVar4 + 8) == 4) {
      CRYPTO_free(*(void **)(param_1 + 8));
      pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),
                             "../providers/implementations/keymgmt/ec_kmgmt.c",0x444);
      *(char **)(param_1 + 8) = pcVar5;
      if (pcVar5 != (char *)0x0) goto LAB_0046ed63;
    }
  }
LAB_0046ed15:
  bVar7 = false;
LAB_0046ed18:
  EC_GROUP_free((EC_GROUP *)0x0);
  return bVar7;
}

