
bool bnrand(int param_1,BIGNUM *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
           undefined8 param_7)

{
  int num;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  byte *s;
  BIGNUM *pBVar4;
  sbyte sVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_bn_get_libctx(param_7);
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      BN_zero_ex(param_2);
      bVar9 = true;
      goto LAB_004b29ef;
    }
  }
  else if ((-1 < param_3) && ((param_3 != 1 || (param_4 < 1)))) {
    num = param_3 + 7 >> 3;
    lVar3 = (long)num;
    s = (byte *)CRYPTO_malloc(num,"../crypto/bn/bn_rand.c",0x2b);
    if (s == (byte *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_rand.c",0x2d,"bnrand");
      ERR_set_error(3,0xc0100,0);
      bVar9 = false;
    }
    else {
      if (param_1 == 0) {
        iVar1 = RAND_bytes_ex();
        if (iVar1 < 1) {
LAB_004b2bb3:
          bVar9 = false;
          goto LAB_004b2bb5;
        }
      }
      else {
        iVar1 = RAND_priv_bytes_ex(uVar2,s,lVar3,param_6);
        if (iVar1 < 1) goto LAB_004b2bb3;
        if (param_1 == 1) {
          lVar8 = 0;
          do {
            iVar1 = RAND_bytes_ex(uVar2,&local_41,1,param_6);
            if (iVar1 < 1) goto LAB_004b2bb3;
            if ((char)local_41 < '\0') {
              if (lVar8 != 0) {
                s[lVar8] = s[lVar8 + -1];
              }
            }
            else if (local_41 < 0x2a) {
              s[lVar8] = 0;
            }
            else if (local_41 < 0x54) {
              s[lVar8] = 0xff;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != lVar3);
        }
      }
      uVar7 = param_3 - 1U & 7;
      sVar5 = (sbyte)uVar7;
      if (param_4 < 0) {
        bVar6 = *s;
      }
      else if (param_4 == 0) {
        bVar6 = (byte)(1 << sVar5) | *s;
      }
      else if (uVar7 == 0) {
        s[1] = s[1] | 0x80;
        bVar6 = 1;
      }
      else {
        bVar6 = (byte)(3 << (sVar5 - 1U & 0x1f)) | *s;
      }
      *s = ~(byte)(0xff << sVar5 + 1) & bVar6;
      if (param_5 != 0) {
        s[lVar3 + -1] = s[lVar3 + -1] | 1;
      }
      pBVar4 = BN_bin2bn(s,num,param_2);
      bVar9 = pBVar4 != (BIGNUM *)0x0;
    }
LAB_004b2bb5:
    CRYPTO_clear_free(s,lVar3,"../crypto/bn/bn_rand.c",0x5d);
    goto LAB_004b29ef;
  }
  ERR_new();
  ERR_set_debug("../crypto/bn/bn_rand.c",0x62,"bnrand");
  ERR_set_error(3,0x76,0);
  bVar9 = false;
LAB_004b29ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar9;
}

