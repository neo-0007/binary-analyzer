
void dlsym_doit(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _dl_sym(*param_1,param_1[1],param_1[2]);
  param_1[3] = uVar1;
  return;
}

