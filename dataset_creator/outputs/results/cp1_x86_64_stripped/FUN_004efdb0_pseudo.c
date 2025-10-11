
void FUN_004efdb0(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x60);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  FUN_0041aef0(param_1,0x30,"../crypto/ec/ec_lib.c",0x2fd);
  return;
}

