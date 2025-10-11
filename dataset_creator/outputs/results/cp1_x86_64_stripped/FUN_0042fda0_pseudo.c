
undefined8 FUN_0042fda0(undefined2 *param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  if (param_4 < param_2 + -10) {
    *param_1 = 0x100;
    lVar3 = (long)((param_2 + -3) - param_4);
    lVar1 = thunk_FUN_00713720(param_1 + 1,0xff,lVar3);
    puVar2 = (undefined1 *)(lVar1 + lVar3);
    *puVar2 = 0;
    thunk_FUN_00713a50(puVar2 + 1,param_3,param_4);
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x27,"RSA_padding_add_PKCS1_type_1");
  FUN_0051f8f0(4,0x6e,0);
  return 0;
}

