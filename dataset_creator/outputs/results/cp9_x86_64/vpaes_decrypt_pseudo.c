
void vpaes_decrypt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qb;
  
  _vpaes_preheat(*param_1);
  uVar1 = _vpaes_decrypt_core();
  *param_2 = uVar1;
  param_2[1] = extraout_XMM0_Qb;
  return;
}

