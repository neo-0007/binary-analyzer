
void FUN_0059f830(long param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_0041ad60(param_1,"../crypto/x509/x509_lu.c",0x29);
    return;
  }
  return;
}

