
undefined8 FUN_0046f600(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 == 0) || (iVar1 = FUN_0046f1c0(), iVar1 != 0)) &&
     ((lVar2 = thunk_FUN_0041cdd0(param_2,"safeprime-generator"), lVar2 == 0 ||
      (iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 0x40), iVar1 != 0)))) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"gindex");
    if (((((lVar2 == 0) && (lVar2 = thunk_FUN_0041cdd0(param_2,"pcounter"), lVar2 == 0)) &&
         (lVar2 = thunk_FUN_0041cdd0(param_2,"hindex"), lVar2 == 0)) &&
        ((lVar2 = thunk_FUN_0041cdd0(param_2,"seed"), lVar2 == 0 &&
         (lVar2 = thunk_FUN_0041cdd0(param_2,"qbits"), lVar2 == 0)))) &&
       ((lVar2 = thunk_FUN_0041cdd0(param_2,"digest"), lVar2 == 0 &&
        (lVar2 = thunk_FUN_0041cdd0(param_2,"properties"), lVar2 == 0)))) {
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/dh_kmgmt.c",0x29e,"dh_gen_set_params");
    FUN_0051f8f0(0x39,0x80106,0);
  }
  return 0;
}

