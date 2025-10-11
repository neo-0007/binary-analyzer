
undefined8 FUN_00613d40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_004a7700();
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0049f880(lVar2,param_2);
    if (iVar1 != 0) {
      uVar3 = FUN_00613880(param_1,lVar2);
      thunk_FUN_004a2270(lVar2);
      return uVar3;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_sxnet.c",0xdd,"SXNET_get_id_ulong");
  FUN_0051f8f0(0x22,0xc0100,0);
  thunk_FUN_004a2270(lVar2);
  return 0;
}

