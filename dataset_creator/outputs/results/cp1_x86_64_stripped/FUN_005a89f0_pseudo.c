
undefined8 FUN_005a89f0(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0;
    param_4 = 0;
  }
  else {
    if (param_4 == 0) {
      param_4 = thunk_FUN_007129d0(param_3);
    }
    lVar1 = FUN_0041ad90(param_4 + 1,"../crypto/x509/x509_vpm.c",0xf7);
    if (lVar1 == 0) {
      return 0;
    }
    thunk_FUN_00713a50(lVar1,param_3,param_4);
    *(undefined1 *)(lVar1 + param_4) = 0;
  }
  FUN_0041ad60(*param_1,"../crypto/x509/x509_vpm.c",0x100);
  *param_1 = lVar1;
  if (param_2 != (long *)0x0) {
    *param_2 = param_4;
  }
  return 1;
}

