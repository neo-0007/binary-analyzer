
int ossl_rsa_padding_check_PKCS1_type_2
              (undefined8 param_1,long param_2,uint param_3,byte *param_4,int param_5,int param_6,
              undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *ptr;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  undefined1 local_148 [256];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_3 < 1 || param_5 < 1) || (param_6 != param_5)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x1a7,"ossl_rsa_padding_check_PKCS1_type_2");
    iVar3 = -1;
    ERR_set_error(4,0xc0103,0);
    goto LAB_0055c9a2;
  }
  ptr = CRYPTO_malloc(param_5,"../crypto/rsa/rsa_pk1.c",0x1ac);
  if (ptr == (void *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x1ae,"ossl_rsa_padding_check_PKCS1_type_2");
    iVar3 = -1;
    ERR_set_error(4,0xc0100,0);
    goto LAB_0055c9a2;
  }
  iVar3 = ossl_rsa_prf(param_1,ptr,param_5,"message",7,param_7,param_5 * 8 & 0xffff);
  if (iVar3 < 0) {
LAB_0055c960:
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x20b,"ossl_rsa_padding_check_PKCS1_type_2");
    iVar3 = -1;
    ERR_set_error(4,0xc0103,0);
  }
  else {
    puVar8 = local_148;
    iVar3 = ossl_rsa_prf(param_1,puVar8,0x100,"length",6,param_7);
    if (iVar3 < 0) goto LAB_0055c960;
    uVar11 = param_5 - 10;
    uVar4 = uVar11 >> 1 & 0x7fff | uVar11;
    uVar4 = uVar4 >> 2 & 0x3fff | uVar4;
    uVar4 = uVar4 >> 4 & 0xfff | uVar4;
    uVar7 = 0;
    do {
      uVar2 = *puVar8;
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 2;
      uVar9 = (uint)CONCAT11(uVar2,*puVar1) & (uVar4 >> 8 & 0xff | uVar4);
      uVar5 = (int)((uVar9 - (uVar11 & 0xffff) ^ uVar11 & 0xffff | (uVar9 ^ uVar11) & 0xffff) ^
                   uVar9) >> 0x1f;
      uVar7 = ~uVar5 & uVar7 | uVar9 & uVar5;
    } while (local_48 != puVar8);
    if (param_5 < 3) {
      uVar5 = 0xffffffff;
      uVar4 = 1;
      uVar11 = 0;
    }
    else {
      lVar10 = 2;
      uVar11 = 0;
      uVar4 = 0;
      do {
        uVar9 = (int)(~(uint)param_4[lVar10] & param_4[lVar10] - 1) >> 0x1f;
        uVar5 = ~uVar4 & uVar9;
        uVar4 = uVar4 | uVar9;
        uVar9 = (uint)lVar10;
        lVar10 = lVar10 + 1;
        uVar11 = uVar5 & uVar9 | ~uVar5 & uVar11;
      } while (param_5 != lVar10);
      uVar4 = uVar11 + 1;
      uVar5 = param_6 - uVar4;
      uVar11 = ~((int)((param_3 - uVar5 ^ uVar5 | uVar5 ^ param_3) ^ param_3) >> 0x1f) &
               ~((int)(uVar11 ^ (uVar11 - 10 ^ 10 | uVar11 ^ 10)) >> 0x1f) &
               (int)(~(uint)*param_4 & *param_4 - 1 & (param_4[1] ^ 2) - 1 & ~(uint)(param_4[1] ^ 2)
                    ) >> 0x1f;
      uVar5 = ~uVar11;
    }
    uVar4 = uVar11 & uVar4 | param_5 - uVar7 & uVar5;
    if ((int)uVar4 < param_5) {
      lVar10 = (long)(int)(uVar4 + 1);
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        iVar6 = (int)lVar10;
        *(byte *)((param_2 - (int)uVar4) + -1 + lVar10) =
             param_4[lVar10 + -1] & (byte)uVar11 |
             *(byte *)((long)ptr + lVar10 + -1) & ~(byte)uVar11;
        lVar10 = lVar10 + 1;
      } while (iVar6 < param_5 && iVar3 < (int)param_3);
    }
    else {
      iVar3 = 0;
    }
  }
  CRYPTO_free(ptr);
LAB_0055c9a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

