
undefined8 ossl_siv128_aad(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_50;
  ulong local_48;
  ulong local_40;
  long local_30;
  
  uVar1 = param_1[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *param_1;
  local_50 = 0x10;
  uVar3 = (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38) * 2;
  uVar5 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
          (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar2 = uVar5 * 2;
  uVar5 = (uint)((long)uVar5 >> 0x3f) & 0x87 ^ uVar3;
  *param_1 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | ((uVar1 << 0x38) >> 0x3f | uVar2) << 0x38;
  param_1[1] = uVar3 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  lVar6 = EVP_MAC_CTX_dup(param_1[6]);
  if (lVar6 != 0) {
    iVar4 = EVP_MAC_update(lVar6,param_2,param_3);
    if (iVar4 != 0) {
      iVar4 = EVP_MAC_final(lVar6,&local_48,&local_50,0x10);
      if ((iVar4 != 0) && (local_50 == 0x10)) {
        EVP_MAC_CTX_free(lVar6);
        *param_1 = *param_1 ^ local_48;
        param_1[1] = param_1[1] ^ local_40;
        uVar7 = 1;
        goto LAB_0053e074;
      }
    }
  }
  EVP_MAC_CTX_free(lVar6);
  uVar7 = 0;
LAB_0053e074:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

