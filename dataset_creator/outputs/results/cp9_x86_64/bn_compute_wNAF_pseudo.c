
undefined1 * bn_compute_wNAF(BIGNUM *param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  iVar3 = BN_is_zero();
  if (iVar3 == 0) {
    if (param_2 - 1U < 7) {
      iVar3 = BN_is_negative(param_1);
      if ((param_1->d != (ulong *)0x0) && (param_1->top != 0)) {
        iVar4 = BN_num_bits(param_1);
        uVar6 = (ulong)iVar4;
        puVar7 = (undefined1 *)CRYPTO_malloc((int)(uVar6 + 1),"../crypto/bn/bn_intern.c",0x3c);
        if (puVar7 != (undefined1 *)0x0) {
          uVar11 = 1 << ((byte)param_2 & 0x1f);
          uVar12 = (ulong)(param_2 + 1);
          uVar1 = uVar11 * 2;
          uVar8 = (uint)*param_1->d & uVar1 - 1;
          uVar13 = 0;
          do {
            if (uVar8 == 0) {
              if (uVar6 <= uVar12) {
                if (uVar13 <= uVar6 + 1) {
                  *param_3 = uVar13;
                  return puVar7;
                }
                ERR_new();
                uVar10 = 0x82;
                goto LAB_004af5ee;
              }
              cVar2 = '\0';
              iVar4 = 0;
            }
            else {
              if ((uVar8 & 1) != 0) {
                uVar9 = uVar8;
                if ((uVar8 & uVar11) == 0) {
LAB_004af4d2:
                  if ((int)-uVar11 < (int)uVar9) goto LAB_004af4de;
                }
                else {
                  if (uVar12 < uVar6) {
                    uVar9 = uVar8 + uVar11 * -2;
                    goto LAB_004af4d2;
                  }
                  uVar9 = (int)(uVar1 - 1) >> 1 & uVar8;
LAB_004af4de:
                  if (((int)uVar9 < (int)uVar11) && ((uVar9 & 1) != 0)) {
                    uVar8 = uVar8 - uVar9;
                    if ((uVar8 == 0 || uVar1 == uVar8) || (uVar11 == uVar8)) {
                      iVar4 = (int)uVar8 >> 1;
                      cVar2 = ((-(iVar3 == 0) & 2U) - 1) * (char)uVar9;
                      goto LAB_004af485;
                    }
                    ERR_new();
                    uVar10 = 0x71;
                    goto LAB_004af5ee;
                  }
                }
                ERR_new();
                uVar10 = 0x65;
                goto LAB_004af5ee;
              }
              iVar4 = (int)uVar8 >> 1;
              cVar2 = '\0';
            }
LAB_004af485:
            uVar12 = uVar12 + 1;
            puVar7[uVar13] = cVar2;
            iVar5 = BN_is_bit_set(param_1,param_2 + (int)(uVar13 + 1));
            uVar8 = iVar4 + (iVar5 << ((byte)param_2 & 0x1f));
            uVar13 = uVar13 + 1;
          } while ((int)uVar8 <= (int)uVar1);
          ERR_new();
          uVar10 = 0x7c;
LAB_004af5ee:
          ERR_set_debug("../crypto/bn/bn_intern.c",uVar10,"bn_compute_wNAF");
          ERR_set_error(3,0xc0103,0);
          goto LAB_004af5bb;
        }
        ERR_new();
        uVar10 = 0x42;
        goto LAB_004af698;
      }
      ERR_new();
      uVar10 = 0x37;
    }
    else {
      ERR_new();
      uVar10 = 0x2b;
    }
    puVar7 = (undefined1 *)0x0;
    ERR_set_debug("../crypto/bn/bn_intern.c",uVar10,"bn_compute_wNAF");
    ERR_set_error(3,0xc0103,0);
  }
  else {
    puVar7 = (undefined1 *)CRYPTO_malloc(1,"../crypto/bn/bn_intern.c",0x1f);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      *param_3 = 1;
      return puVar7;
    }
    ERR_new();
    uVar10 = 0x21;
    puVar7 = (undefined1 *)0x0;
LAB_004af698:
    ERR_set_debug("../crypto/bn/bn_intern.c",uVar10,"bn_compute_wNAF");
    ERR_set_error(3,0xc0100,0);
  }
LAB_004af5bb:
  CRYPTO_free(puVar7);
  return (undefined1 *)0x0;
}

