
undefined8 FUN_0052eb80(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_004098f0();
  uVar3 = 1;
  if (param_3 != 0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(lVar2 + 0x118) == 0) {
        thunk_FUN_00713a50(*(undefined8 *)(lVar2 + 0x2d8),param_3);
      }
      else {
        FUN_0054e250(lVar2 + 0x120,param_3,(long)*(int *)(lVar2 + 0x2e0));
      }
      *(undefined4 *)(lVar2 + 0x11c) = 1;
      *(undefined4 *)(lVar2 + 0x2e8) = 0;
      return 1;
    }
    iVar1 = FUN_0040a180(param_1);
    iVar1 = FUN_0049d140(param_2,iVar1 * 8,lVar2);
    FUN_0054df90(lVar2 + 0x120,lVar2,FUN_0049cb40);
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/e_aria.c",0xe6,"aria_gcm_init_key");
      FUN_0051f8f0(6,0xb0,0);
      uVar3 = 0;
    }
    else {
      if ((param_3 != 0) ||
         ((*(int *)(lVar2 + 0x11c) != 0 && (param_3 = *(long *)(lVar2 + 0x2d8), param_3 != 0)))) {
        FUN_0054e250(lVar2 + 0x120,param_3,(long)*(int *)(lVar2 + 0x2e0));
        *(undefined4 *)(lVar2 + 0x11c) = 1;
      }
      *(undefined4 *)(lVar2 + 0x118) = 1;
      uVar3 = 1;
    }
  }
  return uVar3;
}

