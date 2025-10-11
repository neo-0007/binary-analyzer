
undefined8 FUN_0046b810(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_0041cdd0(param_2,"size");
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  lVar3 = FUN_0043c7e0(param_1 + 0x10);
  if (lVar3 != 0) {
    iVar1 = FUN_0040ac10();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uVar4 = thunk_FUN_0041d9c0(lVar2,(long)iVar1);
    return uVar4;
  }
  FUN_0051f420(0);
  FUN_0051f540("../providers/implementations/kdfs/sskdf.c",0x152,"sskdf_size");
  FUN_0051f8f0(0x39,0x81,0);
  uVar4 = thunk_FUN_0041d9c0(lVar2,0);
  return uVar4;
}

