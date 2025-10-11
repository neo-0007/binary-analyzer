
void kdf_pkcs12_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  kdf_pkcs12_cleanup();
  *param_1 = uVar1;
  return;
}

