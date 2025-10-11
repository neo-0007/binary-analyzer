
int tls1_prf_P_hash(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,void *param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MAC_init();
  if (iVar1 != 0) {
    uVar2 = EVP_MAC_CTX_get_mac_size(param_1);
    if (uVar2 != 0) {
      lVar3 = EVP_MAC_CTX_dup(param_1);
      if (lVar3 != 0) {
        if (param_4 != 0) {
          lVar4 = 0;
          iVar1 = EVP_MAC_update(lVar3,param_4,param_5);
          if (iVar1 == 0) goto LAB_0046a6a2;
        }
        while( true ) {
          iVar1 = EVP_MAC_final(lVar3,local_88,&local_90,0x40);
          if (iVar1 == 0) break;
          EVP_MAC_CTX_free(lVar3);
          lVar4 = EVP_MAC_CTX_dup(param_1);
          if (lVar4 == 0) goto LAB_0046a69b;
          iVar1 = EVP_MAC_update(lVar4,local_88,local_90);
          if (iVar1 == 0) {
LAB_0046a7b8:
            lVar3 = 0;
            goto LAB_0046a6a2;
          }
          if (param_7 <= uVar2) {
            if (param_4 != 0) {
              iVar1 = EVP_MAC_update(lVar4,param_4,param_5);
              if (iVar1 == 0) goto LAB_0046a7b8;
            }
            iVar1 = EVP_MAC_final(lVar4,local_88,&local_90,0x40);
            lVar3 = 0;
            if (iVar1 != 0) {
              memcpy(param_6,local_88,param_7);
              iVar1 = 1;
              lVar3 = 0;
            }
            goto LAB_0046a6a2;
          }
          lVar3 = EVP_MAC_CTX_dup(lVar4);
          if (lVar3 == 0) {
            iVar1 = 0;
            goto LAB_0046a6a2;
          }
          if (param_4 != 0) {
            iVar1 = EVP_MAC_update(lVar4,param_4,param_5);
            if (iVar1 == 0) {
              iVar1 = 0;
              goto LAB_0046a6a2;
            }
          }
          iVar1 = EVP_MAC_final(lVar4,param_6,0,param_7);
          if (iVar1 == 0) goto LAB_0046a6a2;
          EVP_MAC_CTX_free(lVar4);
          param_6 = (void *)((long)param_6 + uVar2);
          param_7 = param_7 - uVar2;
        }
        lVar4 = 0;
        iVar1 = 0;
        goto LAB_0046a6a2;
      }
    }
  }
LAB_0046a69b:
  iVar1 = 0;
  lVar4 = 0;
  lVar3 = 0;
LAB_0046a6a2:
  EVP_MAC_CTX_free(lVar4);
  EVP_MAC_CTX_free(lVar3);
  OPENSSL_cleanse(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

