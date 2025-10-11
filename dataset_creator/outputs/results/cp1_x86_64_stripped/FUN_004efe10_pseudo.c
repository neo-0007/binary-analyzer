
void FUN_004efe10(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  FUN_004ef690(param_1);
  FUN_004b9810(param_1[0x12]);
  FUN_004efdb0(param_1[1]);
  FUN_004b7f20(param_1[2]);
  FUN_004b7f20(param_1[3]);
  FUN_0041aef0(param_1[6],param_1[7],"../crypto/ec/ec_lib.c",0x9c);
  FUN_0041aef0(param_1,0xb8,"../crypto/ec/ec_lib.c",0x9d);
  return;
}

