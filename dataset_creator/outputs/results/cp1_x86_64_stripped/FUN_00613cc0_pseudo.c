
undefined8 FUN_00613cc0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0059d060(0);
  if (lVar1 == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/x509/v3_sxnet.c",0xce,"SXNET_get_id_asc");
    FUN_0051f8f0(0x22,0x83,0);
  }
  else {
    uVar2 = FUN_00613880(param_1,lVar1);
    thunk_FUN_004a2270(lVar1);
  }
  return uVar2;
}

