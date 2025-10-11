
undefined8 FUN_004342f0(undefined1 *param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = (param_2 - param_4) + -2;
  if (-1 < iVar3) {
    puVar2 = param_1 + 1;
    if (iVar3 == 0) {
      *param_1 = 0x6a;
    }
    else {
      *param_1 = 0x6b;
      if (iVar3 != 1) {
        thunk_FUN_00713720(puVar2,0xbb,(long)((param_2 - param_4) + -3));
        puVar2 = param_1 + iVar3;
      }
      *puVar2 = 0xba;
      puVar2 = puVar2 + 1;
    }
    lVar1 = thunk_FUN_00713a50(puVar2,param_3,param_4);
    *(undefined1 *)(lVar1 + param_4) = 0xcc;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rsa/rsa_x931.c",0x24,"RSA_padding_add_X931");
  FUN_0051f8f0(4,0x6e,0);
  return 0xffffffff;
}

