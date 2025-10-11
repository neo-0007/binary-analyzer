
undefined4 FUN_00452f50(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 != 0) && (lVar2 = thunk_FUN_0041cdd0(param_2,"xoflen"), lVar2 != 0)) &&
     (iVar1 = thunk_FUN_0041d830(lVar2,param_1 + 0xd0), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/digests/sha3_prov.c",0x126,"shake_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
    return 0;
  }
  return 1;
}

