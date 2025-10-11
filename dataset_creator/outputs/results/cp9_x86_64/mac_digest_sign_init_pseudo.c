
bool mac_digest_sign_init(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ENGINE *e;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if (param_1 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_3 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/mac_legacy_sig.c",0x6d,
                    "mac_digest_sign_init");
      ERR_set_error(0x39,0x72,0);
      return false;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (param_3 == 0) goto LAB_0047c754;
  }
  iVar1 = ossl_mac_key_up_ref(param_3);
  if (iVar1 == 0) {
    return false;
  }
  ossl_mac_key_free(*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = param_3;
  lVar3 = param_3;
LAB_0047c754:
  lVar2 = *(long *)(lVar3 + 0x28);
  if (lVar2 != 0) {
    lVar2 = EVP_CIPHER_get0_name(lVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  e = *(ENGINE **)(lVar3 + 0x38);
  if (e != (ENGINE *)0x0) {
    e = (ENGINE *)ENGINE_get_id(e);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  iVar1 = ossl_prov_set_macctx
                    (*(undefined8 *)(param_1 + 0x18),0,lVar2,param_2,e,*(undefined8 *)(lVar3 + 0x40)
                     ,0,0);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = EVP_MAC_init(*(undefined8 *)(param_1 + 0x18),
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),param_4);
  return iVar1 != 0;
}

