
undefined8 FUN_00613b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0059d060(0);
  if (lVar1 != 0) {
    uVar2 = FUN_006138f0(param_1,lVar1,param_3,param_4);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_sxnet.c",0x79,"SXNET_add_id_asc");
  FUN_0051f8f0(0x22,0x83,0);
  return 0;
}

