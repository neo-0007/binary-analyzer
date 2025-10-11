
int eddsa_digest_signverify_init(long param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) goto LAB_0047c1f0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",99,
                  "eddsa_digest_signverify_init");
    ERR_set_error(0x39,0x7a,0);
    goto LAB_0047c1f0;
  }
  if (param_3 == 0) {
    iVar1 = 1;
    if (*(long *)(param_1 + 8) == 0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",0x6b,
                    "eddsa_digest_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    goto LAB_0047c1f0;
  }
  iVar1 = ossl_ecx_key_up_ref(param_3);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",0x70,
                  "eddsa_digest_signverify_init");
    ERR_set_error(0x39,0xc0103,0);
    iVar1 = 0;
    goto LAB_0047c1f0;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  iVar1 = WPACKET_init_der(auStack_68,param_1 + 0x10,0x100);
  if (*(int *)(param_3 + 0x60) == 2) {
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(auStack_68,0xffffffff,param_3);
joined_r0x0047c306:
      if ((iVar1 != 0) && (iVar1 = WPACKET_finish(auStack_68), iVar1 != 0)) {
        WPACKET_get_total_written(auStack_68,param_1 + 0x118);
        uVar2 = WPACKET_get_curr(auStack_68);
        *(undefined8 *)(param_1 + 0x110) = uVar2;
      }
    }
  }
  else {
    if (*(int *)(param_3 + 0x60) != 3) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",0x86,
                    "eddsa_digest_signverify_init");
      ERR_set_error(0x39,0xc0103,0);
      ossl_ecx_key_free(param_3);
      goto LAB_0047c1f0;
    }
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_algorithmIdentifier_ED448(auStack_68,0xffffffff,param_3);
      goto joined_r0x0047c306;
    }
  }
  iVar1 = 1;
  WPACKET_cleanup(auStack_68);
  *(long *)(param_1 + 8) = param_3;
LAB_0047c1f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

