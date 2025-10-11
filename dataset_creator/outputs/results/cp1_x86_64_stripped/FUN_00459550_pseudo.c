
undefined8
FUN_00459550(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  lVar2 = FUN_004d8d30();
  lVar3 = FUN_004d8d40(param_1);
  lVar4 = FUN_004d8d50(param_1);
  if ((((param_3 == 0) || (lVar2 == 0)) || (lVar3 == 0)) || (lVar4 == 0)) {
    *param_4 = 0;
    uVar5 = 1;
    *param_5 = 0xffffffff;
  }
  else {
    piVar6 = (int *)FUN_004a21f0();
    if (piVar6 == (int *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x229,
                   "encode_dsa_params");
      FUN_0051f8f0(0x39,0xc0100,0);
      uVar5 = 0;
    }
    else {
      iVar1 = FUN_004d7bf0(param_1,piVar6 + 2);
      *piVar6 = iVar1;
      if (iVar1 < 1) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x230,
                     "encode_dsa_params");
        FUN_0051f8f0(0x39,0xc0100,0);
        FUN_004a2270(piVar6);
        uVar5 = 0;
      }
      else {
        *param_5 = 0x10;
        uVar5 = 1;
        *param_4 = piVar6;
      }
    }
  }
  return uVar5;
}

