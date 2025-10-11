
undefined4 FUN_005afe20(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *param_2;
  switch(param_1) {
  case 3:
    thunk_FUN_004a2270(*(undefined8 *)(lVar1 + 0x60));
    FUN_0041ad60(*(undefined8 *)(lVar1 + 0x70),"../crypto/x509/x_req.c",0x3f);
    return 1;
  case 4:
    thunk_FUN_004a2270(*(undefined8 *)(lVar1 + 0x60));
  case 1:
    *(undefined8 *)(lVar1 + 0x60) = 0;
    return 1;
  case 0xf:
    iVar2 = FUN_005afdb0(lVar1,param_4[0xd],param_4[0xe]);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_4[5] != 0) && (lVar3 = FUN_005ae7f0(), lVar3 != 0)) {
      lVar3 = FUN_0040fa00(lVar3);
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x_req.c",0x4d,"req_cb");
        FUN_0051f8f0(0xb,0xc0100,0);
        return 0;
      }
      iVar2 = FUN_005ae4f0(lVar1 + 0x28,lVar3);
      if (iVar2 != 0) {
        FUN_0040f4f0(lVar3);
        return 1;
      }
      FUN_0040f4f0(lVar3);
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x_req.c",0x52,"req_cb");
      FUN_0051f8f0(0xb,0xc0103,0);
      return 0;
    }
    break;
  case 0x10:
    *param_4 = *(undefined8 *)(lVar1 + 0x68);
    return 1;
  case 0x11:
    *param_4 = *(undefined8 *)(lVar1 + 0x70);
    return 1;
  }
  return 1;
}

