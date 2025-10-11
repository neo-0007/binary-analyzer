
void padlock_ctr32_encrypt_glue
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  padlock_ctr32_encrypt(param_2,param_1,param_4,param_3 << 4);
  return;
}

