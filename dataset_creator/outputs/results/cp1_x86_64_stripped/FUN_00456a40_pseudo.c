
uint FUN_00456a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  lVar3 = FUN_004ee2d0();
  if (lVar3 != 0) {
    iVar1 = FUN_004ef870(lVar3);
    if (iVar1 != 0) {
      lVar5 = FUN_004239c0(iVar1);
      if (lVar5 == 0) {
        return 0;
      }
      uVar2 = FUN_004ef8b0(lVar3);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_00424a00(lVar5);
        if (lVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x2b1,
                       "prepare_ec_params");
          FUN_0051f8f0(0x39,0xd1,0);
          FUN_004a06b0(lVar5);
          return 0;
        }
        *param_4 = lVar5;
        *param_5 = 6;
        return uVar2 & 1;
      }
    }
    piVar4 = (int *)FUN_004a21f0();
    if (piVar4 == (int *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x288,
                   "prepare_ec_explicit_params");
      FUN_0051f8f0(0x39,0xc0100,0);
      return 0;
    }
    iVar1 = FUN_004ea7e0(param_1,piVar4 + 2);
    *piVar4 = iVar1;
    if (0 < iVar1) {
      *param_5 = 0x10;
      *param_4 = (long)piVar4;
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x28e,
                 "prepare_ec_explicit_params");
    FUN_0051f8f0(0x39,0xc0100,0);
    FUN_004a2270(piVar4);
  }
  return 0;
}

