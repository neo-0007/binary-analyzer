
undefined8 FUN_006118c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_004ae9e0(param_3,"%*s",param_4,&DAT_0083e5c2);
  if (*param_2 != 0) {
    FUN_004ab7e0(param_3,"Not Before: ",0xc);
    FUN_005b4630(param_3,*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    FUN_004ab7e0(param_3,&DAT_00801fb4,2);
  }
  if (param_2[1] != 0) {
    FUN_004ab7e0(param_3,"Not After: ",0xb);
    FUN_005b4630(param_3,param_2[1]);
  }
  return 1;
}

