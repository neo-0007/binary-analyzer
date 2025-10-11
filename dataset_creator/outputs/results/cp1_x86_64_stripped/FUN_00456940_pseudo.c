
undefined8
FUN_00456940(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)FUN_004a21f0();
  if (piVar2 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x1c1,
                 "prepare_dh_params");
    FUN_0051f8f0(0x39,0xc0100,0);
    uVar3 = 0;
  }
  else {
    if (param_2 == 0x398) {
      iVar1 = FUN_004d32c0(param_1,piVar2 + 2);
      *piVar2 = iVar1;
    }
    else {
      iVar1 = FUN_004d3150();
      *piVar2 = iVar1;
    }
    if (iVar1 < 1) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x1cb,
                   "prepare_dh_params");
      FUN_0051f8f0(0x39,0xc0100,0);
      FUN_004a2270(piVar2);
      return 0;
    }
    piVar2[1] = 0x10;
    uVar3 = 1;
    *param_4 = piVar2;
    *param_5 = 0x10;
  }
  return uVar3;
}

