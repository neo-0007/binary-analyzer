
int FUN_00514ab0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    uVar2 = FUN_005c0c20(*param_2,*(undefined4 *)param_3);
    iVar1 = FUN_005146f0(param_1,uVar2);
    if (iVar1 != 0) {
      uVar3 = FUN_004abd40(uVar2,3,0,param_2);
      iVar1 = 1;
      *param_3 = uVar3;
    }
    FUN_004ab560(uVar2);
    return iVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x97,"OSSL_DECODER_from_data");
  FUN_0051f8f0(0x3c,0xc0102,0);
  return 0;
}

