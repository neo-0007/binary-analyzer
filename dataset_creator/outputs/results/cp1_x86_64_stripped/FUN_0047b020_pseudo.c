
undefined8
FUN_0047b020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xf8);
  if (*plVar1 != 0) {
    lVar2 = plVar1[4];
    thunk_FUN_00713720(plVar1 + 5,0,lVar2);
    thunk_FUN_00713720(plVar1 + 0xd,1,lVar2);
    uVar3 = FUN_0047ae30(*(undefined8 *)(param_1 + 0xf8),param_2,param_3,param_4,param_5,param_6);
    return uVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/rands/drbg_hmac.c",0x82,"drbg_hmac_instantiate");
  FUN_0051f8f0(0x39,0x96,0);
  return 0;
}

