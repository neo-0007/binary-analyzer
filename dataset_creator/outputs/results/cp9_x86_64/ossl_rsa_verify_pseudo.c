
undefined4
ossl_rsa_verify(int param_1,long *param_2,uint param_3,long *param_4,size_t *param_5,uchar *param_6,
               long param_7,RSA *param_8)

{
  long lVar1;
  int iVar2;
  long *to;
  size_t __n;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong __n_00;
  ulong uVar6;
  long in_FS_OFFSET;
  long *local_68;
  ulong local_50;
  void *local_48;
  long local_40;
  
  __n = (size_t)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = (void *)0x0;
  iVar2 = RSA_size(param_8);
  if (iVar2 != param_7) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("../crypto/rsa/rsa_sign.c",0x154,"ossl_rsa_verify");
    ERR_set_error(4,0x77,0);
    goto LAB_00433b4e;
  }
  to = (long *)CRYPTO_malloc((int)param_7,"../crypto/rsa/rsa_sign.c",0x159);
  if (to == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sign.c",0x15b,"ossl_rsa_verify");
    uVar3 = 0xc0100;
LAB_00433e60:
    uVar6 = 0;
    uVar5 = 0;
    ERR_set_error(4,uVar3,0);
    pvVar4 = (void *)0x0;
  }
  else {
    iVar2 = RSA_public_decrypt((int)param_7,param_6,(uchar *)to,param_8,1);
    if (iVar2 < 1) goto LAB_00433cd8;
    if (param_1 == 0x72) {
      if (iVar2 == 0x24) {
        if (param_4 != (long *)0x0) {
          lVar1 = to[1];
          pvVar4 = (void *)0x0;
          uVar6 = 0;
          uVar5 = 1;
          *param_4 = *to;
          param_4[1] = lVar1;
          lVar1 = to[3];
          param_4[2] = to[2];
          param_4[3] = lVar1;
          *(int *)(param_4 + 4) = (int)to[4];
          *param_5 = 0x24;
          goto LAB_00433ce1;
        }
        if (param_3 == 0x24) {
          if (((to[1] == param_2[1] && *to == *param_2) &&
              (to[3] == param_2[3] && to[2] == param_2[2])) && ((int)to[4] == (int)param_2[4]))
          goto LAB_00433f90;
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_sign.c",0x17b,"ossl_rsa_verify");
          uVar3 = 0x68;
        }
        else {
          ERR_new();
          uVar3 = 0x176;
LAB_00433fb9:
          ERR_set_debug("../crypto/rsa/rsa_sign.c",uVar3,"ossl_rsa_verify");
          uVar3 = 0x83;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_sign.c",0x16d,"ossl_rsa_verify");
        uVar3 = 0x68;
      }
      goto LAB_00433e60;
    }
    __n_00 = (ulong)iVar2;
    local_68 = param_2;
    if ((param_1 == 0x5f) && (__n_00 == 0x12)) {
      if (((char)*to == '\x04') && (*(char *)((long)to + 1) == '\x10')) {
        if (param_4 == (long *)0x0) {
          if (param_3 != 0x10) {
            ERR_new();
            uVar3 = 0x18a;
            goto LAB_00433fb9;
          }
          if (param_2[1] != *(long *)((long)to + 10) || *param_2 != *(long *)((long)to + 2)) {
            ERR_new();
            ERR_set_debug("../crypto/rsa/rsa_sign.c",399,"ossl_rsa_verify");
            uVar3 = 0x68;
            goto LAB_00433e60;
          }
        }
        else {
          lVar1 = *(long *)((long)to + 10);
          *param_4 = *(long *)((long)to + 2);
          param_4[1] = lVar1;
          *param_5 = 0x10;
        }
LAB_00433f90:
        pvVar4 = (void *)0x0;
        uVar6 = 0;
        uVar5 = 1;
        goto LAB_00433ce1;
      }
      if (param_4 != (long *)0x0) goto LAB_00433cd8;
    }
    else if (param_4 != (long *)0x0) {
      if (param_1 != 0x2a3) {
        if (param_1 < 0x2a4) {
          if (param_1 == 0x101) {
LAB_00433da0:
            __n = 0x10;
            uVar6 = 0x10;
            goto LAB_00433d62;
          }
          if (param_1 < 0x102) {
            if ((param_1 == 0x40) || (param_1 == 0x75)) {
              __n = 0x14;
              uVar6 = 0x14;
              goto LAB_00433d62;
            }
            if (param_1 == 4) goto LAB_00433da0;
          }
          else {
            if (param_1 == 0x2a1) goto switchD_00433ddc_caseD_44a;
            if (param_1 == 0x2a2) goto switchD_00433ddc_caseD_44b;
            if (param_1 == 0x2a0) goto switchD_00433ddc_caseD_447;
          }
        }
        else if (param_1 - 0x446U < 6) {
          switch(param_1) {
          case 0x447:
          case 0x449:
switchD_00433ddc_caseD_447:
            __n = 0x20;
            uVar6 = 0x20;
            break;
          default:
            goto switchD_00433ddc_caseD_448;
          case 0x44a:
switchD_00433ddc_caseD_44a:
            __n = 0x30;
            uVar6 = 0x30;
            break;
          case 1099:
switchD_00433ddc_caseD_44b:
            __n = 0x40;
            uVar6 = 0x40;
          }
          goto LAB_00433d62;
        }
LAB_00433cd8:
        pvVar4 = (void *)0x0;
        uVar6 = 0;
        uVar5 = 0;
        goto LAB_00433ce1;
      }
switchD_00433ddc_caseD_448:
      __n = 0x1c;
      uVar6 = 0x1c;
LAB_00433d62:
      local_68 = (long *)((long)to + (__n_00 - uVar6));
      if (__n_00 < uVar6) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_sign.c",0x1a2,"ossl_rsa_verify");
        uVar3 = 0x8f;
        goto LAB_00433e60;
      }
    }
    iVar2 = encode_pkcs1_constprop_0(&local_48,&local_50,param_1,local_68,__n);
    pvVar4 = local_48;
    uVar6 = local_50;
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else if ((local_50 == __n_00) && (iVar2 = bcmp(local_48,to,__n_00), iVar2 == 0)) {
      uVar5 = 1;
      uVar6 = __n_00;
      if (param_4 != (long *)0x0) {
        memcpy(param_4,local_68,__n);
        *param_5 = __n;
      }
    }
    else {
      uVar5 = 0;
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_sign.c",0x1ae,"ossl_rsa_verify");
      ERR_set_error(4,0x68,0);
    }
  }
LAB_00433ce1:
  CRYPTO_clear_free(pvVar4,uVar6,"../crypto/rsa/rsa_sign.c",0x1bc);
  CRYPTO_clear_free(to,param_7,"../crypto/rsa/rsa_sign.c",0x1bd);
LAB_00433b4e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

