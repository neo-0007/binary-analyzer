
void kdf_pbkdf2_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  kdf_pbkdf2_cleanup();
  *param_1 = uVar1;
  kdf_pbkdf2_init(param_1);
  return;
}

