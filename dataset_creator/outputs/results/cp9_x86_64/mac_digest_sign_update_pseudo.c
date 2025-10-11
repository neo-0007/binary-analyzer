
undefined8 mac_digest_sign_update(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = EVP_MAC_update();
    return uVar1;
  }
  return 0;
}

