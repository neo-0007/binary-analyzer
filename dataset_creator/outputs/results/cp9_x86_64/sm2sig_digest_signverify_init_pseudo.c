
undefined8
sm2sig_digest_signverify_init(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = sm2sig_signature_init(param_1,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = sm2sig_set_mdname(param_1,param_2), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x168) == 0) {
      lVar4 = EVP_MD_CTX_new();
      *(long *)(param_1 + 0x168) = lVar4;
      if (lVar4 == 0) goto LAB_0047fff6;
    }
    uVar2 = EVP_MD_get_type(*(undefined8 *)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x158) = 0;
    iVar1 = WPACKET_init_der(auStack_68,param_1 + 0x4b,0x100);
    if (((iVar1 != 0) &&
        (iVar1 = ossl_DER_w_algorithmIdentifier_SM2_with_MD
                           (auStack_68,0xffffffff,*(undefined8 *)(param_1 + 0x10),uVar2), iVar1 != 0
        )) && (iVar1 = WPACKET_finish(auStack_68), iVar1 != 0)) {
      WPACKET_get_total_written(auStack_68,param_1 + 0x158);
      uVar3 = WPACKET_get_curr(auStack_68);
      *(undefined8 *)(param_1 + 0x150) = uVar3;
    }
    WPACKET_cleanup(auStack_68);
    iVar1 = EVP_DigestInit_ex2(*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x160),
                               param_4);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
      uVar3 = 1;
      goto LAB_0047fff8;
    }
  }
LAB_0047fff6:
  uVar3 = 0;
LAB_0047fff8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

