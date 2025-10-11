
undefined8
generate_p(BN_CTX *param_1,EVP_MD *param_2,int param_3,int param_4,void *param_5,size_t param_6,
          BIGNUM *param_7,BIGNUM *param_8,int param_9,BN_GENCB *param_10,int *param_11,
          uint *param_12)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *rem;
  BIGNUM *r_00;
  BIGNUM *ret;
  BIGNUM *pBVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_110;
  int local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_1);
  r = BN_CTX_get(param_1);
  a = BN_CTX_get(param_1);
  rem = BN_CTX_get(param_1);
  r_00 = BN_CTX_get(param_1);
  ret = BN_CTX_get(param_1);
  if (ret != (BIGNUM *)0x0) {
    pBVar4 = BN_value_one();
    iVar1 = BN_lshift(r_00,pBVar4,param_9 + -1);
    if ((iVar1 != 0) && (iVar1 = EVP_MD_get_size(param_2), 0 < iVar1)) {
      if (-1 < param_3) {
        local_8c = 0;
        local_110 = (int)param_6;
        do {
          BN_zero_ex(r);
          if (-1 < param_4) {
            iVar6 = 0;
            iVar8 = 0;
            uVar2 = local_110 - 1;
            do {
              pcVar5 = (char *)((long)param_5 + (long)(int)uVar2);
              if (-1 < (int)uVar2) {
                do {
                  *pcVar5 = *pcVar5 + '\x01';
                  if (*pcVar5 != '\0') break;
                  pcVar5 = pcVar5 + -1;
                } while (pcVar5 != (char *)((long)param_5 + (((long)local_110 + -2) - (ulong)uVar2))
                        );
              }
              iVar3 = EVP_Digest(param_5,param_6,local_88,(uint *)0x0,param_2,(ENGINE *)0x0);
              if ((((iVar3 == 0) ||
                   (pBVar4 = BN_bin2bn(local_88,iVar1,ret), pBVar4 == (BIGNUM *)0x0)) ||
                  (iVar3 = BN_lshift(ret,ret,iVar6), iVar3 == 0)) ||
                 (iVar3 = BN_add(r,r,ret), iVar3 == 0)) goto LAB_00534cc0;
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + iVar1 * 8;
            } while (iVar8 <= param_4);
          }
          iVar6 = BN_mask_bits(r,param_9 + -1);
          if (((iVar6 == 0) || (pBVar4 = BN_copy(a,r), pBVar4 == (BIGNUM *)0x0)) ||
             ((iVar6 = BN_add(a,a,r_00), iVar6 == 0 ||
              ((iVar6 = BN_lshift1(ret,param_7), iVar6 == 0 ||
               (iVar6 = BN_div((BIGNUM *)0x0,rem,a,ret,param_1), iVar6 == 0)))))) goto LAB_00534cc0;
          pBVar4 = BN_value_one();
          iVar6 = BN_sub(ret,rem,pBVar4);
          if ((iVar6 == 0) || (iVar6 = BN_sub(param_8,a,ret), iVar6 == 0)) goto LAB_00534cc0;
          iVar6 = BN_cmp(param_8,r_00);
          if (-1 < iVar6) {
            iVar6 = BN_check_prime(param_8,param_1,param_10);
            if (0 < iVar6) {
              uVar7 = 1;
              *param_11 = local_8c;
              goto LAB_00534cc6;
            }
            if (iVar6 != 0) goto LAB_00534cc0;
          }
          local_8c = local_8c + 1;
          if (param_3 < local_8c) break;
          iVar6 = BN_GENCB_call(param_10,0,local_8c);
          if (iVar6 == 0) goto LAB_00534cc0;
        } while( true );
      }
      uVar7 = 0;
      *param_12 = *param_12 | 1;
      goto LAB_00534cc6;
    }
  }
LAB_00534cc0:
  uVar7 = 0xffffffff;
LAB_00534cc6:
  BN_CTX_end(param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}

