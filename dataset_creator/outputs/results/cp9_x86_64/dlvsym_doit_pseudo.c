
void dlvsym_doit(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _dl_vsym(*param_1,param_1[1],param_1[2],param_1[3]);
  param_1[4] = uVar1;
  return;
}

