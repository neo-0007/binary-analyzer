
undefined4
FUN_00456330(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
            undefined8 param_5,code *param_6,code *param_7,long param_8,undefined8 param_9,
            undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                 "key2any_encode");
    FUN_0051f8f0(0x39,0xc0102,0);
    return 0;
  }
  if ((param_6 != (code *)0x0) && (iVar1 = (*param_6)(param_3,param_4), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x423,
                 "key2any_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  lVar3 = FUN_0043bf50(*param_1,param_2);
  if ((lVar3 == 0) ||
     ((param_8 != 0 && (iVar1 = FUN_00549540(param_1 + 3,param_8,param_9), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*param_7)(lVar3,param_3,param_4,param_5,param_10,param_11,param_1);
  }
  FUN_004ab560(lVar3);
  return uVar2;
}

