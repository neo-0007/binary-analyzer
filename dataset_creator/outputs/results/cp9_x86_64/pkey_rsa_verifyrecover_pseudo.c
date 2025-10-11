
int pkey_rsa_verifyrecover
              (long param_1,uchar *param_2,size_t *param_3,uchar *param_4,undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  RSA *rsa;
  size_t __n;
  int iVar7;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar2 + 0x20) == 0) {
    iVar7 = RSA_public_decrypt((int)param_5,param_4,param_2,rsa,*(int *)(lVar2 + 0x1c));
joined_r0x00431cf7:
    if (iVar7 < 0) goto LAB_00431cad;
    __n = (size_t)iVar7;
LAB_00431ca4:
    *param_3 = __n;
    iVar7 = 1;
  }
  else {
    if (*(int *)(lVar2 + 0x1c) == 5) {
      iVar7 = setup_tbuf(lVar2,param_1);
      if (iVar7 != 0) {
        iVar7 = 0;
        iVar4 = RSA_public_decrypt((int)param_5,param_4,*(uchar **)(lVar2 + 0x38),rsa,5);
        if (iVar4 < 1) goto LAB_00431cad;
        __n = (size_t)(iVar4 + -1);
        bVar1 = *(byte *)(*(long *)(lVar2 + 0x38) + __n);
        iVar5 = EVP_MD_get_type(*(undefined8 *)(lVar2 + 0x20));
        uVar6 = RSA_X931_hash_id(iVar5);
        if (bVar1 != uVar6) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0xe6,"pkey_rsa_verifyrecover");
          ERR_set_error(4,100,0);
          goto LAB_00431cad;
        }
        iVar5 = EVP_MD_get_size(*(undefined8 *)(lVar2 + 0x20));
        if (iVar5 != iVar4 + -1) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0xea,"pkey_rsa_verifyrecover");
          ERR_set_error(4,0x8f,0);
          goto LAB_00431cad;
        }
        if (param_2 != (uchar *)0x0) {
          memcpy(param_2,*(void **)(lVar2 + 0x38),__n);
        }
        goto LAB_00431ca4;
      }
    }
    else if (*(int *)(lVar2 + 0x1c) == 1) {
      uVar3 = EVP_MD_get_type();
      iVar4 = ossl_rsa_verify(uVar3,0,0,param_2,local_48,param_4,param_5,rsa);
      iVar7 = local_48[0];
      if (iVar4 < 1) {
        iVar7 = 0;
        goto LAB_00431cad;
      }
      goto joined_r0x00431cf7;
    }
    iVar7 = -1;
  }
LAB_00431cad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar7;
}

